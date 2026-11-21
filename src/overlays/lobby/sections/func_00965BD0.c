/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00840A10(s32);
extern s32 func_009523D0(s32);
extern void *func_00952510(s32);

s32 *func_00965BD0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00840A10(arg0);
    if (temp_v0 == 0) {
        return NULL;
    }
    return func_00952510(func_009523D0(temp_v0) & 0xFFFF);
}
