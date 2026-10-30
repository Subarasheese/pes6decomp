/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
M2C_UNK func_001C4730(void *, s32, s32);            /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, s32);        /* extern */
extern char D_003FB778[];
extern char D_003FB780[];

s32 func_0012E8D0(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_v0;
    void *var_a2;

    var_s1 = -1;
    if (arg0 >= 0) {
        if ((*(s32 *)D_003FB778) != -1) {
            func_0012AD50((*(s32 *)D_003FB778));
        }
        temp_s0 = arg0 * 0x78;
        temp_a0 = (*(s32 *)D_003FB780) + temp_s0;
        if (M2C_FIELD(temp_a0, s16 *, 2) != -1) {
            var_a2 = temp_a0 + 0x28;
            if (var_a2 != NULL) {
                var_a2 += M2C_FIELD(temp_a0, s32 *, 0x24) * 0x14;
            }
            if ((var_a2 != NULL) && (M2C_FIELD(var_a2, s32 *, 0) == 0)) {
                temp_s1 = var_a2 + 4;
                M2C_FIELD(var_a2, s32 *, 0) = 1;
                M2C_FIELD(var_a2, s8 *, 4) = arg1;
                M2C_FIELD(var_a2, s8 *, 5) = arg2;
                func_001C4730(temp_s1 + 2, arg3, arg4);
                if (arg4 < 0xE) {
                    func_001C48E8(temp_s1 + arg4 + 2, 0, 0xE - arg4);
                }
                temp_v0 = temp_s0 + (*(s32 *)D_003FB780);
                var_v1 = M2C_FIELD(temp_v0, s32 *, 0x24) + 1;
                if (var_v1 >= M2C_FIELD(temp_v0, s32 *, 0x1C)) {
                    var_v1 = 0;
                }
                M2C_FIELD(temp_v0, s32 *, 0x24) = var_v1;
            }
            var_s1 = 0;
        }
        if ((*(s32 *)D_003FB778) != -1) {
            func_0012ADE0((*(s32 *)D_003FB778));
        }
    }
    return var_s1;
}
