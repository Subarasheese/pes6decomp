/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002223E0(s32, s32);
extern void * func_00222850(s32, s32);
s32 func_001C7E10(void *, M2C_UNK *);               /* extern */
void *func_0026D710(s32, s32);                      /* extern */
void *func_0026D880(s32);                           /* extern */
extern char D_00CC0028[];
extern char D_00CE35B0[];

void *func_00B94EF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    void *var_s0;
    void *var_v0;
    void *var_v0_2;

    temp_a1 = arg0 & 0xFFFF;
    var_s0 = NULL;
    if ((temp_a1 != 0) && (temp_a1 < 0x1388)) {
        var_s0 = (*(s32 *)D_00CE35B0) + 0x7CF0 + (temp_a1 * 0x7C);
        if (arg1 == 0) {
            if ((arg3 == 1) && (M2C_FIELD(var_s0, s8 *, 0) == 0) && (M2C_FIELD(var_s0, s8 *, 1) == 0)) {
                var_v0 = func_0026D880(arg2);
                goto block_10;
            }
        } else {
            var_s0 += 0x20;
            if ((arg3 == 1) && (func_001C7E10(var_s0, ((void *)D_00CC0028)) == 0)) {
                var_v0 = func_0026D710(arg0, arg2);
block_10:
                var_s0 = var_v0;
            }
        }
    }
    if ((var_s0 == NULL) && (arg3 == 1)) {
        if (arg1 != 0) {
            var_v0_2 = func_002223E0(0, 0);
        } else {
            var_v0_2 = func_00222850(0, 0);
        }
        var_s0 = var_v0_2;
    }
    return var_s0;
}
