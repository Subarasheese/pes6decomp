/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 SD_call(s32);
extern s32 func_0091BDF0(void);
extern s8 *D_00923FCC[];

s32 func_0091BAF0(void) {
    if (!((((u8 *)(D_00923FCC[0]))[0xC] <= 0))) {
        if (((s32 *)(D_00923FCC[0]))[5] == 0) {
            ((s8 *)(D_00923FCC[0]))[0xC] = (((u8 *)(D_00923FCC[0]))[0xC] - 1);
            func_0091BDF0();
            SD_call(-0x7BFF07FD);
        }
    }
    return 0;
}
