/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A1E0(void);
extern s32 func_002F3820(s32, s32);
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
s32 func_009BD2B0();                                /* extern */
M2C_UNK func_009BD930(M2C_UNK);                     /* extern */
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */
M2C_UNK func_009BDAD0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00B075D0(M2C_UNK);                     /* extern */
M2C_UNK func_00B07830(u16);                         /* extern */
M2C_UNK func_00B08070();                            /* extern */
extern u8 D_003EADE8;

u8 func_00B09A70(void) {
    f32 sp30;
    f32 sp34;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x34);
        if (temp_a0 != 0) {
            func_002F2ED0(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x44);
        if (temp_a0_2 != 0) {
            func_002F2ED0(temp_a0_2);
        }
        if (M2C_FIELD(temp_v0, s32 *, 0x2C) == 1) {
            if ((D_003EADE8 == 0) && (func_009BD2B0() == 1)) {
                D_003EADE8 = 1;
            }
            if (func_002F3850(M2C_FIELD(temp_v0, s32 *, 0x34)) != 4) {
                func_002F3820(M2C_FIELD(temp_v0, s32 *, 0x34), (s32) &sp30);
                sp30 += 37.0f;
                sp34 += 46.0f;
                func_009BDAD0(&sp30, 0);
                func_009BD930(0);
            }
            if ((D_003EADE8 == 0) && (func_002F3850(M2C_FIELD(temp_v0, s32 *, 0x34)) != 4)) {
                goto block_31;
            }
            func_009BD9B0(1);
            goto block_18;
        }
block_18:
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x2C);
        switch (temp_v1) {                          /* irregular */
        case 3:
            if (func_002F3850(M2C_FIELD(temp_v0, s32 *, 0x34)) == 4) {
                func_00B07830(M2C_FIELD(temp_v0, u16 *, 0x488));
            }
        default:
        case 5:
            if (M2C_FIELD(temp_v0, s16 *, 0x480) != 0) {
                func_00949340(temp_v0 + 0x480, 0, M2C_FIELD(temp_v0, s16 *, 0x47E));
                M2C_FIELD(temp_v0, s16 *, 0x482) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x480) * 0);
                func_00B08070();
            }
            goto block_31;
        case 6:
            func_00B075D0(0);
            return M2C_FIELD(temp_v0, u8 *, 0x48C);
        }
    } else {
block_31:
        return 0U;
    }
}
