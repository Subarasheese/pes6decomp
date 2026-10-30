/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
s32 func_00993A80();                                /* extern */
M2C_UNK func_00994590();                            /* extern */
s32 func_009A0430();                                /* extern */
M2C_UNK func_009A0630();                            /* extern */
M2C_UNK func_00B71C90();                            /* extern */
extern s32 D_003EAEFC;

void func_00B72010(void) {
    s32 temp_v0;

    if (D_003EAEFC == 0) {
        if (func_00993A80() == 0) {
            func_001D5F80(0x10329);
            func_00994590();
        }
        if (func_009A0430() == 0) {
            func_009A0630();
        }
        if (D_003EAEFC == 0) {
            temp_v0 = func_0096DB90(0x20);
            D_003EAEFC = temp_v0;
            func_001C48E8(temp_v0, 0, 0x20);
        }
        func_00B71C90();
    }
}
