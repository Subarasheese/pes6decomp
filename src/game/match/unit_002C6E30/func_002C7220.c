/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

u8 func_00292F30(s32, u8);

s32 func_002C7220(s32 team) {
    s32 sum = 0;
    s32 i = 0;

    for (; i < 13; i++) {
        sum += func_00292F30(team, i);
    }
    return sum;
}
