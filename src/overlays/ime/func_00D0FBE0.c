/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

M2C_UNK func_00D0F680(M2C_UNK);
M2C_UNK func_00D10140(u32);
M2C_UNK func_00D12B20(s32, M2C_UNK);
extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37720[];
extern char D_00D37771[];

s32 func_00D0FBE0(s64 arg0) {
    u32 var_a0;

    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    if (((s64)(arg0 << 0x38) >> 0x38) == 1) {
        switch ((*(u32 *)D_00D37720)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 16:
        case 17:
        case 19:
        case 20:
            func_00D12B20((*(s32 *)D_00D376F0), 1);
            break;
        case 18:
            func_00D12B20((*(s32 *)D_00D376F0), 1);
            break;
        case 14:
            func_00D12B20((*(s32 *)D_00D376F0), 0);
            break;
        case 15:
            func_00D12B20((*(s32 *)D_00D376F0), 0);
            break;
        default:
            func_00D12B20((*(s32 *)D_00D376F0), 0);
            break;
        }
    } else {
        func_00D12B20((*(s32 *)D_00D376F0), 0);
        func_00D0F680(0);
        var_a0 = ((*(s32 *)D_00D376E8) == 0) ? 0 : (*(u32 *)D_00D37720);
        func_00D10140(var_a0);
    }
    (*(s8 *)D_00D37771) = (s8)arg0;
    return 1;
}
