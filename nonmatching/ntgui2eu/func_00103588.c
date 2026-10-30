/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001031C0(s32, void *, M2C_UNK);        /* extern */
extern s32 D_006025B0;
extern s32 D_006025B4;
extern char D_011ABAF8[];

void func_00103588(s32 *arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;

    D_006025B4 = 0;
    if (arg0 != NULL) {
        if (arg1 != 0) {
            if (arg1 > 0) {
                var_s1 = arg0;
                var_s0 = arg1;
                do {
                    temp_v0 = *var_s1;
                    var_s1 += 4;
                    if (temp_v0 != 0) {
                        func_001031C0(temp_v0, ((D_006025B0 + D_006025B4) * 0x28) + ((void *)D_011ABAF8), 0xA);
                        D_006025B4 += 1;
                    }
                    var_s0 -= 1;
                } while (var_s0 != 0);
            }
        }
    }
}
