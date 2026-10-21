/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001634B0(s32 *, s32);
void func_00164570(s32 *p, s32 v) { *(s32 *)((u8 *)p + 0xC) = v; func_001634B0(p, 0); }
