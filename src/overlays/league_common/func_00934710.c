/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 * func_00229380(void);
extern s32 func_0096EA00(void);
extern char D_00591C09[];

s32 func_00934710(s32 arg0) {
    u32 temp_v0;

    func_00229380();
    temp_v0 = arg0 & 0xFF;
    switch (temp_v0) {
    case 1:
        return 0x12;
    case 2:
        return 0x12;
    case 3:
        return 0x12;
    case 4:
        return 0x12;
    case 5:
        return 0x12;
    case 6:
        return 0x12;
    default:
        if (((*(u8 *)D_00591C09) == 0xE) && !(func_0096EA00() & 0xFF)) {
            return 0x12;
        }
        return 0x17;
    }
}
