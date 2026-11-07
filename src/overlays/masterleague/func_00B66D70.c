/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_001D5F80(M2C_UNK);
void *func_0096DB90(M2C_UNK);
extern u8 *D_003EAEE0;
void func_00B66D70(s8 arg0) {
    u8 *p;
    if (D_003EAEE0 == NULL) {
        if (D_003EAEE0 == NULL) {
            p = func_0096DB90(0x20);
            D_003EAEE0 = p;
            func_001C48E8(p, 0, 0x20);
        }
        p = D_003EAEE0;
        if (p != NULL) {
            p[0x1C] = 0;
            p[0x1D] = arg0;
        }
        func_001D5F80(0x1031C);
    }
}
