/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BE2E0(u16, void *, void *, M2C_UNK); /* extern */
extern void *D_003EAD78;

void func_00B16A70(void) {
    void *temp_s0;

    temp_s0 = D_003EAD78;
    if (temp_s0 != NULL) {
        func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x64), temp_s0 + 0x3AC, temp_s0 + 0x3BC, 4);
        M2C_FIELD(temp_s0, s8 *, 0x3CC) = 7;
    }
}
