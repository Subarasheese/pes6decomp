/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct D { short s0; short s2; short s4; short s6; int w8; int wc; };
extern struct D *sceGsGetGParam(void);
extern void func_00104F60(int, int, int);
extern void RemoveIntcHandler(int, int);
extern int func_001056A0(int);
extern int DisableIntc(int);
#define CSR (*(volatile unsigned long *)0x12001000)

void func_00100270(short mode, short a1, short a2, short a3) {
    struct D *d;
    switch (mode) {
    case 0:
        d = sceGsGetGParam();
        CSR = 0x200;
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        func_001056A0(0xFF00);
        d->s4 = (a3 != 0);
        if (d->w8 != 0) {
            DisableIntc(2);
            RemoveIntcHandler(2, d->wc);
            d->w8 = 0;
            d->wc = 0;
        }
        return func_00104F60(a1 & 1, a2 & 0xFF, a3 & 1);
    case 1:
        CSR = 0x100;
        return;
    case 5:
        d = sceGsGetGParam();
        d->s4 = (a3 != 0);
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        return func_00104F60(a1 & 1, a2 & 0xFF, a3 & 1);
    default:
        return;
    }
}
