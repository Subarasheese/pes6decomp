/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_002DCA30(void);
extern s32 func_008481D0(void);
extern u32 func_009B2B30(void);
extern void func_009B15F0(void);
extern void func_009B17F0(void);
extern void func_009B1DC0(void);
extern char D_00592294[];
u32 func_009B2870(void) {
    u32 s0;
    if (func_002DCA30() != 0) {
        if (func_008481D0() != 0) return 0;
    }
    if (*(u8 *)D_00592294 > 0) {
        *(u8 *)D_00592294 = *(u8 *)D_00592294 - 1;
    }
    s0 = func_009B2B30();
    if (s0 == 1 || s0 == 2) {
        func_009B15F0();
    } else if (s0 >= 3 && s0 <= 6) {
        func_009B17F0();
    } else if (s0 == 7 || s0 == 8) {
        func_009B1DC0();
    }
    return s0;
}
