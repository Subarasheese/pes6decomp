/* compiler: ee-gcc-2.96 */
#include "types.h"
extern s32 _impure_ptr[];
void _strtoul_r(s32, s32, s32, s32);
void func_001C9C28(s32 a, s32 b, s32 c) { _strtoul_r(_impure_ptr[0], a, b, c); }
