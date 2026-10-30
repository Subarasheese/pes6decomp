/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7A0(void);
extern void * func_001F01D0(s32);
extern s32 func_0021DF90(s32);
extern void * func_001E7100(s32);
extern int func_002E8BD0(void);
extern s32 func_0021E000(u32);
extern s32 func_0017F8A0(s32);
s32 func_00627810(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_002E8BD0();
    switch (temp_v0) {                              /* irregular */
    default:
        var_v0 = 0;
        break;
    case 0x2B:
        /* fallthrough */
    case 0x33:
    case 0x2E:
    case 0x2F:
        var_v0 = 1;
        break;
    }
    if (var_v0 != 0) {
        if (func_001FC7A0() != 0) {
            if (func_001E7100(func_0021E000(0x164U)) != NULL) {
                if (func_001F01D0(func_0021DF90(0x1B)) != NULL) {
                    return func_0017F8A0(0x103D6) != 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 1;
}
