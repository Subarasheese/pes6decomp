/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001266E0(s32);                         /* extern */
extern char D_005B5944[];
extern char D_011D4418[];

void func_00126430(M2C_UNK arg0, void *arg1) {
    s32 temp_a0;

    if ((u32) ((*(s32 *)D_011D4418) - 2) >= 2U) {
        temp_a0 = M2C_FIELD(arg1, s32 *, 0x1C);
        if (temp_a0 == ((*(s32 *)D_005B5944) + 1)) {
            func_001266E0(temp_a0);
        }
    }
}
