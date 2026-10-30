/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022E5E0(s32);
extern void *D_003EADA4;

void func_00AE28A0(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_s2;
    void *temp_s3;

    temp_s2 = D_003EADA4;
    var_s4 = 0;
    if (temp_s2 != NULL) {
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_s2, u8 *, 0x3DC4) > 0) {
            do {
                var_v0 = func_0022E5E0(0);
                temp_s1 = var_s5 & 0xFF;
                temp_s3 = temp_s2 + (temp_s1 * 0x314);
loop_4:
                if (((((u64) ((s64) M2C_FIELD(var_v0, u8 *, 1) << 0x38) >> 0x3A) + 1) != M2C_FIELD(temp_s3, u8 *, 0xFD6)) && ((var_s4 & 0xFF) < (s32) M2C_FIELD(temp_s2, u8 *, 0x3DC4))) {
                    var_s4 = (var_s4 + 1) & 0xFF;
                    var_v0 = func_0022E5E0(var_s4);
                    goto loop_4;
                }
                var_s4 = 0;
                temp_a1 = temp_s2 + (temp_s1 * 0x314);
                var_v1 = 0;
                M2C_FIELD(temp_a1, u8 *, 0xFA0) = (u8) M2C_FIELD(var_v0, u8 *, 0xF54);
                M2C_FIELD(temp_a1, u8 *, 0xFA1) = (u8) M2C_FIELD(var_v0, u8 *, 0xF55);
                M2C_FIELD(temp_a1, u8 *, 0xFA2) = (u8) M2C_FIELD(var_v0, u8 *, 0xF56);
                M2C_FIELD(temp_a1, u8 *, 0xFA3) = (u8) M2C_FIELD(var_v0, u8 *, 0xF57);
                M2C_FIELD(temp_a1, u8 *, 0xFA4) = (u8) M2C_FIELD(var_v0, u8 *, 0xF58);
                M2C_FIELD(temp_a1, u8 *, 0xFA5) = (u8) M2C_FIELD(var_v0, u8 *, 0xF59);
loop_7:
                temp_a0 = (var_v1 & 0xFF) * 8;
                temp_a3 = var_v0 + temp_a0;
                temp_a2 = temp_s3 + temp_a0;
                temp_a1_2 = M2C_FIELD(temp_a3, u8 *, 0xF2B);
                var_v1 = (var_v1 + 1) & 0xFF;
                M2C_FIELD(temp_a2, u8 *, 0xFA6) = temp_a1_2;
                M2C_FIELD(temp_a2, u8 *, 0xFA7) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF2A);
                M2C_FIELD(temp_a2, u8 *, 0xFA8) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF29);
                M2C_FIELD(temp_a2, u8 *, 0xFA9) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF28);
                M2C_FIELD(temp_a2, u8 *, 0xFAA) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF27);
                M2C_FIELD(temp_a2, u8 *, 0xFAB) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF26);
                M2C_FIELD(temp_a2, u8 *, 0xFAC) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF25);
                M2C_FIELD(temp_a2, u8 *, 0xFAD) = (u8) M2C_FIELD(temp_a3, u8 *, 0xF24);
                if (var_v1 < 6) {
                    goto loop_7;
                }
                var_s5 = (var_s5 + 1) & 0xFF;
            } while (var_s5 < (s32) M2C_FIELD(temp_s2, u8 *, 0x3DC4));
        }
    }
}
