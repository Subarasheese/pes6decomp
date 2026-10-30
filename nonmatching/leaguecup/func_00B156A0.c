/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BE2E0(u16, void *, void *, M2C_UNK); /* extern */
M2C_UNK func_00B14F00();                            /* extern */
M2C_UNK func_00B15050();                            /* extern */
extern void *D_003EAD74;

void func_00B156A0(void) {
    void *temp_s0;

    if (D_003EAD74 != NULL) {
        func_00B15050();
        func_00B14F00();
        temp_s0 = D_003EAD74;
        if (temp_s0 != NULL) {
            func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x80), temp_s0 + 0x48, temp_s0 + 0x68, 0);
            func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x8C), temp_s0 + 0x58, temp_s0 + 0x68, 0);
        }
    }
}
