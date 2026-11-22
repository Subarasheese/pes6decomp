/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 SD_call(s32);
extern s32 func_0091BDF0(void);
extern s8 *D_00923FCC[];

s32 func_0091BA80(void) {
    if (((u8 *)(D_00923FCC[0]))[0xC] < (((u8 *)(D_00923FCC[0]))[0xD] - 1)) {
        if (((s32 *)(D_00923FCC[0]))[5] == 0) {
            SD_call(-0x7BFF07FD);
            ((s8 *)(D_00923FCC[0]))[0xC] = (((u8 *)(D_00923FCC[0]))[0xC] + 1);
            func_0091BDF0();
        }
    }
    return 0;
}
