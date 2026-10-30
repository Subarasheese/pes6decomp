/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D9300(s32);                             /* extern */

s32 func_008D3F30(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_s0;
    s32 temp_v0;
    s64 var_v0;

    temp_s0 = M2C_FIELD(arg0, s16 *, 4);
    M2C_FIELD(arg0, s8 *, 6) = 0;
    temp_v0 = func_008D9300(arg1);
    switch (temp_v0) {                              /* irregular */
    case 0x200000:
        M2C_FIELD(arg0, s8 *, 6) = 1;
    case 0x2:
        if (((s64) ((s64) temp_s0 << 0x30) >> 0x30) >= ((arg3 & 0xFF) - (arg4 & 0xFF))) {
            return 0;
        }
        var_v0 = (s64) ((temp_s0 + 1) << 0x30) >> 0x30;
block_19:
        M2C_FIELD(arg0, s16 *, 4) = (s16) var_v0;
        return 3;
    case 0x100000:
        M2C_FIELD(arg0, s8 *, 6) = 1;
        /* fallthrough */
    case 0x1:
        if ((arg2 & 0xFF) >= ((s64) ((s64) temp_s0 << 0x30) >> 0x30)) {
            return 0;
        }
        var_v0 = (s64) ((temp_s0 - 1) << 0x30) >> 0x30;
        goto block_19;
    default:
        return 0;
    }
}
