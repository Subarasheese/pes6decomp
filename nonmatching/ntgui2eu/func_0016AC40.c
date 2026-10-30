/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
void *func_00165B00();                              /* extern */
extern char D_005BFCA8[];

s32 func_0016AC40(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00165B00();
    if ((temp_v0 != NULL) && (func_00163C30(temp_v0, (*(s32 *)D_005BFCA8)) != 0)) {
        if ((temp_v0 + 0x9A8) != NULL) {
            return M2C_FIELD(temp_v0, s32 *, 0x9A8) == arg0;
        }
        goto block_5;
    }
block_5:
    return 0;
}
