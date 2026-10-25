/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_00584388[];

void func_00251A30(s32 value) {
    if (value < 0) {
        value = 0;
    }
    if (value > 100) {
        value = 100;
    }
    D_00584388[0] = value;
}
