/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DD40;

s32 func_009C0EC0(void) {
    s32 temp_a0_2;
    void *temp_a0;
    void *temp_s0;

    temp_s0 = D_00A7DD40;
    if (temp_s0 != NULL) {
        temp_a0 = M2C_FIELD(temp_s0, void **, 4);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
        if (temp_a0_2 != 0) {
            func_002DF960(temp_a0_2);
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        }
        func_0099C7C0(temp_s0);
        D_00A7DD40 = NULL;
        return 0;
    }
    return 4;
}
