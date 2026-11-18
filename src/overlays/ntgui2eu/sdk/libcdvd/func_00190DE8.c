/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct SemaParam { int current, max, init, wait; unsigned int attr; const char *option; };
extern volatile int D_005C8DE8, D_005C8DEC, D_005C8DF0, D_005C8DE0, D_005C8DF4;
extern char D_005FE9E0[], D_005FE9F0[], D_005FEA00[], D_005FEA10[];
extern int func_0019B120(void *);
void func_00190DE8(void) {
    struct SemaParam p;
    if (D_005C8DE8 == -1 || D_005C8DEC == -1 || D_005C8DF0 == -1) {
        p.init = 1;
        p.max = 1;
        p.option = D_005FE9E0;
        D_005C8DE8 = func_0019B120(&p);
        p.option = D_005FE9F0;
        D_005C8DEC = func_0019B120(&p);
        p.option = D_005FEA00;
        D_005C8DF0 = func_0019B120(&p);
        p.option = D_005FEA10;
        p.init = 0;
        D_005C8DE0 = func_0019B120(&p);
        D_005C8DF4 = 0;
    }
}
