/* compiler: ee-gcc-2.96 */
#include "types.h"
extern s32 _impure_ptr[]; extern u8 D_003D1950[];
void func_001C2198(s32, void *, s32, s32, s32); void func_001C02D8(void);
void func_001C0308(s32 a, s32 b, s32 c) { func_001C2198(*(s32 *)((u8 *)_impure_ptr[0] + 0xC), D_003D1950, c, a, b); func_001C02D8(); }
