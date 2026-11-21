/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 SD_call(s32);
extern s32 func_00901FA0(void);
extern s8 *D_003AE9D0[];

s32 func_00901990(void) {
    if (((s32 *)(D_003AE9D0[0]))[0xE] == 1) {
        if (((s32 *)(D_003AE9D0[0]))[8] < 0xB) {
            if (!(((((s32 *)(D_003AE9D0[0]))[8] + 0xB) < ((s32 *)(D_003AE9D0[0]))[0xA]))) {
                ((s32 *)(D_003AE9D0[0]))[8] = (((s32 *)(D_003AE9D0[0]))[0xA] - 1);
            } else {
                ((s32 *)(D_003AE9D0[0]))[8] = (((s32 *)(D_003AE9D0[0]))[8] + 0xB);
            }
        } else {
            if (!(((((s32 *)(D_003AE9D0[0]))[8] - 0xB) < 0xB))) {
                ((s32 *)(D_003AE9D0[0]))[8] = 0xA;
            } else {
                ((s32 *)(D_003AE9D0[0]))[8] = (((s32 *)(D_003AE9D0[0]))[8] - 0xB);
            }
        }
        SD_call(-0x7BFF07FE);
        func_00901FA0();
    }
    return 0;
}
