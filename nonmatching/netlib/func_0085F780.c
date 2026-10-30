/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00866FC0(s32 *, void *);                   /* extern */
s32 func_00867040(s32 *, void *, void *, void *);   /* extern */
s32 func_00867110(s32 *, void *, void *);           /* extern */
s32 func_00868C30(s32 *, void *);                   /* extern */

s32 func_0085F780(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *arg1;
    if (temp_v1 != 0x308D) {
        if (temp_v1 != 0x308B) {
            var_v0 = 0x3089;
            switch (temp_v1) {                      /* irregular */
            case 0x3087:
                M2C_FIELD(arg0, s32 *, 0x15E14) = 0;
                func_001C48E8(arg0 + 0x1561C, 0, 0x7F8);
                return func_00867110(arg1, arg0 + 0x4830, arg0 + 0x15618);
            case 0x3088:
                return func_00867040(arg1, arg0 + 0x4830, arg0 + 0x1561C, arg0 + 0x15E14);
            default:
                var_v0 = -0x46;
                /* fallthrough */
            case 0x3089:
                return var_v0;
            }
        } else {
            return func_00866FC0(arg1, arg0 + 0x4830);
        }
    } else {
        return func_00868C30(arg1, arg0 + 0x4830);
    }
}
