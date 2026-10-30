/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_002630F0(void);
extern int func_002646D0(int);
extern void func_001BC2B0(void);
extern u32 func_00CDCD70(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CCE370(u32);                             /* extern */
s32 func_00CE28D0(s32);                             /* extern */
s32 func_00CE2A60(M2C_UNK);                         /* extern */

s32 func_00CDEEE0(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        if (func_00CE28D0(arg0) != 0) {
            var_s0 = 1;
            if (func_002630F0() != 0) {
                func_001BC2B0();
            }
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_00CE2A60(0x27) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        if (func_002630F0() == 0) {
            func_002646E0(arg0);
        } else if (func_00CCE370(func_00CDCD70()) != 0) {
            func_001BC300();
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
