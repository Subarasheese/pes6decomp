/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern u32 func_00989410(void);
s32 func_00230410();                                /* extern */
M2C_UNK func_00971290(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009712F0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_0097FA10(s32, M2C_UNK);                /* extern */
M2C_UNK func_00987510(s64);                         /* extern */
M2C_UNK func_00987840(s64);                         /* extern */
M2C_UNK func_00987CE0(s32);                         /* extern */

void func_00986EB0(s32 arg0, s64 arg1) {
    f32 var_f1;
    f32 var_f1_2;
    u32 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    void *temp_v0_2;
    void *temp_v0_4;

    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s8 *, 0x466) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x467) = 0;
        if (M2C_FIELD(temp_v0, s32 *, 0x48C) != 2) {
            func_00987CE0(M2C_FIELD(temp_v0, s32 *, 0x488));
        } else if (func_00230410() != 1) {
            func_009712F0(M2C_FIELD(temp_v0, s32 *, 0x490), 1, 0);
            func_00987510(arg1);
        } else {
            func_009712F0(M2C_FIELD(temp_v0, s32 *, 0x490), 1, 0);
            func_00987840(arg1);
        }
        switch (arg1) {                             /* irregular */
        case 0:
            temp_v0_2 = (arg0 & 0xFF) + temp_v0;
            temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x46A);
            if ((s32) temp_v0_3 < 0) {
                var_f1 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
            } else {
                var_f1 = (f32) temp_v0_3;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x250), 0, 8.0f / var_f1);
            func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x250), 0);
            if ((s32) M2C_FIELD(temp_v0_2, u8 *, 0x46A) >= 9) {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x250), 1U);
            } else {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x250), 0U);
            }
            if (M2C_FIELD(temp_v0_2, u8 *, 0x46A) != 0) {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x8C), 0);
            } else {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x8C), 1);
            }
            break;
        case 1:
            temp_v0_4 = (arg0 & 0xFF) + temp_v0;
            temp_v0_5 = M2C_FIELD(temp_v0_4, u8 *, 0x46E);
            if ((s32) temp_v0_5 < 0) {
                var_f1_2 = 2.0f * (f32) ((temp_v0_5 >> 1) | (temp_v0_5 & 1));
            } else {
                var_f1_2 = (f32) temp_v0_5;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x250), 0, 8.0f / var_f1_2);
            func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x250), 0);
            if ((s32) M2C_FIELD(temp_v0_4, u8 *, 0x46E) >= 9) {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x250), 1U);
            } else {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x250), 0U);
            }
            if (M2C_FIELD(temp_v0_4, u8 *, 0x46E) != 0) {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x8C), 0);
            } else {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x8C), 1);
            }
            break;
        }
        func_001D7D80(M2C_FIELD(temp_v0, void **, 8), (s16) ((s64) (arg1 << 0x30) >> 0x30));
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x473) > 0) {
            func_00971290(M2C_FIELD(temp_v0, s32 *, 0x490), 0, M2C_FIELD((((arg0 & 0xFF) * 4) + temp_v0), s32 *, 0x478));
        }
    }
}
