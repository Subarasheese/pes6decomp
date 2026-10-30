/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002646D0(int);
extern void func_002F4CE0(void *, s8);
extern void func_00CE3630(void *);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_002F2ED0(void *);                      /* extern */
M2C_UNK func_00CE33E0(void *);                      /* extern */

s32 func_00CE3310(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s2;

    var_s2 = 0;
    func_002648F0(arg1);
    temp_v1 = func_002646D0(arg1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_002F4CE0(M2C_FIELD(arg0, void **, 0), (s8) M2C_FIELD(arg0, s32 *, 0x110));
        func_002F2ED0(M2C_FIELD(arg0, void **, 0));
        if (M2C_FIELD(arg0, s32 *, 0x114) != 0) {
            func_00CE33E0(arg0);
            var_s2 = 1;
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x110) = 1;
        func_00CE3630(arg0);
        func_002646E0(arg1);
        break;
    default:
        var_s2 = 1;
        break;
    }
    func_002648E0(arg1);
    return var_s2;
}
