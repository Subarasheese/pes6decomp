/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern void func_002E92D0(int);
extern int func_002646D0(int);
extern u32 func_00CDCD70(void);
extern s32 func_002E84D0(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CCE370(u32);                             /* extern */
s32 func_00CE2A60(M2C_UNK);                         /* extern */
M2C_UNK func_00CECDE0();                            /* extern */

s32 func_00CE2560(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;

    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 4:
        var_s1 = 2;
        break;
    case 3:
        if (func_00CE2A60(0x2C) != 0) {
            func_002646E0(arg0);
        }
block_22:
        var_s1 = 1;
        break;
    default:
        var_s1 = 0;
        break;
    case 0:
        if (func_002E84D0() == 0) {
            var_s1 = 0;
        } else {
            func_002646E0(arg0);
            goto block_22;
        }
        break;
    case 1:
        func_00CECDE0();
        func_002646E0(arg0);
        goto block_22;
    case 2:
        if (func_002630F0() == 0) {
            var_s1 = 0;
        } else if (func_00CCE370(func_00CDCD70()) != 0) {
            func_002E92D0(1);
            func_002646E0(arg0);
            var_s1 = 1;
        } else {
            goto block_22;
        }
        break;
    }
    func_002648E0(arg0);
    return var_s1;
}
