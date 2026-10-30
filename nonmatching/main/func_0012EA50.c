/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
M2C_UNK func_001C4730(void *, s32, u32);            /* extern */
extern char D_003FB778[];
extern char D_003FB780[];

s32 func_0012EA50(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_s0;
    u32 var_s1;
    void *temp_s3;

    var_s1 = arg2;
    var_s0 = -1;
    if (arg0 >= 0) {
        if ((*(s32 *)D_003FB778) != -1) {
            func_0012AD50((*(s32 *)D_003FB778));
        }
        temp_s3 = (*(s32 *)D_003FB780) + (arg0 * 0x78);
        if (M2C_FIELD(temp_s3, s16 *, 2) != -1) {
            if (var_s1 >= 9U) {
                var_s1 = 8;
            }
            func_001C4730(temp_s3 + 0xC, arg1, var_s1);
            M2C_FIELD(temp_s3, u32 *, 8) = var_s1;
            var_s0 = 0;
        }
        if ((*(s32 *)D_003FB778) != -1) {
            func_0012ADE0((*(s32 *)D_003FB778));
        }
    }
    return var_s0;
}
