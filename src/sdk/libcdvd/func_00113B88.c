/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int _sceCd_ncmd_semid;
extern int D_00372A90;
extern int D_00372A9C;
extern int D_00372ABC;
extern Dev D_00373C50;
extern void func_00113590(void);
extern int func_00113D78(int);
extern void func_00105380(int);
extern int func_001053B0(int);
extern void printf(const char *, ...);
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, int, int);
extern char D_003C41C8[];
extern char D_003C41F0[];

int func_00113B88(int a) {
    int i;
    func_00113590();
    if (_sceCd_ncmd_semid != func_001053B0(_sceCd_ncmd_semid)) {
        if (D_00372A90 > 0) printf(D_003C41C8, a, D_00372A9C);
        return 0;
    }
    D_00372A9C = a;
    if (func_00113D78(1)) {
        func_00105380(_sceCd_ncmd_semid);
        return 0;
    }
    sceSifInitRpc(0);
    if (D_00372ABC < 0) {
        for (;;) {
            if (sceSifBindRpc(&D_00373C50, 0x80000595, 0) < 0) {
                if (D_00372A90 > 0) printf(D_003C41F0);
                for (i = 0x100000; i != -1; i--) ;
                continue;
            }
            if (D_00373C50.f24 != 0) break;
            for (i = 0x100000; i != -1; i--) ;
        }
        D_00372ABC = 0;
    }
    return 1;
}
