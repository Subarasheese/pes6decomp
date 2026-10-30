/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B0F670(s32);
extern void func_00B0FDE0(s32);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00B0EE10();                                /* extern */
s32 func_00B0F080();                                /* extern */
M2C_UNK func_00B0F8A0(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_00B0FF90();                            /* extern */
extern void *D_003EAD68;

s32 func_00B0D130(void) {
    void *temp_s0;

    temp_s0 = D_003EAD68;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x141C) == 0) {
            if (func_00B0F080() != 1) {
                return 0;
            }
            M2C_FIELD(temp_s0, s32 *, 0x141C) = 1;
            M2C_FIELD(temp_s0, u8 *, 0x132F) = 1U;
            func_00B0F670(M2C_FIELD(temp_s0, s32 *, 0x141C));
            func_00B0FF90();
            func_00B0F8A0(M2C_FIELD(temp_s0, s32 *, 0x141C), M2C_FIELD(temp_s0, u8 *, 0x132F), 0);
            func_00B0FDE0((s32) M2C_FIELD(temp_s0, u8 *, 0x132D));
            func_00958000(0x8E);
            return 0;
        }
        return func_00B0EE10();
    }
    return 0;
}
