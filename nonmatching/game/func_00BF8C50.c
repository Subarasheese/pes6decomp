/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_0027B2E0(void *);
extern u8 **D_00CBD7B0;

void func_00BF8C50(void) {
    u8 *p;

    p = *D_00CBD7B0;
    func_0027B2E0(p);
    **(u8 **)(p + 0x10) = 0;
    p[3] = 0;
    p[4] = 1;
}
