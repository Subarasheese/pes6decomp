/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0026DA40(s32);
extern s32 SD_stop(s32);

extern s32 D_003EA8D0;

void func_00949540(void) {
    s32 temp_s0;

    temp_s0 = D_003EA8D0;
    if (temp_s0 != 0) {
        if (func_0026DA40(1) != 0) {
            SD_stop(temp_s0);
        }
        D_003EA8D0 = 0;
    }
}
