/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0093B620();                            /* extern */
s32 func_0096DAB0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00AF7080();                            /* extern */
extern s32 D_003EADCC;

void func_00AF7900(void) {
    s32 temp_v0;

    if (D_003EADCC == 0) {
        func_0093B620();
        if (D_003EADCC == 0) {
            temp_v0 = func_0096DAB0(0x588A8, 0x10);
            D_003EADCC = temp_v0;
            func_001C48E8(temp_v0, 0, 0x588A8);
        }
        func_00AF7080();
    }
}
