/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00137450(void *arg0, void *arg1) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    void *temp_t1;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x58);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    var_a2 = (s32) (temp_v1 + (M2C_FIELD(arg0, s32 *, 0x5C) - temp_a3)) % temp_v1;
    var_v1 = 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8) << 0xB;
    if (temp_a3 > 0) {
loop_2:
        temp_t1 = M2C_FIELD(arg0, s32 *, 0x50) + (var_a2 * 0x18);
        temp_t0 = M2C_FIELD(temp_t1, s32 *, 0x14);
        if (temp_t0 != 0) {
            temp_a7 = M2C_FIELD(arg1, s32 *, 0x14);
            if (temp_a7 != 0) {
                temp_a6 = M2C_FIELD(temp_t1, s32 *, 0x10);
                temp_a5 = M2C_FIELD(arg1, s32 *, 0x10);
                if (((s32) ((temp_a6 + temp_v0) - temp_a5) % temp_v0) < temp_a7) {
                    temp_a3_2 = (temp_a5 + temp_a7) - temp_a6;
                    temp_t0_2 = (temp_t0 >= temp_a3_2) ? temp_a3_2 : temp_t0;
                    M2C_FIELD(temp_t1, s32 *, 0x10) = (s32) ((s32) (temp_a6 + temp_t0_2) % temp_v0);
                    M2C_FIELD(temp_t1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_t1, s32 *, 0x14) - temp_t0_2);
                    if (M2C_FIELD(temp_t1, s32 *, 0x14) == 0) {
                        if (M2C_FIELD(temp_t1, s64 *, 0) >= 0) {
                            M2C_FIELD(temp_t1, s64 *, 0) = -1;
                            M2C_FIELD(temp_t1, s64 *, 8) = -1;
                            M2C_FIELD(temp_t1, s32 *, 0x10) = 0;
                            M2C_FIELD(temp_t1, s32 *, 0x14) = 0;
                        }
                        var_a3 = M2C_FIELD(arg0, s32 *, 0x58) - 1;
                        if (var_a3 < 0) {
                            var_a3 = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0x58) = var_a3;
                    }
                } else {
                    var_v1 = 0;
                }
                var_a2 = (s32) (var_a2 + 1) % (s32) M2C_FIELD(arg0, s32 *, 0x54);
                if (var_v1 != 0) {
                    goto loop_2;
                }
            }
        }
    }
    return 0;
}
