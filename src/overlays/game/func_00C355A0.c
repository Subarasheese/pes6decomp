/* compiler: mwcc-3.0.3 */
#include "types.h"
extern u8 D_00CCB65C[], D_00CCB65E[];
void func_00C355A0(s32 side, s8 value) {
    D_00CCB65C[side] = 9;
    D_00CCB65E[side] = value;
    D_00CCB65C[(side != 0) ^ 1] = 10;
    D_00CCB65E[(side != 0) ^ 1] = value;
}
