/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009CECE0(s32, void *);                 /* extern */
extern void *D_00A7DDF8;

s32 func_009D10A0(s32 arg0, s8 arg1) {
    s32 var_s0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        goto block_18;
    }
    if (arg1 >= 0) {
        if (arg1 < 6) {
            var_s0 = 0;
loop_15:
            if (var_s0 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
                temp_v0 = D_00A7DDF8 + (var_s0 << 7);
                temp_a1 = temp_v0 + 8;
                if ((arg0 == M2C_FIELD(temp_v0, s32 *, 8)) && (arg1 != M2C_FIELD(temp_a1, u8 *, 0x7A))) {
                    M2C_FIELD(temp_a1, u8 *, 0x7A) = (u8) arg1;
                    func_009CECE0(M2C_FIELD(temp_a1, s32 *, 0x7C), temp_a1);
                }
                temp_v0_2 = D_00A7DDF8 + (var_s0 * 0x7C);
                if (arg0 == M2C_FIELD(temp_v0_2, s32 *, 0x408)) {
                    M2C_FIELD((temp_v0_2 + 0x408), s8 *, 0x7A) = arg1;
                }
                var_s0 += 1;
                goto loop_15;
            }
            goto block_18;
        }
        return 1;
    }
block_18:
    return 1;
}
