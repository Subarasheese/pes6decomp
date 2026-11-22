/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 *func_00158AE8(void);
s32 func_001AFEB0(void *, s32 *);
u32 func_001B0444(s32);
s32 func_001B08E8(s32 *, s32, s32);
extern char D_005FB058[];
extern char D_011D7490[];

s32 *func_001383E8(void) {
    s32 value;

    value = func_00158AE8();
    func_001B08E8(((void *)D_011D7490), value, 0x32);
    if (!(func_001B0444(value) >= 0x32U)) {
        return ((void *)D_011D7490);
    }
    if (M2C_FIELD(((void *)D_011D7490), s8 *, 0x32) != 0x2E) {
        func_001AFEB0(((void *)D_011D7490) + 0x32, ((void *)D_005FB058));
    }
    return ((void *)D_011D7490);
}
