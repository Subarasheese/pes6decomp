/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern void func_001A1750(void);
extern s32 func_001A31D0(void);
M2C_UNK func_001A1A50();                            /* extern */
M2C_UNK func_002CB060();                            /* extern */
extern char D_0058D7A4[];
extern char D_005E92D0[];

s32 func_002F76F0(void) {
    if (func_0017F900() == 0) {
        return 0;
    }
    if ((*(s8 *)D_0058D7A4) != 0) {
        func_001A1750();
        goto block_9;
    }
    if ((*(s32 *)D_005E92D0) >= 3) {
        if (func_001A31D0() == 0) {
            return 0;
        }
        func_001A1750();
        goto block_9;
    }
    func_001A1A50();
block_9:
    func_002CB060();
    (*(s8 *)D_0058D7A4) = 0;
    return 1;
}
