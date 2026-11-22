/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008F9220(s32, s32, s32, s32);
extern u8 D_003EA674;

s32 func_008F90E0(s32 arg0) {
    s32 value1;
    if (D_003EA674 == 0xC) {
        value1 = func_008F9220(arg0, 0x384, 0x446, 0xA);
        return value1;
    } else {
        return 1;
    }
}
