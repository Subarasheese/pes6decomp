/* compiler: ee-gcc-2.96 */
#include "types.h"
void func_001722A0(void); void func_001C48E8(void *, s32, s32);
void func_00171FE0(s32 *p) { if (p == 0) return; func_001722A0(); *(u8 *)p = 0; func_001C48E8(p, 0, 0x238); }
