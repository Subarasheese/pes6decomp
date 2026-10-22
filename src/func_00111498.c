/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Entry { int handler, arg, gp, pad; };
extern struct Entry D_003F2FC8[];
extern struct Entry *D_003729B8;
extern unsigned int D_003729BC;
int DIntr(void);
int EIntr(void);
int func_00111498(int id, int handler, int arg) {
    struct Entry *table;
    unsigned int count;
    int intr, gp;
    if (id < 0) {
        id &= 0x7fffffff;
        table = D_003F2FC8;
        count = 32;
    } else {
        table = D_003729B8;
        count = D_003729BC;
    }
    if ((unsigned int)id >= count) return 0x80000069;
    intr = DIntr();
    table[id].handler = handler;
    table[id].arg = arg;
    __asm__ volatile ("daddu %0,$28,$0" : "=r" (gp));
    table[id].gp = gp;
    if (intr) EIntr();
    return 0;
}
