/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_0065D100[];
extern char D_0065D101[];

s32 func_00639BF0(s32 arg0) {
    s32 temp_a1;
    s8 temp_v1;

    temp_a1 = arg0 * 0x16;
    temp_v1 = *(((char *)D_0065D100) + temp_a1);
    if (temp_v1 == 0x4F) {
        return 0x23;
    }
    return ((temp_v1 - 0x30) * 0xA) + (*(((char *)D_0065D101) + temp_a1) - 0x30);
}
