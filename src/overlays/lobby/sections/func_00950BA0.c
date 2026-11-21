/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);

u8 func_00950BA0(void) {
    s32 value1;
    value1 = func_0082C2A0();
    if (value1 == 0) {
        return 4;
    } else {
        if (!((((u8 *)(value1))[0x37DC] < 8))) {
            return 8;
        } else {
            if (((u8 *)(value1))[0x37DC] < 5) {
                return 4;
            } else {
                return ((u8 *)(value1))[0x37DC];
            }
        }
    }
}
