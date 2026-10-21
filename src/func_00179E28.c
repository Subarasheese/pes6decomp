/* compiler: ee-gcc-2.96 */
#include "types.h"
extern s32 D_00510FB0[];
void func_001795B0(s32, s32); void func_001795C8(void);
void func_00179E28(s32 a, s32 b) { func_001795B0(a, b); D_00510FB0[0] = a; D_00510FB0[1] = b; func_001795C8(); }
