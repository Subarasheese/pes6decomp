/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_00156630(s32); void func_00156448(s32, s32);
void func_00161930(s32 *p, s32 v) { *(s32 *)((u8 *)p + 8) = v; func_00156630(*(s32 *)((u8 *)p + 4)); func_00156448(*(s32 *)((u8 *)p + 4), v); }
