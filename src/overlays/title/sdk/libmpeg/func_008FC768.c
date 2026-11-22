/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_0024bf40.c. See THIRD_PARTY.md. */
struct PIC {
    int f0; int f4; int f8; int fC; int f10; int pad14; long f18; long f20; int f28; int f2C; int f30; int f34; int f38;
    int f3C; int f40; int f44; int f48; int pad4C; int f50; int f54; int pad58; int f5C; int f60;
};
struct PKT { long r0; long r8; long dispfb1; long display1; long pmode1; long dispfb2; long display2; long pmode2; };
struct CTX {
    char pad0[8]; int f8; char padC[0x8C - 0xC]; int f8C; long f90; int f98; int f9C; long fA0; char padA8[0xC0 - 0xA8];
    int fC0; int fC4; int fC8; int fCC; int fD0; int fD4; int fD8; int fDC; int fE0; int fE4; char padE8[0xF0 - 0xE8];
    int fF0; int fF4; int fF8; int fFC; long f100; int f108; char pad10C[0x128 - 0x10C]; int f128; char pad12C[0x184 - 0x12C];
    int f184; char pad188[0x834 - 0x188]; int f834; char pad838[0x868 - 0x838]; struct PKT *pkt;
};
extern char D_00902188[];
int func_00107F90(char *, int, const char *, ...);
void func_00900500(struct CTX *, char *);
void func_008FCE98(struct CTX *, struct PIC *);
void func_008FC218(struct CTX *, struct PIC *);

static inline void SetCircuit(struct CTX *p, long *pdispfb, long *pdisplay, long *ppmode, struct PIC *pic)
{
    if (p->f8C != 0 && pic->f18 < 0 && p->f98 >= 0) {
        int field = p->fA0;
        long odd = field & 1;
        long f90odd = p->f90 & 1;
        int bit = odd & (p->f9C & 1) & f90odd;
        int half = (p->f90 * field) >> 1;
        *pdispfb = p->f98 + (half + bit);
        if (odd & p->f90)
            p->f9C++;
    } else {
        *pdispfb = pic->f18;
    }
    if (p->f108 == 2 && p->f100 >= 0) {
        *pdispfb = p->f100;
        p->f108 = 0;
        p->f100 = -1;
    }
    *pdisplay = pic->f20;
    *ppmode = (long)pic->f34 << 8 | (long)pic->f38 << 7 | (long)pic->f3C << 6 | (long)pic->f40 << 5 | (long)pic->f30 << 3 | (long)pic->f2C;
}

/* whether the frame buffer holds the picture; reports it when it does not */
static inline int FCheckFrameSize(struct CTX *p, struct PIC *pic)
{
    char buf[0x100];
    int fOk;
    if (p->fF4 != 0)
        fOk = p->fF0 >= pic->f4 && p->fF4 >= pic->f8;
    else
        fOk = p->fF8 >= pic->fC * pic->f10;
    if (!fOk) {
        func_00107F90(buf, 0x100, D_00902188, pic->f4, pic->f8);
        func_00900500(p, buf);
    }
    return fOk;
}

void func_008FC768(struct CTX *p, struct PIC *pic1, struct PIC *pic2)
{
    int mask = 0;
    struct PIC *picA;
    struct PIC *picB;
    int fOk;

    if (p->f184 == 2) {
        picA = pic1;
        picB = pic2;
        mask = 0x40;
    } else {
        picA = pic2;
        picB = pic1;
    }
    SetCircuit(p, &p->pkt->dispfb1, &p->pkt->display1, &p->pkt->pmode1, picA);
    p->f98 = p->pkt->dispfb1;
    p->fA0 = 1;
    SetCircuit(p, &p->pkt->dispfb2, &p->pkt->display2, &p->pkt->pmode2, picB);
    p->f98 = p->pkt->dispfb2;
    p->fA0 = 1;

    p->pkt->pmode1 |= mask;
    p->pkt->pmode2 |= mask;
    p->fE0 = picA->f5C;
    p->fE4 = picA->f60;
    p->fC8 = picA->f44;
    p->fCC = picB->f48;
    p->fD4 = picA->f50;
    p->fD8 = picB->f54;

    fOk = FCheckFrameSize(p, pic1);
    if (fOk && pic1->f28 == 1 && pic2->f28 == 1) {
        pic1->f10 *= 2;
        if (p->fC4 != 0)
            func_008FCE98(p, pic1);
        else
            func_008FC218(p, pic1);
        pic1->f10 >>= 1;
        if (p->f8 != 2) {
            p->f8 = 2;
            p->fC0 = p->f128;
        }
        p->f834 = 1;
    }
}
