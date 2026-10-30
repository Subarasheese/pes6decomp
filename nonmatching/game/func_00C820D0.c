/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C82300();                            /* extern */
M2C_UNK func_00C82DB0(s32);                         /* extern */
M2C_UNK func_00C84530();                            /* extern */
extern s32 D_003EA87C;
extern char D_00591DCC[];
extern char D_00CCCC00[];

void func_00C820D0(void) {
    s32 temp_a0;

    temp_a0 = D_003EA87C;
    if (temp_a0 == 1) {
        D_003EA87C = 0;
        func_00C82DB0(temp_a0);
        func_00C82300();
    }
    if ((*(u8 *)D_00CCCC00) != (*(u8 *)D_00591DCC)) {
        if (func_002DCA30() != 0) {
            func_00C84530();
        }
        (*(u8 *)D_00CCCC00) = (*(u8 *)D_00591DCC);
    }
}
