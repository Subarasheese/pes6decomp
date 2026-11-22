/* compiler: ee-gcc-2.9-G0 */
/* Komasia/sly2-decomp, src/lib/sceCdInit.c (sceCdInit). See THIRD_PARTY.md. */

typedef struct {
    int pad[9];
    void *serve;
    int pad2[6];
} sceSifClientData;
extern int D_00372A90;
extern volatile int D_00372AA0;
extern volatile int D_00372AA4;
extern volatile int _sceCd_ncmd_semid;
extern volatile int D_00372AAC;
extern int D_00372AB8;
extern int D_00372ABC;
extern int D_00372AC4;
extern int D_00372AC8;
extern int D_00372ACC;
extern int D_00372AD0;
extern int D_00372AD4;
extern int D_00372AD8;
extern int D_00372ADC;
extern sceSifClientData D_003F37E8;
extern int D_003F3840[];
extern int D_00373C80[];
extern char D_003C4268[]; // "Libcdvd bind err %d CD_Init %d\n"
extern char D_003C4288[]; // "Libcdvd Exit\n"
int printf(const char *, ...);
int func_00113E18(int);
void sceSifInitRpc(unsigned int);
int sceSifBindRpc(sceSifClientData *, unsigned int, unsigned int);
void sceSifWriteBackDCache(void *, int);
int sceSifCallRpc(sceSifClientData *, int, unsigned int, void *, int, void *, int, void *, void *);
void func_00113678(void);
void func_00113590(void);
int func_001137F0(void);

static __inline__ void nopdelay(void) {
    int i = 0x100000;
    while (i--)
        ;
}

int func_00114090(int mode) {
    int r;
    int *p;
    if (func_00113E18(1))
        return 0;
    sceSifInitRpc(0);
    D_00372ACC = -1;
    D_00372ABC = -1;
    D_00372AD4 = -1;
    D_00372AD0 = -1;
    D_00372AD8 = -1;
    D_00372AC8 = -1;
    D_00372AA4 = 1;
    D_00372AB8 = 0;
    *(volatile int *)&D_00372ADC = D_00372ADC + 1;
    while (1) {
        int b = sceSifBindRpc(&D_003F37E8, 0x80000592, 0);
        if (b < 0) {
            if (D_00372A90 > 0)
                printf(D_003C4268, b, D_00372ADC);
            nopdelay();
            continue;
        }
        if (D_003F37E8.serve != 0) {
            D_00372AD8 = 0;
            D_003F3840[0] = mode;
            sceSifWriteBackDCache(D_003F3840, 4);
            p = D_00373C80;
            if (sceSifCallRpc(&D_003F37E8, 0, 0, D_003F3840, 4, p, 0x10, 0, 0) < 0) {
                D_00372AA4 = 0;
                return 0;
            }
            break;
        }
        nopdelay();
    }
    {
        // reply words read through the uncached mirror
        int b = *(int *)((unsigned int)&p[1] | 0x20000000);
        int c = *(int *)((unsigned int)&p[2] | 0x20000000);
        int a = *(int *)((unsigned int)&p[3] | 0x20000000);
        r = 1;
        if (a == 0xFF) {
        } else if (a == 0xFE) {
            D_00372A90 = 1;
        } else if (b / 256 < 2 || c / 256 < 2) {
            r = 2;
        }
    }
    D_00372AA4 = 0;
    switch (mode) {
    case 5:
        if (D_00372A90 > 0)
            printf(D_003C4288);
        func_00113678();
        _sceCd_ncmd_semid = -1;
        D_00372AAC = -1;
        D_00372AA0 = -1;
        D_00372AC4 = 0;
        break;
    case 0:
    case 1:
    default:
        func_00113590();
        func_001137F0();
        D_00372AC4 = 1;
        break;
    }
    return r;
}
