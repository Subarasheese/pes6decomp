/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EF900(s32, M2C_UNK);                /* extern */
s32 func_001F08B0(s32);                             /* extern */
M2C_UNK func_008CA390(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008CA810(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00956D80(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00971D00(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B1DC30();                                /* extern */
s32 func_00B1DCC0();                                /* extern */
s32 func_00B1DD00();                                /* extern */
s32 func_00B1DD50();                                /* extern */
s32 func_00B1DDD0();                                /* extern */
void *func_00B1DE00();                              /* extern */

void func_00B1C4B0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00B1DE00();
        if (temp_v0_2 != NULL) {
            func_001D7D60(M2C_FIELD(temp_v0_2, s32 *, 0x7C), 1);
            func_001EDAE0(M2C_FIELD(temp_v0_2, s32 *, 0x38), 1);
            func_00972020(M2C_FIELD(temp_v0_2, s32 *, 0x88), 1);
            if (func_00B1DDD0() != 0) {
                func_00971CE0(M2C_FIELD(temp_v0_2, s32 *, 0x80), 1);
            } else {
                func_00971CE0(M2C_FIELD(temp_v0_2, s32 *, 0x80), 0);
            }
            func_001D7D60(M2C_FIELD(temp_v0_2, s32 *, 0xB8), 0);
        }
        temp_s1 = (M2C_FIELD(temp_v0, s32 *, 0xB0) * 0x10) & 0xFF;
        temp_s0 = func_00B1DCC0() & 0xFF;
        func_00971D00(M2C_FIELD(temp_v0, s32 *, 0x80), 1, func_001F08B0(func_00B1DC30()));
        temp_s3 = temp_s1 & 0xFF;
        var_s5 = 0;
        do {
            temp_s1_2 = var_s5 & 0xFF;
            if ((temp_s3 + temp_s1_2) >= (temp_s0 & 0xFF)) {
                func_001EF900(M2C_FIELD((temp_v0 + (temp_s1_2 * 4)), s32 *, 0x3C), 0);
            } else {
                temp_v0_3 = temp_v0 + (temp_s1_2 * 4);
                func_00956D80(M2C_FIELD(temp_v0_3, s32 *, 0x3C), 4, temp_s3 + (temp_s1_2 + (func_00B1DD00() & 0xFFFF)), 0);
                func_001EF900(M2C_FIELD(temp_v0_3, s32 *, 0x3C), 1);
            }
            var_s5 = (var_s5 + 1) & 0xFF;
        } while (var_s5 < 0x10);
        temp_s3_2 = func_00B1DD50() & 0xFFFF;
        temp_v0_4 = func_00B1DE00();
        if (temp_v0_4 != NULL) {
            temp_s2 = temp_s3_2 & 0xFFFF;
            if (temp_s2 == 0xFFFF) {
                temp_v0_5 = func_00B1DE00();
                if (temp_v0_5 != NULL) {
                    func_009737C0(M2C_FIELD(temp_v0_5, s32 *, 0x1C), 0);
                    func_00956A80(M2C_FIELD(temp_v0_5, s32 *, 0x2C), 0);
                    func_008CA390(M2C_FIELD(temp_v0_5, s32 *, 0x30), 0, 0);
                    func_001D7D60(M2C_FIELD(temp_v0_5, s32 *, 0xB8), 1);
                }
            } else {
                temp_v0_6 = func_00B1DE00();
                if (temp_v0_6 != NULL) {
                    func_009737C0(M2C_FIELD(temp_v0_6, s32 *, 0x1C), 1);
                    func_00956A80(M2C_FIELD(temp_v0_6, s32 *, 0x2C), 1);
                    func_008CA390(M2C_FIELD(temp_v0_6, s32 *, 0x30), 0, 1);
                    func_001D7D60(M2C_FIELD(temp_v0_6, s32 *, 0xB8), 0);
                }
                func_009737E0(M2C_FIELD(temp_v0_4, s32 *, 0x1C), 0, func_0095C4A0(temp_s3_2));
                func_00956A90(M2C_FIELD(temp_v0_4, s32 *, 0x2C), 4, temp_s2, 0);
                func_008CA810(M2C_FIELD(temp_v0_4, s32 *, 0x30), temp_s3_2, 0);
            }
        }
    }
}
