/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAE3C;

void func_00B31820(void) {
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    if (D_003EAE3C == NULL) {
        if (D_003EAE3C == NULL) {
            temp_v0 = func_0096DB90(0xF0);
            D_003EAE3C = temp_v0;
            func_001C48E8(temp_v0, 0, 0xF0);
        }
        temp_s0 = D_003EAE3C;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0xEC) = 0;
            M2C_FIELD(temp_s0, s16 *, 0xE4) = 6;
            temp_v0_2 = func_00228960();
            M2C_FIELD(temp_s0, void **, 0) = temp_v0_2;
            M2C_FIELD(temp_s0, s32 *, 0xE8) = (s32) M2C_FIELD(temp_v0_2, s32 *, 0xDC);
        }
        func_001D5F80(0x10335);
    }
}
