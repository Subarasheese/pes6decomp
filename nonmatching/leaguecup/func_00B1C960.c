/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CA390(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008CA810(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_00972040(s32, s32, s32);               /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B1DD50();                                /* extern */
void *func_00B1DE00();                              /* extern */

void func_00B1C960(s32 arg0) {
    s32 temp_s2;
    s32 temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = func_00B1DE00();
    if ((temp_v0 != NULL) && (func_00972040(M2C_FIELD(temp_v0, s32 *, 0x88), ((s32) (arg0 & 0xFF) % 8) & 0xFF, ((u32) (arg0 & 0xFF) >> 3) & 0xFF), temp_s3 = func_00B1DD50() & 0xFFFF, temp_v0_2 = func_00B1DE00(), (temp_v0_2 != NULL))) {
        temp_s2 = temp_s3 & 0xFFFF;
        if (temp_s2 == 0xFFFF) {
            temp_v0_3 = func_00B1DE00();
            if (temp_v0_3 != NULL) {
                func_009737C0(M2C_FIELD(temp_v0_3, s32 *, 0x1C), 0);
                func_00956A80(M2C_FIELD(temp_v0_3, s32 *, 0x2C), 0);
                func_008CA390(M2C_FIELD(temp_v0_3, s32 *, 0x30), 0, 0);
                func_001D7D60(M2C_FIELD(temp_v0_3, s32 *, 0xB8), 1);
            }
        } else {
            temp_v0_4 = func_00B1DE00();
            if (temp_v0_4 != NULL) {
                func_009737C0(M2C_FIELD(temp_v0_4, s32 *, 0x1C), 1);
                func_00956A80(M2C_FIELD(temp_v0_4, s32 *, 0x2C), 1);
                func_008CA390(M2C_FIELD(temp_v0_4, s32 *, 0x30), 0, 1);
                func_001D7D60(M2C_FIELD(temp_v0_4, s32 *, 0xB8), 0);
            }
            func_009737E0(M2C_FIELD(temp_v0_2, s32 *, 0x1C), 0, func_0095C4A0(temp_s3));
            func_00956A90(M2C_FIELD(temp_v0_2, s32 *, 0x2C), 4, temp_s2, 0);
            func_008CA810(M2C_FIELD(temp_v0_2, s32 *, 0x30), temp_s3, 0);
        }
    }
}
