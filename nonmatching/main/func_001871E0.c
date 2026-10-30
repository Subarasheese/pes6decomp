/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00185DA0(void);
extern void func_0018A480(s32, u8);
M2C_UNK func_001843C0();                            /* extern */
M2C_UNK func_001872A0();                            /* extern */
M2C_UNK func_001897F0();                            /* extern */
M2C_UNK func_00189B10();                            /* extern */
extern char D_0051FF4C[];
extern char D_0051FF53[];
extern M2C_UNK (*D_0051FFE8)();

void func_001871E0(void) {
    s32 var_s0;

    if ((*(u8 *)D_0051FF4C) != 0) {
        if (D_0051FFE8 != NULL) {
            D_0051FFE8();
        } else {
            var_s0 = 0;
            do {
                func_0018A480(var_s0, 0U);
                var_s0 += 1;
            } while (var_s0 < 4);
        }
        if ((*(u8 *)D_0051FF53) == 1) {
            func_001843C0();
            (*(u8 *)D_0051FF53) = 0;
        }
        func_001897F0();
        func_00189B10();
        func_00185DA0();
        func_001872A0();
    }
}
