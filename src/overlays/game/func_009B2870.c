/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_002DCA30(void), func_008481D0(void), func_009B2B30(void);
extern void func_009B15F0(void), func_009B17F0(void), func_009B1DC0(void);
extern u8 D_00592294[];
s32 func_009B2870(void) {
    s32 result;
    if (func_002DCA30() && func_008481D0())
        return 0;
    if (D_00592294[0] > 0)
        --D_00592294[0];
    result = func_009B2B30();
    switch (result) {
    case 1:
    case 2:
        func_009B15F0();
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        func_009B17F0();
        break;
    case 7:
    case 8:
        func_009B1DC0();
        break;
    }
    return result;
}
