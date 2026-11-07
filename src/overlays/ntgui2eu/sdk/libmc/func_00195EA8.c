/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
s32 func_00195D80(s32, s32, s32, s32);
extern char D_005CAA30[];
s32 func_00195EA8(s32 a, s32 b, s32 c) {
    s32 temp_v0;
    temp_v0 = func_00195D80(a, b, c, 0x40);
    if (temp_v0 == 0) {
        (*(s32 *)D_005CAA30) = 0xB;
    }
    return temp_v0;
}
