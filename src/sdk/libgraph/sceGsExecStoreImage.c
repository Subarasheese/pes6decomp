/* compiler: ee-gcc-2.9-as210-G0 */
/* Adapted from OpenRAC/rac1-decomp, src/core/gs/store_image.c.
 * Copyright (c) 2026 Kryštof "Lynder063" Malinda and contributors. See THIRD_PARTY.md. */
extern void printf(const char *, ...);
extern unsigned int func_001056A0(unsigned int);
extern unsigned int func_00105680(void);
typedef int u128_si __attribute__((mode(TI)));
typedef struct {
    unsigned long SBP : 14;
    unsigned long p14 : 2;
    unsigned long SBW : 6;
    unsigned long p22 : 2;
    unsigned long SPSM : 6;
    unsigned long p30 : 2;
    unsigned long DBP : 14;
    unsigned long p46 : 2;
    unsigned long DBW : 6;
    unsigned long p54 : 2;
    unsigned long DPSM : 6;
    unsigned long p62 : 2;
} SiBitbltbuf;
typedef struct {
    unsigned long RRW : 12;
    unsigned long p12 : 20;
    unsigned long RRH : 12;
    unsigned long p44 : 20;
} SiTrxreg;
typedef struct {
    unsigned int vifcode[4];
    unsigned long giftag[2];
    SiBitbltbuf bitbltbuf;
    long bitbltbufaddr;
    unsigned long trxpos;
    long trxposaddr;
    SiTrxreg trxreg;
    long trxregaddr;
    unsigned long finish;
    long finishaddr;
    unsigned long trxdir;
    long trxdiraddr;
} SiStoreImage __attribute__((aligned(16)));

extern char D_003C3690[];
extern char D_003C36C8[];
extern char D_003C36F8[];
extern char D_003C3738[];
extern u128_si D_003711C0;

int sceGsExecStoreImage(SiStoreImage *sp, u128_si *dstaddr) {
    unsigned int cnt = 0;
    int nfull = 0, nrem = 0, nbyte = 0, nrest = 0;
    int w, h, psm, bytes, i, old, n;
    int h2;
    union {
        u128_si q;
        unsigned char c[16];
    } buf;

    w = sp->trxreg.RRW;
    h = sp->trxreg.RRH;
    psm = sp->bitbltbuf.SPSM;
    h2 = 0;
    switch (psm) {
    case 0x00:
    case 0x30:
        bytes = w * h * 4;
        nbyte = bytes & 0xF;
        nfull = (bytes >> 4) & ~7u;
        nrem = (bytes >> 4) & 7;
        if (!nbyte) {
            h2 = h;
            nrest = 0;
        } else {
            h2 = (h + 3) & ~3;
            n = w * h2;
            nrest = (n >> 2) - nfull - nrem - 1;
        }
        break;
    case 0x01:
    case 0x31:
        bytes = w * h * 3;
        nbyte = bytes & 0xF;
        nfull = (bytes >> 4) & ~7u;
        nrem = (bytes >> 4) & 7;
        if (!nbyte) {
            h2 = h;
            nrest = 0;
        } else {
            h2 = (h + 15) & ~15;
            n = w * h2;
            n = ((n * 3) >> 4) - nfull;
            nrest = n - nrem - 1;
        }
        break;
    case 0x02:
    case 0x0A:
    case 0x32:
    case 0x3A:
        bytes = w * h * 2;
        nbyte = bytes & 0xF;
        nrem = (bytes >> 4) & 7;
        nfull = (bytes >> 4) & ~7u;
        if (!nbyte) {
            h2 = h;
            nrest = 0;
        } else {
            h2 = (h + 7) & ~7u;
            n = w * h2;
            nrest = (n >> 3) - nfull - nrem - 1;
        }
        break;
    case 0x13:
    case 0x1B:
        bytes = w * h;
        nbyte = bytes & 0xF;
        nrem = (bytes >> 4) & 7;
        nfull = (bytes >> 4) & ~7u;
        if (!nbyte) {
            h2 = h;
            nrest = 0;
        } else {
            h2 = (h + 7) & ~7u;
            n = w * h2;
            nrest = (n >> 4) - nfull - nrem - 1;
        }
        break;
    case 0x14:
    case 0x24:
    case 0x2C:
        bytes = (w * h) >> 1;
        nbyte = bytes & 0xF;
        nrem = (bytes >> 4) & 7;
        nfull = (bytes >> 4) & ~7u;
        if (!nbyte) {
            h2 = h;
            nrest = 0;
        } else {
            h2 = (h + 7) & ~7u;
            n = w * h2;
            nrest = (n >> 5) - nfull - nrem - 1;
        }
        break;
    }

    if (nbyte) {
        *(long *)((unsigned int)&sp->trxreg | 0x20000000) =
            (long)(int)sp->trxreg.RRW | ((long)h2 << 32);
    }

    while (*(volatile int *)0x10009000 & 0x100) {
        if (cnt++ > 0x1000000) {
            printf(D_003C3690);
            return -1;
        }
    }

    old = func_001056A0(func_00105680() | 0x200);
    *(volatile long *)0x12001000 = 2;
    *(volatile int *)0x10009020 = 7;
    if (((unsigned int)sp & 0x70000000) == 0x70000000) {
        *(volatile int *)0x10009010 = ((unsigned int)sp & 0x0FFFFFFF) | 0x80000000;
    } else {
        *(volatile int *)0x10009010 = (unsigned int)sp & 0x0FFFFFFF;
    }
    *(volatile int *)0x10009000 = 0x101;
    while (*(volatile int *)0x10009000 & 0x100) {
        if (cnt++ > 0x1000000) {
            printf(D_003C3690);
            return -1;
        }
    }

    while (!(*(volatile long *)0x12001000 & 2)) {
        if (cnt++ > 0x1000000) {
            printf(D_003C36C8);
            *(volatile u128_si *)0x10005000 = D_003711C0;
            return -1;
        }
    }

    *(volatile int *)0x10003C00 = 0x800000;
    *(volatile long *)0x12001040 = 1;

    if (nfull) {
        *(volatile int *)0x10009020 = nfull;
        if (((unsigned int)dstaddr & 0x70000000) == 0x70000000) {
            *(volatile int *)0x10009010 = ((unsigned int)dstaddr & 0x0FFFFFFF) | 0x80000000;
        } else {
            *(volatile int *)0x10009010 = (unsigned int)dstaddr & 0x0FFFFFFF;
        }
        *(volatile int *)0x10009000 = 0x100;
        while (*(volatile int *)0x10009000 & 0x100) {
            if (cnt++ > 0x1000000) {
                printf(D_003C36F8);
                *(volatile long *)0x12001000 = 0x100;
                *(volatile long *)0x12001040 = 0;
                *(volatile int *)0x10003000 = 1;
                *(volatile int *)0x10003C10 = 1;
                return -1;
            }
        }
    }

    for (i = 0; i < nrem; i++) {
        while (!(*(volatile int *)0x10003C00 & 0x1F000000)) {
            if (cnt++ > 0x1000000) {
                printf(D_003C3738);
                *(volatile long *)0x12001000 = 0x100;
                *(volatile long *)0x12001040 = 0;
                *(volatile int *)0x10003000 = 1;
                *(volatile int *)0x10003C10 = 1;
                return -1;
            }
        }
        dstaddr[nfull + i] = *(volatile u128_si *)0x10005000;
    }

    if (nbyte) {
        while (!(*(volatile int *)0x10003C00 & 0x1F000000)) {
            if (cnt++ > 0x1000000) {
                printf(D_003C3738);
                *(volatile long *)0x12001000 = 0x100;
                *(volatile long *)0x12001040 = 0;
                *(volatile int *)0x10003000 = 1;
                *(volatile int *)0x10003C10 = 1;
                return -1;
            }
        }
        buf.q = *(volatile u128_si *)0x10005000;
        for (i = 0; i < nbyte; i++) {
            ((unsigned char *)&dstaddr[nfull + nrem])[i] = buf.c[i];
        }
        for (i = 0; i < nrest; i++) {
            while (!(*(volatile int *)0x10003C00 & 0x1F000000)) {
                if (cnt++ > 0x1000000) {
                    printf(D_003C3738);
                    *(volatile long *)0x12001000 = 0x100;
                    *(volatile long *)0x12001040 = 0;
                    *(volatile int *)0x10003000 = 1;
                    *(volatile int *)0x10003C10 = 1;
                    return -1;
                }
            }
            buf.q = *(volatile u128_si *)0x10005000;
        }
    }

    *(volatile int *)0x10003C00 = 0;
    *(volatile long *)0x12001040 = 0;
    func_001056A0(old);
    {
        u128_si t = D_003711C0;
        *(volatile long *)0x12001000 = 2;
        *(volatile u128_si *)0x10005000 = t;
    }
    return 0;
}
