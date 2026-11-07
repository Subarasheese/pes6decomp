/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001FC840(s32);
extern void func_001FC780(s32);
extern void func_002CADA0(void);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00AF6230();                            /* extern */
extern s32 D_003EAD50;

void func_00AF6190(void) {
    s32 temp_v0;

    if (D_003EAD50 == 0) {
        func_001FC780(0xB);
        func_002CADA0();
        func_001FC840(0x23);
        if (D_003EAD50 == 0) {
            temp_v0 = func_0096DB90(4);
            D_003EAD50 = temp_v0;
            func_001C48E8(temp_v0, 0, 4);
        }
        func_00AF6230();
    }
}
