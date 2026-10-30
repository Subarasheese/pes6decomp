/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B84D0(M2C_UNK);                     /* extern */
M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00AEC6C0(void *);                      /* extern */

s32 func_00AEC500(void *arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = M2C_FIELD(arg0, s32 *, 4);
    var_s1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x24) & 1) {
        var_s0 = 0x64;
    }
    switch (var_s0) {                               /* irregular */
    case 0x0:
        func_00AEC6C0(arg0);
        if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3D) >> 0x3F) != 0) {
            func_001B9030(5, 0x2C0057, 0);
        }
        var_s0 += 1;
        /* fallthrough */
    case 0x5:
        if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3E) >> 0x3F) == 1) {
        case 0xA:
        case 0x6:
            if (arg0 != NULL) {
                func_001EDAE0(M2C_FIELD(arg0, s32 *, 0xC), 1);
            }
            if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3D) >> 0x3F) != 0) {
                func_001B84D0(1);
            }
            var_s0 = 0x14;
        case 0x14:
            if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3E) >> 0x3F) == 0) {
            case 0x1E:
            case 0x15:
                if (arg0 != NULL) {
                    func_001EDAE0(M2C_FIELD(arg0, s32 *, 0xC), 0);
                }
                if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3D) >> 0x3F) != 0) {
                    func_001B84D0(0);
                }
                var_s0 = 5;
            case 0x64:
                func_001EDD90(M2C_FIELD(arg0, s32 *, 0xC));
                if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x3D) >> 0x3F) != 0) {
                    func_001B8DC0();
                }
                var_s0 += 1;
            case 0x65:
                var_s1 = 1;
            }
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_s0;
    return var_s1;
}
