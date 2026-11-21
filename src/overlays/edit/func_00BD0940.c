/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 D_00CBC4B0[];
extern u8 D_00CBC4C0[];
extern u8 D_00CBC4D0[];
extern u8 D_00CBC4E0[];
extern u8 D_00CBC4F0[];
extern u8 D_00CBC500[];

u32 func_00BD0940(u32 param_1, int param_2, u32 *param_3)

{
    u32 uVar1;

    uVar1 = 0;
    switch (param_1) {
    case 0xf:
        *param_3 = *(u32 *)(&D_00CBC4B0[0] + param_2 * 4);
        return 1;
    case 0x14:
        *param_3 = *(u32 *)(&D_00CBC4C0[0] + param_2 * 4);
        return 1;
    case 0x1c:
        *param_3 = *(u32 *)(&D_00CBC4D0[0] + param_2 * 4);
        return 1;
    case 0x20:
        *param_3 = *(u32 *)(&D_00CBC4E0[0] + param_2 * 4);
        return 1;
    case 0x23:
        *param_3 = *(u32 *)(&D_00CBC4F0[0] + param_2 * 4);
        return 1;
    case 0x27:
        *param_3 = *(u32 *)(&D_00CBC500[0] + param_2 * 4);
        uVar1 = 1;
    }
    return uVar1;
}
