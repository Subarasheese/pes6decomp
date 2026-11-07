/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
s16 *func_008472D0();                               /* extern */
extern char D_008B2304[];

void func_00859E20(void) {
    s64 temp_v0;
    s8 temp_v1;

    temp_v1 = (*(s8 *)D_008B2304) + 1;
    (*(s8 *)D_008B2304) = temp_v1;
    temp_v0 = temp_v1;
    if (temp_v0 < 0) {
        (*(s8 *)D_008B2304) = 2;
    } else if (temp_v0 > 2) {
        (*(s8 *)D_008B2304) = 0;
    }
    func_00853B50(1, 0x16, 8, 0, *func_008472D0(), 0, 0, 0);
}
