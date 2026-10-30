/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B55440(s32);                         /* extern */
s32 func_00B56890();                                /* extern */
extern void *D_003EAEB4;

void func_00B59460(s32 arg0) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EAEB4 == NULL) {
        if (D_003EAEB4 == NULL) {
            temp_v0 = func_0096DB90(0x90);
            D_003EAEB4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x90);
        }
        temp_s0 = D_003EAEB4;
        if (temp_s0 != NULL) {
            if (!(func_00B56890() & 0xFF)) {
                func_00B55440(arg0);
            }
            M2C_FIELD(temp_s0, s32 *, 0x6C) = 0;
        }
        func_001D5F80(0x10340);
    }
}
