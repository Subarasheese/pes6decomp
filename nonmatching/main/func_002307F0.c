/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_002262E0(s32);                             /* extern */
extern char D_00591C09[];

s32 func_002307F0(void) {
    s32 temp_s0;
    s32 temp_v1;

    if ((func_00309420() != 0) == 1) {
        return 0xFF;
    }
    if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
        return 0xFF;
    }
    temp_s0 = func_00226710() & 0xFF;
    if ((func_00309420() != 0) != 1) {
        temp_v1 = func_002262E0(temp_s0) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 1:
            return 1 & 0xFF;
        case 3:
            return 0;
        case 5:
        case 0:
        case 2:
            return 0;
        default:
            return 0xFF;
        }
    } else {
        return 0xFF;
    }
}
