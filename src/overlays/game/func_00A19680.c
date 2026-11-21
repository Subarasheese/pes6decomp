/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern float D_00591E70[];

int func_00A19680(int arg0, int arg1, int arg2, float arg3) {
    u32 value;

    if (arg3 <= D_00591E70[0] + 64.0f + (float)arg2) {
        value = arg3 < (D_00591E70[0] - 64.0f) - (float)arg2 ^ 1;
    } else {
        value = 0;
    }
    return value;
}
