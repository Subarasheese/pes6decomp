/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct D { short s0; short s2; short s4; short s6; int w8; int wc; };
extern struct D *func_00192438(void);
extern void func_0019AD20(int, int, int);
extern void func_0019AE20(int, int);
extern int func_0019B460(int);
extern int func_0019BC00(int);
#define CSR (*(volatile unsigned long *)0x12001000)

void func_001922A8(short mode, short a1, short a2, short a3) {
    struct D *d;
    switch (mode) {
    case 0:
        d = func_00192438();
        CSR = 0x200;
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        func_0019B460(0xFF00);
        d->s4 = (a3 != 0);
        if (d->w8 != 0) {
            func_0019BC00(2);
            func_0019AE20(2, d->wc);
            d->w8 = 0;
            d->wc = 0;
        }
        return func_0019AD20(a1 & 1, a2 & 0xFF, a3 & 1);
    case 1:
        CSR = 0x100;
        return;
    case 5:
        d = func_00192438();
        d->s4 = (a3 != 0);
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        return func_0019AD20(a1 & 1, a2 & 0xFF, a3 & 1);
    default:
        return;
    }
}
