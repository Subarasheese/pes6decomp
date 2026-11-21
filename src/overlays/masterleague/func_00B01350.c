/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002260F0(s32);

s32 func_00B01350(s32 arg0) {
    s32 value1;
    value1 = func_002260F0(arg0);
    if (value1 == 0) {
        return 0xFF;
    } else {
        if (((u8 *)(value1))[0x4A5] == 0xFF) {
            return 0;
        } else {
            if (((u8 *)(value1))[0x4A4] < ((u8 *)(value1))[0x4A5]) {
                return 1;
            } else {
                if (((u8 *)(value1))[0x4A5] < ((u8 *)(value1))[0x4A4]) {
                    return 2;
                } else {
                    return 0;
                }
            }
        }
    }
}
