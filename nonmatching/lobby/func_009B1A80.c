/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_003EAD10;

void func_009B1A80(void) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = D_003EAD10;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
    temp_a0_2 = M2C_FIELD(temp_s0, void **, 0);
    if (temp_a0_2 != NULL) {
        func_001D4E00(temp_a0_2);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
    }
    if (temp_s0 != NULL) {
        func_0099C7C0(temp_s0);
    }
}
