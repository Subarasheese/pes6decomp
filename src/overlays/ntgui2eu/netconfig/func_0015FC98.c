/* compiler: ee-gcc-2.9 */
#include "types.h"

extern u32 func_00135080(s32);
extern s32 func_00129538(s32, s32 *);
extern s32 D_011E6BB8[];

void func_0015FC98(void) {
    u32 arg0;
    int buffer[4];

    arg0 = func_00135080(0x13f);
    D_011E6BB8[0] = func_00129538(arg0, buffer);
}
