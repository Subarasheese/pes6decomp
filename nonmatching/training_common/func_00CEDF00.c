/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002211C0();                              /* extern */
M2C_UNK func_00255EA0();                            /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_003424C0();                            /* extern */
M2C_UNK func_00C86B10(s32);                         /* extern */
s32 func_00CD3FE0();                                /* extern */
s32 func_00CD41D0(s32);                             /* extern */
s32 func_00CD44E0(s32);                             /* extern */
M2C_UNK func_00CD6030();                            /* extern */
M2C_UNK func_00CD60B0();                            /* extern */
M2C_UNK func_00CE45C0();                            /* extern */
M2C_UNK func_00CEFA10();                            /* extern */

s32 func_00CEDF00(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        if (func_00CD44E0(arg0) != 0) {
            func_00C86B10(M2C_FIELD(func_002211C0(), u16 *, 8) & 0x20);
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_00CD41D0(arg0) != 0) {
            func_002646E0(arg0);
        }
        break;
    default:
        func_00264790(arg0, 0x19);
        break;
    case 0:
        if (func_00CD3FE0() != 0) {
            func_00CD60B0();
            func_00CD6030();
            func_002646E0(arg0);
        }
        break;
    case 3:
        func_00CEFA10();
        func_00CE45C0();
        func_003424C0();
        func_00255EA0();
        func_002646E0(arg0);
        /* fallthrough */
    case 4:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
