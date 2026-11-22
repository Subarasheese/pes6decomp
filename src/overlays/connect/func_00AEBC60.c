/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002211A0(s32, s32, s32, s32);
extern u16 D_00B02B48[];
extern u8 D_00B02B4A[];

s32 func_00AEBC60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value1;
    value1 = func_002211A0(arg0, arg1, arg2, arg3);
    ((s16 *)(value1))[0x20] = D_00B02B48[0];
    ((s8 *)(value1))[0x42] = D_00B02B4A[0];
    return value1;
}
