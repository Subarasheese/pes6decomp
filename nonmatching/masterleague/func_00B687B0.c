/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00B20EE0(void);
extern s32 func_00B68260(s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
s32 func_00B683B0(s32);                             /* extern */
extern void *D_003EAEE4;

void func_00B687B0(void) {
    s32 temp_s1;
    void *temp_s0;
    void *temp_v0;

    if (D_003EAEE4 == NULL) {
        if (D_003EAEE4 == NULL) {
            temp_v0 = func_0096DB90(0x1A0);
            D_003EAEE4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x1A0);
        }
        temp_s0 = D_003EAEE4;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x148) = 0;
            temp_s1 = func_00B20EE0() & 0xFFFF;
            M2C_FIELD(temp_s0, s8 *, 0x144) = (s8) ((s32) (func_00B683B0(temp_s1) & 0xFF) % 16);
            M2C_FIELD(temp_s0, s32 *, 0x150) = (s32) (func_00B68260(temp_s1) & 0xFF);
        }
        func_001D5F80(0x1033D);
        func_001D5F80(0x10337);
    }
}
