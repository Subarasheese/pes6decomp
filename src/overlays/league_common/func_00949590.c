/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0026DA40(s32);
extern s32 SD_call(s32);
extern s32 func_00949420(void);

extern s32 D_003EA8D0;

void func_00949590(void) {
    s32 temp_s0;

    temp_s0 = func_00949420();
    if (func_0026DA40(1) == 0) {
        D_003EA8D0 = temp_s0;
        SD_call(temp_s0);
    }
}
