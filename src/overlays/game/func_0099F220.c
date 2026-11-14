/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB6393[];

u8 func_0099F220(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 >= 8) {
        return 0U;
    }
    return *(((u8 *)D_00CB6393) + (temp_v1 * 4));
}
