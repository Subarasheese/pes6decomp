/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_001D7BA0(void *);
M2C_UNK func_009CEAD0(void *);                      /* extern */
M2C_UNK func_009CF0B0(M2C_UNK);                     /* extern */
M2C_UNK func_009CFE80();                            /* extern */
M2C_UNK func_009D00A0();                            /* extern */
extern void *D_00A7DDF8;

s32 func_009D0D90(void) {
    s32 var_s0;
    u8 temp_v1;
    void *temp_s0;

    if (D_00A7DDF8 != NULL) {
        temp_s0 = M2C_FIELD(D_00A7DDF8, void **, 0x7EC);
        temp_v1 = M2C_FIELD(D_00A7DDF8, u8 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 3:
            var_s0 = 0;
            break;
        case 2:
            if (func_001D7BA0(temp_s0) != 2) {
                M2C_FIELD(D_00A7DDF8, u8 *, 0) = 3U;
                func_001D7D60(temp_s0, 0);
            }
        default:
        case 0:
block_19:
            var_s0 = 0;
            break;
        case 1:
            if (func_001D7BA0(temp_s0) != 2) {
                M2C_FIELD(D_00A7DDF8, u8 *, 0) = 0U;
                func_009CF0B0(1);
            }
            goto block_19;
        }
loop_21:
        if (var_s0 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            func_009CEAD0(D_00A7DDF8 + (var_s0 << 7) + 8);
            var_s0 += 1;
            goto loop_21;
        }
        func_009D00A0();
        func_009CFE80();
        return 1;
    }
    return 0;
}
