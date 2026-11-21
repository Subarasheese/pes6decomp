/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_00CB36C0[];

u8 func_00C18DC0(s32 arg0) {
    s32 value;
    int value2;
    s32 value3;
    unsigned char value4;
    value3 = arg0 & 0xFF;
    value4 = (u32)(value3 & 0x7F);
    value = value3 >> 7;
    value2 = value != 0;
    return *((u8 *)(((u8 *)D_00CB36C0) +
                    (0xFF & ((((value3 & 0x7F) / 15) + (value4 >> 0x1F)) - value2))));
}
