/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00A7DEF8[];

float func_009E1E50(void) {
    float value;

    if (D_00A7DEF8[0] == 0) {
        value = 0.0;
    } else {
        value = *(float *)(D_00A7DEF8[0] + 0x34);
    }
    return value;
}
