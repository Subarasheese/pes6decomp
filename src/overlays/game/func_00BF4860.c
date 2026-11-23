/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_00C01090(s32);
extern s32 func_00C00D60(u64), func_00C00B00(u64);
extern u8 D_00CBD766[], D_00CBD767[];
void func_00BF4860(s32 event) {
    u32 selection, other;
    switch (event) {
    case 0:
        selection = func_00C00D60(0);
        other = func_00C00B00(0);
        break;
    case 1:
        selection = func_00C00D60(10);
        other = func_00C00B00(10);
        break;
    case 2:
        selection = func_00C00D60(0xb);
        other = func_00C00B00(0xb);
        break;
    case 3:
        selection = func_00C00D60(2);
        other = func_00C00B00(2);
        break;
    case 4:
        selection = func_00C00D60(3);
        other = func_00C00B00(3);
        break;
    case 5:
        selection = func_00C00D60(4);
        other = func_00C00B00(4);
        break;
    case 6:
        selection = func_00C00D60(6);
        other = func_00C00B00(6);
        break;
    case 7:
        selection = func_00C00D60(5);
        other = func_00C00B00(5);
        break;
    case 8:
        selection = func_00C00D60(8);
        other = func_00C00B00(8);
        break;
    case 9:
        selection = func_00C00D60(9);
        other = func_00C00B00(9);
        break;
    case 10:
        if (!func_00C01090(26) && !func_00C01090(27)) {
            selection = func_00C00D60(0x14);
            other = func_00C00B00(0x14);
        } else {
            selection = func_00C00D60(0x18);
            other = func_00C00B00(0x18);
        }
        break;
    case 11:
        selection = func_00C00D60(0x18);
        other = func_00C00B00(0x18);
        break;
    case 12:
        selection = func_00C00D60(0x1e);
        other = func_00C00B00(0x1e);
        break;
    case 13:
        selection = func_00C00D60(0x1c);
        other = func_00C00B00(0x1c);
        break;
    case 15:
        selection = func_00C00D60(0x20);
        other = func_00C00B00(0x20);
        break;
    case 14:
        selection = func_00C00D60(0x1f);
        other = func_00C00B00(0x1f);
        break;
    case 16:
        selection = func_00C00D60(0x21);
        other = func_00C00B00(0x21);
        break;
    case 18:
        selection = func_00C00D60(0x2d);
        other = func_00C00B00(0x2d);
        break;
    default:
        selection = 0;
        other = 0;
        break;
    }
    D_00CBD766[0] = selection;
    D_00CBD767[0] = other;
}
