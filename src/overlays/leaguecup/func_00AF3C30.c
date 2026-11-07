/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_001D5F80(M2C_UNK);
void *func_0096DB90(M2C_UNK);
extern u8 *D_003EAD48;
void func_00AF3C30(void) {
    u8 *p;
    if (D_003EAD48 == NULL) {
        if (D_003EAD48 == NULL) {
            p = func_0096DB90(0x90);
            D_003EAD48 = p;
            func_001C48E8(p, 0, 0x90);
        }
        p = D_003EAD48;
        if (p != NULL) {
            *(s32 *)(p + 0x88) = 0;
            p[0x84] = 0;
        }
        func_001D5F80(0x102B5);
        func_001D5F80(0x10344);
    }
}
