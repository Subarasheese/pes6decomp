/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_00510B00[];
void DTX_CallUrpc(s32, void *, s32, s32, s32);
void func_00178C70(s32 v) { *(s32 *)D_00510B00 = v; DTX_CallUrpc(0x23, D_00510B00, 1, 0, 0); }
