/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
typedef unsigned int u_long128 __attribute__((mode(TI)));
extern void func_001036F0(void *, s32);
extern void func_00103778(void *, u_long128);
extern void func_001E63D0(s32, s32);
extern u_long128 D_0052B110[];

void func_001E6360(void *a0, s32 a1, s32 a2) {
    if (a1 != 6) {
        func_001036F0(a0, 0);
        func_001E63D0(a1, a2);
        func_00103778(a0, D_0052B110[0]);
    }
}
