/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0052AF10[];
extern s32 *D_0052AF14[];

void func_001E4560(s32 index, s32 value) {
    if (index < 0) {
        return;
    }
    if (index >= D_0052AF10[0]) {
        return;
    }
    if (value == 0) {
        return;
    }
    D_0052AF14[0][index] = value;
}
