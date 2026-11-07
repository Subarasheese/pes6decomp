/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Pair { int reg; int value; };
extern struct Pair D_00371738[8];
extern char D_003713B8[];
extern int D_00371730;
extern void func_0010ECE0(int, int);
extern void func_0010EC88(unsigned int, void *, int);
extern void FlushCache(int);
extern int func_0010ECD0(int);
void func_0010ECF0(void) {
    unsigned int i = 3;
    struct Pair *base = D_00371738;
    struct Pair *p;
    func_0010ECE0(base[0].reg, base[0].value);
    func_0010EC88(0x80075000U, D_003713B8, 0x330);
    FlushCache(0);
    FlushCache(2);
    func_0010ECE0(base[1].reg, base[1].value);
    func_0010ECE0(base[2].reg, base[2].value);
    p = base + 3;
    do {
        int v = func_0010ECD0(p->reg);
        i++;
        func_0010ECE0(p->reg, v);
        p++;
    } while (i < 8);
    D_00371730 = func_0010ECD0(3);
}
