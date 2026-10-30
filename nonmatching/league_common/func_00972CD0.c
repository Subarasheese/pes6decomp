/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7960(void *, s8);
extern void func_001D78E0(void *, void *);
extern u8 D_003E7B14;
extern u8 D_003E7B15;
extern u8 D_003E7B16;
extern u8 D_003E7B17;

void func_00972CD0(void *arg0) {
    u8 sp2C;
    u8 sp2D;
    u8 sp2E;
    u8 sp2F;

    sp2E = D_003E7B16;
    sp2C = D_003E7B14;
    sp2D = D_003E7B15;
    sp2F = D_003E7B17;
    func_001D7960(arg0, 2);
    func_001D78E0(arg0, &sp2C);
}
