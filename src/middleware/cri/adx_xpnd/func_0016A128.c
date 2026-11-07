/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001C48E8(void *, s32, s32);
void func_0016A128(s32 *p) { *(s32 *)((u8 *)p + 0xC) = 0; func_001C48E8((u8 *)p + 0x28, 0, 8); }
