/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001BE5B0(M2C_UNK);                         /* extern */
s32 func_002646D0(void *);                          /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_002648E0(void *);                      /* extern */
M2C_UNK func_002648F0();                            /* extern */
s32 func_00CD3210(void *);                          /* extern */

void func_00CD36F0(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        var_s0 = 1;
        break;
    case 2:
        if (func_00CD3210(arg0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_001BE5B0(0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        var_v0 = M2C_FIELD(arg0, s32 *, 0x50) != 0;
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x6C) != 0;
        }
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x88) != 0;
        }
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0xA4) != 0;
        }
        if (var_v0 == 0) {
            func_002646E0(arg0);
        } else {
            func_00264790(arg0, 3);
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790(arg0, 0xE);
    }
}
