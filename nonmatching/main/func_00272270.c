/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001A55A0(void);
extern float func_001A5660(void);
extern void func_00142E00(s32);
extern char D_00592734[];
extern char D_00592743[];

void func_00272270(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 & 0xFF;
    switch (temp_a1) {                              /* irregular */
    case 3:
        if (((*(u8 *)D_00592743) == 3) && (func_001A55A0() < -9196.0f) && (func_001A5660() < 1450.0f)) {
            if ((*(u8 *)D_00592734) == 0) {
                func_00142E00(0);
                (*(u8 *)D_00592734) = 1;
            }
            return;
        }
    default:
    case 2:
    case 1:
    case 0:
        if ((*(u8 *)D_00592734) == 1) {
            func_00142E00(1);
            (*(u8 *)D_00592734) = 0;
        }
        return;
    }
}
