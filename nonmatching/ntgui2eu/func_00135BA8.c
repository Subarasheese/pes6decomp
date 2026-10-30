/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BC200[];
extern char D_005BC204[];
extern char D_005BC208[];
extern char D_005BC218[];
extern M2C_UNK (*D_011D7470)(M2C_UNK *, M2C_UNK);

void func_00135BA8(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;

    (*(s32 *)D_005BC204) = M2C_FIELD(((void *)D_005BC200), s32 *, 0);
    if (D_011D7470 != NULL) {
        D_011D7470(((void *)D_005BC200), D_011D7470);
        var_v0 = M2C_FIELD(((void *)D_005BC200), s32 *, 0);
    } else {
        M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00) = 0;
        var_v0 = M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00);
    }
    if (var_v0 & 0x1000) {
        var_v1 = M2C_FIELD(((void *)D_005BC218), s32 *, 0) + 1;
    } else {
        var_v1 = 0;
    }
    temp_a1 = ((void *)D_005BC218) - 0x3DE8;
    M2C_FIELD(((void *)D_005BC218), s32 *, 0) = var_v1;
    if (M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00) & 0x4000) {
        var_v1_2 = M2C_FIELD(temp_a1, s32 *, 4) + 1;
    } else {
        var_v1_2 = 0;
    }
    temp_a2 = ((void *)D_005BC218) - 0x3DE8;
    M2C_FIELD(temp_a1, s32 *, 4) = var_v1_2;
    if (M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00) & 0x8000) {
        var_v1_3 = M2C_FIELD(temp_a2, s32 *, 8) + 1;
    } else {
        var_v1_3 = 0;
    }
    temp_a1_2 = ((void *)D_005BC218) - 0x3DE8;
    M2C_FIELD(temp_a2, s32 *, 8) = var_v1_3;
    if (M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00) & 0x2000) {
        var_v1_4 = M2C_FIELD(temp_a1_2, s32 *, 0xC) + 1;
    } else {
        var_v1_4 = 0;
    }
    temp_a2_2 = ((void *)D_005BC218) - 0x3DE8;
    M2C_FIELD(temp_a1_2, s32 *, 0xC) = var_v1_4;
    if (M2C_FIELD(((void *)D_005BC200), s32 *, -0x3E00) & 0x20) {
        var_v1_5 = M2C_FIELD(temp_a2_2, s32 *, 0x10) + 1;
    } else {
        var_v1_5 = 0;
    }
    temp_a0 = ((void *)D_005BC218) - 0x3DE8;
    M2C_FIELD(temp_a2_2, s32 *, 0x10) = var_v1_5;
    if ((u32) M2C_FIELD(((void *)D_005BC218), u32 *, -0x3DE8) >= 0x14U) {
        (*(s32 *)D_005BC208) = 0x1000;
        return;
    }
    if ((u32) M2C_FIELD(temp_a0, u32 *, 4) < 0x14U) {
        if ((u32) M2C_FIELD(temp_a0, u32 *, 8) < 0x14U) {
            if ((u32) M2C_FIELD(temp_a0, u32 *, 0xC) < 0x14U) {
                if ((u32) M2C_FIELD(temp_a0, u32 *, 0x10) >= 0x14U) {
                    (*(s32 *)D_005BC208) = 0x20;
                    return;
                }
                *(s32 *)0x5BC208 = 0;
                return;
            }
            (*(s32 *)D_005BC208) = 0x2000;
            return;
        }
        (*(s32 *)D_005BC208) = 0x8000;
        return;
    }
    (*(s32 *)D_005BC208) = 0x4000;
}
