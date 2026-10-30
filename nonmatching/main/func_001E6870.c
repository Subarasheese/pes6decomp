/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern char D_0052B120[];
extern s32 *D_0052B124;

void func_001E6870(s64 arg0) {
    s32 *var_s0;
    s32 var_a1;

    var_s0 = D_0052B124;
    if (var_s0 != NULL) {
        var_a1 = (*(s32 *)D_0052B120);
        if (var_a1 != 0) {
loop_2:
            if (((u64) ((s64) *var_s0 << 0x21) >> 0x21) != ((u64) (arg0 << 0x21) >> 0x21)) {
                var_a1 -= 1;
                var_s0 += 8;
                if (var_a1 != 0) {
                    goto loop_2;
                }
            }
        }
        if (var_a1 != 0) {
            if (M2C_FIELD(var_s0, s32 *, 0) & 0x80000000) {
                return;
            }
            M2C_FIELD(var_s0, s32 *, 0) = 0;
            func_00153FA0(M2C_FIELD(var_s0, void **, 4));
            M2C_FIELD(var_s0, void **, 4) = NULL;
        }
    }
}
