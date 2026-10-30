/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6C50(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001BB080(void *);                      /* extern */
M2C_UNK func_001DB310(s32, s32);                    /* extern */
extern char D_0058D454[];

s32 func_00265AC0(void *arg0) {
    s32 temp_a1;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_s0;
    if (temp_s0 <= 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_a1 == 0) {
            func_001E6C50(M2C_FIELD(arg0, void **, 0x18));
        } else {
            func_001DB310((*(s32 *)D_0058D454), temp_a1);
        }
        func_001BB080(arg0);
        func_00153FA0(arg0);
    }
    return temp_s0;
}
