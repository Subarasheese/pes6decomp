/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EA9BC;

void func_009B85B0(s8 arg0) {
    void *temp_v0;

    if (D_003EA9BC == NULL) {
        if (D_003EA9BC == NULL) {
            temp_v0 = func_0096DB90(0x40);
            D_003EA9BC = temp_v0;
            func_001C48E8(temp_v0, 0, 0x40);
        }
        temp_v0 = D_003EA9BC;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 0x28) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x29) = arg0;
        }
    }
}
