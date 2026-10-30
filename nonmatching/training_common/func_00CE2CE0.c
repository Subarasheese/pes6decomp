/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B7A90();                            /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0(s32);                         /* extern */
M2C_UNK func_002F2ED0(s32);                         /* extern */
M2C_UNK func_002F4CE0(s32, s32);                    /* extern */
M2C_UNK func_00CE2B80(void *, s32);                 /* extern */
M2C_UNK func_00CE2DF0(void *, s32);                 /* extern */
s32 func_00CEFCB0();                                /* extern */

s32 func_00CE2CE0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg1);
    temp_v1 = func_002646D0(arg1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x110) = 0;
        func_00CE2DF0(arg0, arg2);
        func_002646E0(arg1);
        break;
    default:
        var_s0 = 1;
        break;
    case 1:
        func_00CEFCB0();
        func_002F4CE0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x110));
        func_002F2ED0(M2C_FIELD(arg0, s32 *, 0));
        if (M2C_FIELD(arg0, s32 *, 0x114) != 0) {
            func_00CE2B80(arg0, arg2);
            func_001B7A90();
            func_002646E0(arg1);
        }
        break;
    case 2:
        if (func_00CEFCB0() != 0) {
            var_s0 = 1;
        }
        break;
    }
    func_002648E0(arg1);
    return var_s0;
}
