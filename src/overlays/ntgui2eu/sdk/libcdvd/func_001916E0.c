/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int D_005C8DEC;
extern int D_005C8DD0;
extern int D_005C8DD8;
extern int D_005C8E14;
extern Dev D_005CA940;
extern void func_00190DE8(void);
extern int func_00191670(int);
extern void func_0019B140(int);
extern int func_0019B170(int);
extern void func_0019DBD0(const char *, ...);
extern void func_0019E4A8(int);
extern int func_0019EC50(void *, int, int);
extern char D_005FEAF8[];
extern char D_005FEB20[];

int func_001916E0(int a) {
    int i;
    func_00190DE8();
    if (D_005C8DEC != func_0019B170(D_005C8DEC)) {
        if (D_005C8DD0 > 0) func_0019DBD0(D_005FEAF8, a, D_005C8DD8);
        return 0;
    }
    D_005C8DD8 = a;
    if (func_00191670(1)) {
        func_0019B140(D_005C8DEC);
        return 0;
    }
    func_0019E4A8(0);
    if (D_005C8E14 < 0) {
        for (;;) {
            if (func_0019EC50(&D_005CA940, 0x80000593, 0) < 0) {
                if (D_005C8DD0 > 0) func_0019DBD0(D_005FEB20);
                for (i = 0x100000; i != -1; i--) ;
                continue;
            }
            if (D_005CA940.f24 != 0) break;
            for (i = 0x100000; i != -1; i--) ;
        }
        D_005C8E14 = 0;
    }
    return 1;
}
