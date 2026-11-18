/* compiler: ee-gcc-2.96 */
#include "types.h"
void ADXCRS_Lock(s32, s32, s32, f32); void func_00166BC0(s32, f32, s32, s32); void ADXCRS_Unlock(void);
void func_00166B60(s32 a, s32 b, s32 c, f32 f) { ADXCRS_Lock(a, b, c, f); func_00166BC0(a, f, b, c); ADXCRS_Unlock(); }
