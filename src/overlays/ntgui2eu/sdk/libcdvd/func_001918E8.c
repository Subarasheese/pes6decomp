/* compiler: ee-gcc-2.9-G0 */
/* Komasia/sly2-decomp, src/lib/sceCdInit.c (sceCdInit). See THIRD_PARTY.md. */

typedef struct {
    int pad[9];
    void *serve;
    int pad2[6];
} sceSifClientData;
extern int D_005C8DD0;
extern volatile int D_005C8DE0;
extern volatile int D_005C8DE4;
extern volatile int D_005C8DE8;
extern volatile int D_005C8DEC;
extern int D_005C8DF8;
extern int D_005C8DFC;
extern int D_005C8E04;
extern int D_005C8E08;
extern int D_005C8E0C;
extern int D_005C8E10;
extern int D_005C8E14;
extern int D_005C8E18;
extern int D_005C8E1C;
extern sceSifClientData D_011FD428;
extern int D_011FD480[];
extern int D_005C9FC0[];
extern char D_005FEB38[]; // "Libcdvd bind err %d CD_Init %d\n"
extern char D_005FEB58[]; // "Libcdvd Exit\n"
int func_0019DBD0(const char *, ...);
int func_00191670(int);
void func_0019E4A8(unsigned int);
int func_0019EC50(sceSifClientData *, unsigned int, unsigned int);
void func_0019E3F8(void *, int);
int func_0019EE30(sceSifClientData *, int, unsigned int, void *, int, void *, int, void *, void *);
void func_00190ED0(void);
void func_00190DE8(void);
int func_00191048(void);

static __inline__ void nopdelay(void) {
    int i = 0x100000;
    while (i--)
        ;
}

int func_001918E8(int mode) {
    int r;
    int *p;
    if (func_00191670(1))
        return 0;
    func_0019E4A8(0);
    D_005C8E0C = -1;
    D_005C8DFC = -1;
    D_005C8E14 = -1;
    D_005C8E10 = -1;
    D_005C8E18 = -1;
    D_005C8E08 = -1;
    D_005C8DE4 = 1;
    D_005C8DF8 = 0;
    *(volatile int *)&D_005C8E1C = D_005C8E1C + 1;
    while (1) {
        int b = func_0019EC50(&D_011FD428, 0x80000592, 0);
        if (b < 0) {
            if (D_005C8DD0 > 0)
                func_0019DBD0(D_005FEB38, b, D_005C8E1C);
            nopdelay();
            continue;
        }
        if (D_011FD428.serve != 0) {
            D_005C8E18 = 0;
            D_011FD480[0] = mode;
            func_0019E3F8(D_011FD480, 4);
            p = D_005C9FC0;
            if (func_0019EE30(&D_011FD428, 0, 0, D_011FD480, 4, p, 0x10, 0, 0) < 0) {
                D_005C8DE4 = 0;
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
            D_005C8DD0 = 1;
        } else if (b / 256 < 2 || c / 256 < 2) {
            r = 2;
        }
    }
    D_005C8DE4 = 0;
    switch (mode) {
    case 5:
        if (D_005C8DD0 > 0)
            func_0019DBD0(D_005FEB58);
        func_00190ED0();
        D_005C8DE8 = -1;
        D_005C8DEC = -1;
        D_005C8DE0 = -1;
        D_005C8E04 = 0;
        break;
    case 0:
    case 1:
    default:
        func_00190DE8();
        func_00191048();
        D_005C8E04 = 1;
        break;
    }
    return r;
}
