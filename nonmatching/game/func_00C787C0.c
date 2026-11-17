/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Clears D_003EA83C; when D_003EA840 was set, calls func_00C788B0 with the arguments unchanged. */
void func_00C788B0(s32, s32, s32, s32);
extern s32 D_003EA83C;
extern s32 D_003EA840;

void func_00C787C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 pending = D_003EA840;

    D_003EA83C = 0;
    if (pending != 0) {
        func_00C788B0(a0, a1, a2, a3);
    }
}
