/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern void *D_003EAD54;

s32 func_00B01540(s32 arg0) {
    s32 temp_hi;
    s32 temp_v1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 != 0) {
            if ((M2C_FIELD(temp_s0, u8 *, 0x29A50) - 1) != temp_v1) {
                return 0x17;
            }
            if ((func_00226710() & 0xFF) != 0x2C) {
                if ((func_00226710() & 0xFF) != 0x38) {
                    var_v0 = 0x17;
                    temp_hi = (s32) (M2C_FIELD(temp_s0, s32 *, 0x29A4C) - 0x12) % 23;
                    if (temp_hi != 0) {
                        return temp_hi;
                    }
                    /* Duplicate return node #27. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_21;
            }
block_21:
            var_v0 = (s32) M2C_FIELD(temp_s0, s32 *, 0x29A4C) % 23;
            if (var_v0 == 0) {
                return 0x17;
            }
            return var_v0;
        }
        if ((func_00226710() & 0xFF) == 0x2C) {
            return 0x17;
        }
        if ((func_00226710() & 0xFF) != 0x38) {
            return 0x12;
        }
        return 0x17;
    }
    return 0;
}
