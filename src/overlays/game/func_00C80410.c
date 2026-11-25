/* compiler: mwcc-3.0.1b210 */
#include "pes6/game_flags.h"
extern u8 D_00591C09[];
void func_00C80410(s32 setting) {
    if (D_00591C09[0] == 5)
        setting = 0;
    D_00CCC1C0[0].bit0 = setting;
    D_00CCC1C0[0].bit1 = 1;
}
