/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int D_005C8DE8;
extern int D_005C8DD0;
extern int D_005C8DDC;
extern int D_005C8DFC;
extern Dev D_005C9F90;
extern void func_00190DE8(void);
extern int func_001915D0(int);
extern void func_0019B140(int);
extern int func_0019B170(int);
extern void func_0019DBD0(const char *, ...);
extern void func_0019E4A8(int);
extern int func_0019EC50(void *, int, int);
extern char D_005FEA98[];
extern char D_005FEAC0[];

int func_001913E0(int a) {
    int i;
    func_00190DE8();
    if (D_005C8DE8 != func_0019B170(D_005C8DE8)) {
        if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA98, a, D_005C8DDC);
        return 0;
    }
    D_005C8DDC = a;
    if (func_001915D0(1)) {
        func_0019B140(D_005C8DE8);
        return 0;
    }
    func_0019E4A8(0);
    if (D_005C8DFC < 0) {
        for (;;) {
            if (func_0019EC50(&D_005C9F90, 0x80000595, 0) < 0) {
                if (D_005C8DD0 > 0) func_0019DBD0(D_005FEAC0);
                for (i = 0x100000; i != -1; i--) ;
                continue;
            }
            if (D_005C9F90.f24 != 0) break;
            for (i = 0x100000; i != -1; i--) ;
        }
        D_005C8DFC = 0;
    }
    return 1;
}
