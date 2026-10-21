/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001628B8(s32);
void func_00167C58(s32 *p, s32 v) { *(u8 *)((u8 *)p + 0x98) = v; if (*(s32 *)((u8 *)p + 4) != 0) func_001628B8(*(s32 *)((u8 *)p + 4)); }
