/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00853220(s32, char *, char *, s32);
extern s32 func_00B29110();
extern s32 func_00BC44F0();
extern s32 func_00C00390(s32);
extern void func_00C00440(s32, s32);
extern char D_00591C09[];
extern char D_008524E0[];
extern char D_00855180[];

s32 func_00BC54E0(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(u8 *)D_00591C09) != 5) {
        if (func_00BC44F0() != 0) {
            func_00C00440(1, func_00C00390(1));
            if (func_002DCA30() == 0) {
            } else {
                func_00853220(-9, D_008524E0, D_00855180, 7);
            }
            var_s0 = 1;
        }
    } else {
        if (func_00B29110() != 0) { var_s0 = 1; }
    }
    return var_s0;
}
