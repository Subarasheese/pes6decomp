/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001EE5D0(s32, f32 *);                  /* extern */
M2C_UNK func_001EEE60(s32, s8 *);                   /* extern */
M2C_UNK func_001EF860(s32, f32 *);                  /* extern */
s32 func_00B8F8D0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00B8F910(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90140(s32, s32);                    /* extern */
M2C_UNK func_00B92B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00B92D20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00B92D80(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_00CEEC30[];

void func_00C01CC0(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp60;
    f32 sp64;
    s8 sp7C;
    s8 sp7D;
    s8 sp7E;
    s8 sp7F;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s2 = arg2 & 0xFFFF;
    if ((temp_s2 >= 0xDD) && (temp_s2 < 0xFE)) {
        temp_v0 = func_00B8F8D0(arg1, 1);
        temp_s3 = temp_s2 + 0x4EC1;
        func_00B90140(temp_v0, temp_s3);
        func_001EE5D0(temp_v0, &sp60);
        temp_v0_2 = func_00B8F8D0(arg1, 0);
        func_00B90140(temp_v0_2, temp_s3);
        sp7F = 0x80;
        sp7C = 0;
        sp7D = 0;
        sp7E = 0;
        func_001EEE60(temp_v0_2, &sp7C);
        sp60 += 3.0f;
        sp64 += 3.0f;
        func_001EF860(temp_v0_2, &sp60);
        func_00B92B80(arg0, 0, 0);
        func_00B8F910(arg1, 1);
        return;
    }
    if ((*(s32 *)D_00CEEC30) == 0) {
        func_00B92D80(arg0, 0, 1);
    } else {
        func_00B92D20(arg0, 0, 1);
        (*(s32 *)D_00CEEC30) = 0;
    }
    func_00B92B80(arg0, 0, 1);
    func_00B8F910(arg1, 0);
}
