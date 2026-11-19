/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int D_005C8DEC;
extern int D_005C8DD0, D_005C8E00, D_005C8E10;
extern int D_011FD490, D_005C9FC0;
extern Dev D_011FD450;
extern char D_005FEB68[], D_005FEB80[], D_005FEBA0[];
extern void func_00190DE8(void);
extern int func_00191670(int);
extern void func_0019B140(int);
extern int func_0019B170(int);
extern void func_0019DBD0(const char *, ...);
extern void func_0019E3F8(void *, int);
extern void func_0019E4A8(int);
extern int func_0019EC50(void *, int, int);
extern int func_0019EE30(void *, int, int, void *, int, void *, int, void *, void *);
extern int func_001A4728(void);
extern int func_001A4778(void);
int func_00191BD0(int a) {
    int i, intr, result;
    if (D_005C8DD0 > 0) func_0019DBD0(D_005FEB68);
    intr = func_001A4728();
    D_005C8E00 = 1;
    if (intr) func_001A4778();
    func_00190DE8();
    if (D_005C8DEC != func_0019B170(D_005C8DEC)) return 6;
    if (func_00191670(1)) {
        func_0019B140(D_005C8DEC);
        return a != 8 ? 6 : -1;
    }
    {
        func_0019E4A8(0);
        if (D_005C8E10 < 0) {
            for (;;) {
                if (func_0019EC50(&D_011FD450, 0x8000059A, 0) < 0) {
                    if (D_005C8DD0 > 0) func_0019DBD0(D_005FEB80);
                    for (i = 0x100000; i != -1; i--) ;
                    continue;
                }
                if (D_011FD450.f24 != 0) { D_005C8E10 = 0; break; }
                for (i = 0x100000; i != -1; i--) ;
            }
        }
        D_011FD490 = a;
        func_0019E3F8(&D_011FD490, 4);
        if (func_0019EE30(&D_011FD450, 0, 0, &D_011FD490, 4, &D_005C9FC0, 4, 0, 0) < 0) {
            func_0019B140(D_005C8DEC);
            return a != 8 ? 6 : -1;
        }
        {
            if (D_005C8DD0 > 0) func_0019DBD0(D_005FEBA0);
            result = *(int *)((unsigned int)&D_005C9FC0 | 0x20000000);
            func_0019B140(D_005C8DEC);
            return result;
        }
    }
}
