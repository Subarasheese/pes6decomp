/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s8 func_0028C830(s32, s32);

void func_0028CB20(s32 object) {
    s32 index;

    index = 0;
    do {
        M2C_FIELD((object + index), s8 *, 0xC0) = func_0028C830(object, index);
        index += 1;
    } while (index < 5);
}
