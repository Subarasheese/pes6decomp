/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00591A90[];
extern char D_00591E00[];
extern char Pes6MatchSquads[];

s32 func_00B81050(void *arg0) {
    s32 temp_a6;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s3;
    s8 var_t8;
    u8 temp_a2;
    u8 var_s1;
    u8 var_t9;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a6_2;
    void *temp_s3_2;
    void *temp_s4_2;
    void *var_t3;

    func_001C48E8(0, 0xC);
    var_s1 = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    do {
        temp_a6 = var_s1 & 0xFF;
        temp_a4 = ((void *)D_00591E00) + temp_a6;
        temp_a2 = M2C_FIELD(temp_a4, u8 *, 0xF6);
        if ((s32) temp_a2 > 0) {
            var_t9 = M2C_FIELD(temp_a4, u8 *, 0xF8);
            if ((s32) var_t9 < (temp_a2 + var_t9)) {
                temp_a6_2 = ((void *)D_00591A90) + (temp_a6 * 0x8B);
                var_t3 = temp_a6_2 + (var_t9 * 8);
                temp_a4_2 = ((void *)Pes6MatchSquads) + (temp_a6 * 0x6900);
                do {
                    var_s3 = M2C_FIELD((temp_a4_2 + (M2C_FIELD(var_t3, u8 *, 0x52) * 0x348)), u8 *, 0x89) & 7;
                    temp_s2 = M2C_FIELD((temp_a4_2 + (M2C_FIELD(var_t3, u8 *, 0x53) * 0x348)), u8 *, 0x89) & 7;
                    if (temp_s2 < var_s3) {
                        var_t8 = 1;
                    } else {
                        var_s3 = temp_s2;
                        var_t8 = 0;
                    }
                    temp_s2_2 = var_s3 & 0xFF;
                    temp_s3 = M2C_FIELD(arg0, s32 *, 4);
                    temp_s4 = ((((temp_s2_2 + 3) / 3) + ((u32) (temp_s2_2 + 3) >> 0x1F)) - 1) & 0xFF;
                    if ((temp_s3 != -1) && (temp_s3 >= (temp_s4 & 0xFF))) {
                        temp_s3_2 = temp_a6_2 + ((var_t9 & 0xFF) * 8);
                        M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(temp_s3_2, u8 *, 0x53);
                        M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(temp_s3_2, u8 *, 0x52);
                        M2C_FIELD(arg0, u8 *, 0xA) = var_s1;
                    } else {
                        temp_s4_2 = temp_a6_2 + ((var_t9 & 0xFF) * 8);
                        M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0);
                        M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 1);
                        M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 2);
                        M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(temp_s4_2, u8 *, 0x53);
                        M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(temp_s4_2, u8 *, 0x52);
                        M2C_FIELD(arg0, u8 *, 2) = var_s1;
                        M2C_FIELD(arg0, s8 *, 3) = var_t8;
                        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_s4 & 0xFF);
                    }
                    var_t9 += 1;
                    var_t3 += 8;
                } while ((s32) var_t9 < (M2C_FIELD(temp_a4, u8 *, 0xF6) + M2C_FIELD(temp_a4, u8 *, 0xF8)));
            }
        }
        var_s1 = (!(var_s1 & 0xFF) ? 1 : 2) & 0xFF;
    } while ((s32) var_s1 < 2);
    return 0;
}
