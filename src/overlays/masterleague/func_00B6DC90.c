/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u16 func_00B20EE0(void);
extern void *func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_001D5F80(M2C_UNK);
void *func_0096DB90(M2C_UNK);
extern void *D_003EAEF4;

void func_00B6DC90(void) {
    s32 temp_a0;
    s32 var_v0;
    void *new_var3;
    s32 var_v0_2;
    s8 *new_var2;
    s8 *new_var4;
    s32 var_v0_3;
    void *temp_s0;
    void *new_var;
    unsigned int new_var5;
    void *temp_v0;
    if (!D_003EAEF4) {
        if (D_003EAEF4 == 0) {
            new_var = func_0096DB90(0x70);
            temp_v0 = new_var;
            D_003EAEF4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x70);
        };
        temp_s0 = D_003EAEF4;
        if (0 != temp_s0) {
            *((void **)(((s8 *)temp_s0) + 0)) = func_00228960();
            *((s32 *)(((s8 *)temp_s0) + 0x64)) = 0;
            temp_a0 = func_00B20EE0() & 0xFFFF;
            new_var2 = (s8 *)temp_s0;
            if (!(temp_a0 < 0x6A)) {
                var_v0_2 = 0;
            } else {
                var_v0 = temp_a0 & 0xF;
                if ((temp_a0 < 0) && (var_v0 != 0)) {
                    var_v0 -= 0x10;
                }
                new_var5 = (var_v0_2 = var_v0 & 0xFF);
            }
            *(new_var4 = (s8 *)(new_var2 + 0x5C)) = (s8)(((s32)(var_v0_2 & 0xFF)) % 16);
            if ((temp_a0 < 0x6A) == 0) {
                var_v0_3 = 0;
            } else {
                var_v0_3 = ((((u32)(temp_a0 & 0xFFFF)) >> 2) >> 2) & 0xFF;
            }
            *((s32 *)(new_var2 + 0x60)) = (s32)(var_v0_3 & 0xFF);
        }
        func_001D5F80(0x10337);
        func_001D5F80(0x1033D);
    }
}
