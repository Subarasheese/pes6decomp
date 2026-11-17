/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* When slot D_003EA818 of the table D_003EA81C is set, calls func_00C6FFA0 with the slot offset and
 * the remaining arguments unchanged. */
void func_00C6FFA0(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_003EA818;
extern s32 D_003EA81C[];

void func_00C6FF60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 i = D_003EA818;

    if (D_003EA81C[i] != 0) {
        func_00C6FFA0(i * 4, a1, a2, a3, a4, a5, a6, a7);
    }
}
