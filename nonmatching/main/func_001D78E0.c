/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_001D78E0(void *arg0, void *arg1) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_a2 = M2C_FIELD(arg1, u8 *, 0);
        if (temp_a2 != 0xFF) {
            var_v1 = (s32) temp_a2 >> 1;
        } else {
            var_v1 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x54) = (s8) var_v1;
        temp_a2_2 = M2C_FIELD(arg1, u8 *, 1);
        if (temp_a2_2 != 0xFF) {
            var_v1_2 = (s32) temp_a2_2 >> 1;
        } else {
            var_v1_2 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x55) = (s8) var_v1_2;
        temp_a2_3 = M2C_FIELD(arg1, u8 *, 2);
        if (temp_a2_3 != 0xFF) {
            var_v1_3 = (s32) temp_a2_3 >> 1;
        } else {
            var_v1_3 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x56) = (s8) var_v1_3;
        temp_a1 = M2C_FIELD(arg1, u8 *, 3);
        if (temp_a1 != 0xFF) {
            var_v1_4 = (s32) temp_a1 >> 1;
        } else {
            var_v1_4 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x57) = (s8) var_v1_4;
        M2C_FIELD(arg0, s32 *, 0x58) = 0x3F800000;
    }
}
