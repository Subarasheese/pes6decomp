/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
s32 func_00154070(M2C_UNK *, M2C_UNK);              /* extern */
extern char D_005B3744[];
extern char D_005F9618[];
extern M2C_UNK *D_011D4C88;
extern M2C_UNK func_00129CF8;

void func_00129EE0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 >= 0) {
        if (arg0 < 2) {
            temp_v0 = func_00154070((M2C_UNK *)0x5F9618, -1);
            switch (temp_v0) {                      /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x1E), &func_00129CF8, (*(s32 *)D_005B3744));
                return;
            case 2:                                 /* switch 1 */
                func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x1F), &func_00129CF8, (*(s32 *)D_005B3744));
                return;
            case 3:                                 /* switch 1 */
                func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x20), &func_00129CF8, (*(s32 *)D_005B3744));
                return;
            }
        } else {
            if (arg0 != 2) {
                return;
            }
            temp_v0_2 = func_00154070(((void *)D_005F9618), -1);
            if (temp_v0_2 != arg0) {
                switch (temp_v0_2) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x1B), D_011D4C88, (*(s32 *)D_005B3744));
                    return;
                case 3:                             /* switch 2 */
                    func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x1D), D_011D4C88, (*(s32 *)D_005B3744));
                    return;
                }
            } else {
                func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x1C), D_011D4C88, (*(s32 *)D_005B3744));
            }
        }
    }
}
