/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00A7DED0[];

float func_009DE810(void) {
    float value;

    if (D_00A7DED0[0] == 0) {
        value = 0.0;
    } else {
        value = *(float *)(D_00A7DED0[0] + 0x18);
    }
    return value;
}
