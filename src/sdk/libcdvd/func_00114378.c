/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int D_00372AAC;
extern int D_00372A90, D_00372AC0, D_00372AD0;
extern int D_003F3850, D_00373C80;
extern Dev D_003F3810;
extern char D_003C4298[], D_003C42B0[], D_003C42D0[];
extern void func_00113590(void);
extern int func_00113E18(int);
extern void func_00105380(int);
extern int func_001053B0(int);
extern void printf(const char *, ...);
extern void sceSifWriteBackDCache(void *, int);
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, int, int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern int DIntr(void);
extern int EIntr(void);
int func_00114378(int a) {
    int i, intr, result;
    if (D_00372A90 > 0) printf(D_003C4298);
    intr = DIntr();
    D_00372AC0 = 1;
    if (intr) EIntr();
    func_00113590();
    if (D_00372AAC != func_001053B0(D_00372AAC)) return 6;
    if (func_00113E18(1)) {
        func_00105380(D_00372AAC);
        return a != 8 ? 6 : -1;
    }
    {
        sceSifInitRpc(0);
        if (D_00372AD0 < 0) {
            for (;;) {
                if (sceSifBindRpc(&D_003F3810, 0x8000059A, 0) < 0) {
                    if (D_00372A90 > 0) printf(D_003C42B0);
                    for (i = 0x100000; i != -1; i--) ;
                    continue;
                }
                if (D_003F3810.f24 != 0) { D_00372AD0 = 0; break; }
                for (i = 0x100000; i != -1; i--) ;
            }
        }
        D_003F3850 = a;
        sceSifWriteBackDCache(&D_003F3850, 4);
        if (sceSifCallRpc(&D_003F3810, 0, 0, &D_003F3850, 4, &D_00373C80, 4, 0, 0) < 0) {
            func_00105380(D_00372AAC);
            return a != 8 ? 6 : -1;
        }
        {
            if (D_00372A90 > 0) printf(D_003C42D0);
            result = *(int *)((unsigned int)&D_00373C80 | 0x20000000);
            func_00105380(D_00372AAC);
            return result;
        }
    }
}
