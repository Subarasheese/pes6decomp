/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_001D7980(s32);
s32 func_002F9370(s32, s32);
s32 func_00B26DB0(void);
s32 func_00B26E00(void);
extern s32 D_003EA870;
extern char D_00591DCC[];
extern char D_00CCC070[];
extern char D_00CCC080[];

s32 func_00C7EF80(u32 arg0) {
    s32 a1;
    s32 a0;
    s32 s0;

    s0 = 0;
    if (arg0 >= 3U) {
        return 0;
    }
    if (func_00B26E00() == 0) {
        return 0;
    }
    a1 = arg0 ^ (*(u8 *)D_00591DCC);
    if (*(s32 *)(D_00CCC070 + a1 * 4) != 0) {
        a0 = *(s32 *)(D_00CCC080 + a1 * 0x58);
        D_003EA870 = a1;
        if (a0 != 0) {
            s0 = func_001D7980(func_002F9370(a0, a1)) != 0;
        }
    }
    return s0 & func_00B26DB0();
}
