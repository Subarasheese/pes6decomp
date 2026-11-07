/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_001D5F80(M2C_UNK);
void *func_0096DB90(M2C_UNK);
M2C_UNK func_00B15200(s8);
M2C_UNK func_00B153A0();
extern u8 *D_003EAD74;
void func_00B15710(s8 arg0) {
    u8 *p;
    if (D_003EAD74 == NULL) {
        if (D_003EAD74 == NULL) {
            p = func_0096DB90(0x98);
            D_003EAD74 = p;
            func_001C48E8(p, 0, 0x98);
        }
        p = D_003EAD74;
        if (p != NULL) {
            p[0x78] = 0;
            p[0x79] = arg0;
            func_00B15200(arg0);
            func_00B153A0();
        }
        func_001D5F80(0x10305);
    }
}
