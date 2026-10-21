/* compiler: ee-gcc-2.9 */
#include "types.h"
void func_00103F50(s32, f32); void func_001040A0(s32, s32, f32); void func_00103FF8(s32, s32, f32);
void func_00104148(s32 a, s32 b, f32 *p) { func_00103F50(a, p[2]); func_001040A0(a, a, p[1]); func_00103FF8(a, a, p[0]); }
