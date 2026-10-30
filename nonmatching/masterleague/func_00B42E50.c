/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern u8 func_0022F8D0(void);
s32 func_0096E440(s32);                             /* extern */
extern void *D_003EAE6C;

s32 func_00B42E50(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    temp_s0 = D_003EAE6C;
    if (temp_s0 == NULL) {
        goto block_14;
    }
    temp_v1 = func_0022F8D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_s1 = 0;
        var_s2 = 0;
        do {
            temp_a0 = Pes6Team_GetPlayerId((s32) M2C_FIELD(temp_s0, u16 *, 0x6B0), var_s2, 1) & 0xFFFF;
            if ((temp_a0 != 0) && (func_0096E440(temp_a0) != 0)) {
                var_s1 = (var_s1 + 1) & 0xFF;
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 0x20);
        return (var_s1 & 0xFF) < 0x10;
    case 2:
    case 0:
block_14:
        return 0;
    }
}
