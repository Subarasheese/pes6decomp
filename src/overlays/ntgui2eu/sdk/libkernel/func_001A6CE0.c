/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Pair { int reg; int value; };
extern struct Pair D_005CBF40[8];
extern char D_005CBBC0[];
extern int D_005CBF38;
extern void func_001A6CD0(int, int);
extern void func_001A6C78(unsigned int, void *, int);
extern void func_0019B3A0(int);
extern int func_001A6CC0(int);
void func_001A6CE0(void) {
    unsigned int i = 3;
    struct Pair *base = D_005CBF40;
    struct Pair *p;
    func_001A6CD0(base[0].reg, base[0].value);
    func_001A6C78(0x80075000U, D_005CBBC0, 0x330);
    func_0019B3A0(0);
    func_0019B3A0(2);
    func_001A6CD0(base[1].reg, base[1].value);
    func_001A6CD0(base[2].reg, base[2].value);
    p = base + 3;
    do {
        int v = func_001A6CC0(p->reg);
        i++;
        func_001A6CD0(p->reg, v);
        p++;
    } while (i < 8);
    D_005CBF38 = func_001A6CC0(3);
}
