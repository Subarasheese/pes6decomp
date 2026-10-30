/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
M2C_UNK func_00164138(s32);                         /* extern */
void *func_00165B00(s32);                           /* extern */
M2C_UNK func_0016A340(void *);                      /* extern */
extern char D_005BFCA8[];

s32 func_0016AE90(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00165B00(arg1);
    if ((temp_v0 != NULL) && (func_00163C30(temp_v0, (*(s32 *)D_005BFCA8)) != 0)) {
        if ((temp_v0 + 0x9A8) != NULL) {
            var_v0 = 0;
            if (M2C_FIELD(temp_v0, s32 *, 0x9A8) == 0) {
                M2C_FIELD(temp_v0, s32 *, 0x9A8) = arg0;
                func_00164138(arg0);
                func_0016A340(temp_v0 + 0x9D0);
                var_v0 = 1;
            }
            return var_v0;
        }
        goto block_5;
    }
block_5:
    return 0;
}
