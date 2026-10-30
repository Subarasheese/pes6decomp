/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
extern char D_003FB778[];
extern char D_003FB780[];

s32 func_0012EF60(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_s0;
    s32 var_s2;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_s2 = 0;
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD50((*(s32 *)D_003FB778));
    }
    temp_s0 = arg0 * 0x78;
    temp_v0 = temp_s0 + (*(s32 *)D_003FB780);
    var_s1 = temp_v0 + 0x28;
    if (var_s1 != NULL) {
        var_s1 += M2C_FIELD(temp_v0, s32 *, 0x20) * 0x14;
    }
    if ((var_s1 != NULL) && (*var_s1 != 0)) {
        func_001C4730(arg1, var_s1 + 4, 0x10);
        *var_s1 = 0;
        temp_v0_2 = temp_s0 + (*(s32 *)D_003FB780);
        var_v1 = M2C_FIELD(temp_v0_2, s32 *, 0x20) + 1;
        var_s2 = 1;
        if (var_v1 >= M2C_FIELD(temp_v0_2, s32 *, 0x1C)) {
            var_v1 = 0;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x20) = var_v1;
    }
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012ADE0((*(s32 *)D_003FB778));
    }
    return var_s2;
}
