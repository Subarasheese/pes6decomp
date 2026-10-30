/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B15200(s8);                          /* extern */
M2C_UNK func_00B153A0();                            /* extern */
extern void *D_003EAD74;

void func_00B15710(s8 arg0) {
    void *temp_v0;

    if (D_003EAD74 == NULL) {
        if (D_003EAD74 == NULL) {
            temp_v0 = func_0096DB90(0x98);
            D_003EAD74 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x98);
        }
        if (D_003EAD74 != NULL) {
            M2C_FIELD(D_003EAD74, s8 *, 0x78) = 0;
            M2C_FIELD(D_003EAD74, s8 *, 0x79) = arg0;
            func_00B15200(arg0);
            func_00B153A0();
        }
        func_001D5F80(0x10305);
    }
}
