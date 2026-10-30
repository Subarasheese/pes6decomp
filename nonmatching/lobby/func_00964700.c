/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083C7A0(M2C_UNK);                         /* extern */
extern char D_00A68C58[];

s32 func_00964700(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;

    var_v0 = (*(s32 *)D_00A68C58);
    var_s0 = 0;
    if (var_v0 < 0) {
        var_v0 = (s32) ((s64) (0 << 0x20) >> 0x20);
    }
    temp_v1 = ((s64) ((s64) var_v0 << 0x20) >> 0x20) + 1;
    (*(s32 *)D_00A68C58) = temp_v1;
    if (temp_v1 < 0x3C) {
        return 0;
    }
    (*(s32 *)D_00A68C58) = 0;
    temp_v0 = func_0083C7A0(0);
    switch (temp_v0) {                              /* irregular */
    case 3:
        var_s0 = -3;
        break;
    case 2:
        var_s0 = -2;
        break;
    case 1:
        var_s0 = -1;
        break;
    case 4:
        var_s0 = 1;
        break;
    default:
        var_s0 = -4;
        break;
    }
    return var_s0;
}
