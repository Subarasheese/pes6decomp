/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001C48E8(void *, s32, s32); s32 func_001C8590(void *, void *, s32); void func_001788C0(s32, s32);
void func_00178A08(s32 *p, s32 b) { func_001C48E8(*(s32 *)((u8 *)p + 0), 0, *(s32 *)((u8 *)p + 4)); func_001C8590(*(s32 *)((u8 *)p + 0), (void *)b, 7); func_001788C0(*(s32 *)((u8 *)p + 4) - 0x10, *(s32 *)((u8 *)p + 0) + 8); }
