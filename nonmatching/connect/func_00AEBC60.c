/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002211A0(int, int, int, int);
extern char D_00B02B48[];
extern char D_00B02B4A[];

void func_00AEBC60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_002211A0(arg0, arg1, arg2, arg3);
    M2C_FIELD(temp_v0, u16 *, 0x40) = (u16) (*(u16 *)D_00B02B48);
    M2C_FIELD(temp_v0, u8 *, 0x42) = (u8) (*(u8 *)D_00B02B4A);
}
