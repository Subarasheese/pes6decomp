/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C7F58(void *, void *);              /* extern */
M2C_UNK func_00957990();                            /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAE34;

void func_00B2FDB0(void) {
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    if (D_003EAE34 == NULL) {
        func_00957990();
        if (D_003EAE34 == NULL) {
            temp_v0 = func_0096DB90(0x58);
            D_003EAE34 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x58);
        }
        temp_s0 = D_003EAE34;
        if (temp_s0 != NULL) {
            temp_v0_2 = func_00228960();
            M2C_FIELD(temp_s0, void **, 0) = temp_v0_2;
            func_001C7F58(temp_s0 + 0x20, temp_v0_2);
            M2C_FIELD(temp_s0, s32 *, 0x50) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x30);
            M2C_FIELD(temp_s0, s32 *, 0x54) = 0;
        }
    }
}
