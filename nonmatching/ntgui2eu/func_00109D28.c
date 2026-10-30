/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00114E2C(void);
M2C_UNK func_00107678();                            /* extern */
M2C_UNK func_00109FB0(M2C_UNK);                     /* extern */
M2C_UNK func_0010C5F8(s32);                         /* extern */
M2C_UNK func_0010F9A4(M2C_UNK *);                   /* extern */
M2C_UNK func_001152F8(void *, s32);                 /* extern */
extern char D_002BA0A8[];
extern char D_002BA0C0[];
extern char D_0044A488[];

void func_00109D28(s32 arg0) {
    M2C_UNK (*temp_a2)(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_v0)(M2C_UNK, M2C_UNK);
    M2C_UNK *var_v0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0_2;
    void *var_v0_3;

    if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C5C) != 0) {
        var_v0 = ((void *)D_002BA0C0);
        if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) == 0) {
            if ((*(s32 *)D_002BA0A8) == -1) {
                func_00109FB0(-1);
            }
            goto block_6;
        }
        goto block_5;
    }
    var_v0 = ((void *)D_002BA0C0) - 0x5F40;
block_5:
    if (M2C_FIELD(var_v0, s32 *, 0x5C60) > 0) {
block_6:
        temp_a1 = *(s32 *)0x44A480;
        temp_s0 = (arg0 & ((((0xFF9FFF9F << 0x10) | 0xFF9F) << 0x10) | 0xFF9F)) | ((arg0 & ((((0x200020 << 0x10) | 0x20) << 0x10) | 0x20)) * 2) | ((u64) (arg0 & ((((0x400040 << 0x10) | 0x40) << 0x10) | 0x40)) >> 1);
        temp_s2 = (temp_a1 >= 0) ? temp_a1 : 0;
        temp_v1 = ((void *)D_002BA0C0) - 0x5F40;
        if (func_00114E2C() == 0) {
            func_0010C5F8(temp_s0);
            temp_v1_2 = ((void *)D_002BA0C0) - 0x5F40;
            var_v0_2 = ((void *)D_002BA0C0) - 0x5F40;
            if (M2C_FIELD(temp_v1_2, s32 *, 0x5C64) == 0) {
                temp_a2 = M2C_FIELD(temp_v1_2, M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x5C68);
                M2C_FIELD(temp_v1_2, s32 *, 0x5C64) = 1;
                if (temp_a2 != NULL) {
                    temp_a2(1, 0, temp_a2);
                }
                func_00107678();
                goto block_16;
            }
        } else {
            var_v0_3 = ((void *)D_002BA0C0) - 0x5F40;
            if (M2C_FIELD(temp_v1, s32 *, 0x5C64) != 0) {
                temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x5C68);
                M2C_FIELD(temp_v1, s32 *, 0x5C64) = 0;
                if (temp_v0 != NULL) {
                    temp_v0(2, 0);
                }
                var_v0_3 = ((void *)D_002BA0C0) - 0x5F40;
            }
            func_001152F8((M2C_FIELD(var_v0_3, s32 *, 0x5BD0) * 0xE90) + (var_v0_3 + 0x470), temp_s0);
block_16:
            var_v0_2 = ((void *)D_002BA0C0) - 0x5F40;
        }
        if (M2C_FIELD(var_v0_2, s32 *, 0x404) == 0) {
            if (temp_s2 != 0) {
                func_0010F9A4(((void *)D_0044A488));
            }
        }
    }
}
