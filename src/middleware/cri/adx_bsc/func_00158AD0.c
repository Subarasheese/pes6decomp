/* compiler: ee-gcc-2.96 */
#include "types.h"
void ADXPD_EntrySte(s32, s32, s32, s32, s32); void func_0016A108(s32);
void func_00158AD0(s32 *p, s32 v) { s32 *q = (s32 *)((u8 *)p + 0x48); s32 s = *(s32 *)((u8 *)p + 8); s32 a3 = q[5] + (q[8] << 1); ADXPD_EntrySte(s, q[0], v * 2, a3, a3 + (q[7] << 1)); func_0016A108(s); }
