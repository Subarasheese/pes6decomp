/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_00529AB4[];
extern s32 D_00529AB0[];

void func_001CDB60(void) {
    D_00529AB0[0] = (s32)((f32)*(volatile u32 *)0x10000800 * D_00529AB4[0]);
}
