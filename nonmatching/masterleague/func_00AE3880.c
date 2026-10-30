/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
extern void func_001EF900(void *, s8);
extern void func_001D7D60(void *, s8);
extern void func_001EDAE0(void *, s8);
void func_00AE3880(s8 arg0) {
    s32 temp_s3;
    s32 temp_s7;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    u32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s5;
    void *temp_s5_2;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        func_001EDAE0(M2C_FIELD(temp_v0, void **, 0x628), arg0);
        var_s3 = 0;
        do {
            var_s2 = 0;
loop_3:
            temp_s5 = temp_v0 + ((var_s3 & 0xFF) * 0x168) + ((var_s2 & 0xFF) * 0xE10);
            temp_a0 = M2C_FIELD(temp_s5, void **, 0x3F30);
            if (temp_a0 != NULL) {
                func_001EDAE0(temp_a0, arg0);
            }
            temp_a0_2 = M2C_FIELD(temp_s5, void **, 0x3F34);
            if (temp_a0_2 != NULL) {
                func_001EDAE0(temp_a0_2, arg0);
            }
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 < 2) {
                goto loop_3;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0xA);
        if (!(arg0 & 0xFF)) {
            var_s6 = 0;
            do {
                temp_s7 = var_s6 & 0xFF;
                var_s0 = 0;
                temp_s3 = temp_v0 + (temp_s7 * 4);
loop_12:
                temp_v1 = var_s0 & 0xFF;
                if (temp_s7 >= (s32) M2C_FIELD((temp_v0 + temp_v1), u8 *, 0x3DCA)) {
                    var_s5 = 0;
                    do {
                        func_001D7D60(M2C_FIELD((temp_s3 + (temp_v1 * 0x118) + ((var_s5 & 0xFF) * 0x28)), void **, 0x87C), 0);
                        var_s5 = (var_s5 + 1) & 0xFF;
                    } while (var_s5 < 7);
                } else {
                    var_s5_2 = 0;
                    do {
                        func_001D7D60(M2C_FIELD((temp_s3 + (temp_v1 * 0x118) + ((var_s5_2 & 0xFF) * 0x28)), void **, 0x87C), arg0);
                        var_s5_2 = (var_s5_2 + 1) & 0xFF;
                    } while (var_s5_2 < 7);
                }
                var_s0 = (var_s0 + 1) & 0xFF;
                if (var_s0 < 2) {
                    goto loop_12;
                }
                var_s6 = (var_s6 + 1) & 0xFF;
            } while (var_s6 < 0xA);
        }
        var_s2_2 = 0;
        do {
            var_s3_2 = 0;
loop_24:
            temp_s5_2 = temp_v0 + ((var_s2_2 & 0xFF) * 4) + ((var_s3_2 & 0xFF) << 5);
            func_001EF900(M2C_FIELD(temp_s5_2, void **, 0x62C), arg0);
            func_001EF900(M2C_FIELD(temp_s5_2, void **, 0x6EC), 0);
            var_s3_2 = (var_s3_2 + 1) & 0xFF;
            if (var_s3_2 < 6) {
                goto loop_24;
            }
            var_s2_2 = (var_s2_2 + 1) & 0xFF;
        } while (var_s2_2 < 8);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x5FC), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x600), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x604), arg0);
    }
}
