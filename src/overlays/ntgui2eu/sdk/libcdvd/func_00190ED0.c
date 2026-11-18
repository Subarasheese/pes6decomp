/* compiler: ee-gcc-2.9-as210-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005C8DD4;
extern volatile int D_005C8E20;
extern volatile int D_005C8DE0, D_005C8DE8, D_005C8DEC, D_005C8DF0;
extern void func_0019B140(int);
extern int func_0019B130(int);
extern int func_001A4728(void);
extern void func_0019E0A8(int);
extern int func_001A4778(void);

void func_00190ED0(void)
{
    int state;

    if (D_005C8DD4 != 0) {
        D_005C8E20 = -1;
        func_0019B140(D_005C8DE0);
    }
    func_0019B130(D_005C8DE8);
    func_0019B130(D_005C8DEC);
    func_0019B130(D_005C8DF0);
    func_0019B130(D_005C8DE0);
    state = func_001A4728();
    func_0019E0A8(0x80000012);
    if (state != 0)
        func_001A4778();
}
