/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_00156660(s32); void func_00156478(s32, s32);
void func_00161980(s32 *p, s32 v) { *(s32 *)((u8 *)p + 0x38) = v; func_00156660(*(s32 *)((u8 *)p + 4)); func_00156478(*(s32 *)((u8 *)p + 4), v); }
