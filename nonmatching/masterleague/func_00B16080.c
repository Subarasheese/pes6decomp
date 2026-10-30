/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B15380(s32);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
extern s32 D_003EADF0;

void func_00B16080(s32 arg0) {
    s32 temp_v0;

    if (D_003EADF0 == 0) {
        if (D_003EADF0 == 0) {
            temp_v0 = func_0096DB90(0xC4C);
            D_003EADF0 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xC4C);
        }
        func_00B15380(arg0);
    }
}
