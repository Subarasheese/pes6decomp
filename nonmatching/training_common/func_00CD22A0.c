/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900(s32);                             /* extern */
void *func_002640B0();                              /* extern */
s32 func_002646D0(void *);                          /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_002648E0(void *);                      /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_008271A0();                            /* extern */
M2C_UNK func_00CDD8B0(s32);                         /* extern */

void func_00CD22A0(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    func_002648F0();
    temp_a0 = func_002646D0(arg0) & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_s1 = 1;
        break;
    case 0:                                         /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            break;
        case 0:                                     /* switch 2 */
            func_00CDD8B0(temp_a0);
            break;
        }
        func_008271A0();
        func_002646E0(arg0);
        break;
    case 1:                                         /* switch 1 */
        if (func_0017F900(temp_a0) != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s1 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x18) != 1) {
            func_00264790(arg0, 0xF);
        } else {
            if (M2C_FIELD(func_002640B0(), s32 *, 0x44) == 0) {
                func_00264790(arg0, 0x47);
                return;
            }
            func_00264790(arg0, 0xF);
        }
    }
}
