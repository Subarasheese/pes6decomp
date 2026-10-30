/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void *D_003E7E1C;
extern char D_00CFEFE8[];

void func_00CE44F0(void *arg0) {
    s32 var_a1;

    M2C_FIELD(D_003E7E1C, s32 *, 0x188) = (s32) M2C_FIELD(D_003E7E1C, s32 *, 0x18C);
    var_a1 = (*(s32 *)D_00CFEFE8) - 1;
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    (*(s32 *)D_00CFEFE8) = var_a1;
    func_00264790(arg0, 0U);
}
