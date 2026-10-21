/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001C48E8(void *, s32, s32);
void func_00157EC8(s32 *p) { *(s32 *)((u8 *)p + 0xCC) = 0; *(s16 *)((u8 *)p + 0xE0) = 0; *(s16 *)((u8 *)p + 0xE2) = -0x80; *(s16 *)((u8 *)p + 0xE4) = -0x80; func_001C48E8((u8 *)p + 0xD0, 0, 0x10); }
