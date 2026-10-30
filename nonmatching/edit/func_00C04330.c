/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C6158(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_00CEFBD0[];
extern M2C_UNK func_00C04700;

void func_00C04330(void) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a4;
    s16 temp_a4_2;
    s16 temp_a5;
    s16 temp_a5_3;
    s16 temp_a6;
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    u16 *temp_v1;
    u16 *temp_v1_2;
    u16 *temp_v1_3;
    void *temp_a5_2;
    void *var_v0;
    void *var_v1_2;

    func_001C48E8(((void *)D_00CEFBD0), 0, 0x23EC);
    var_v1 = 1;
    var_v0 = ((void *)D_00CEFBD0) + 2;
    do {
        M2C_FIELD(var_v0, s16 *, 0) = var_v1;
        temp_a6 = var_v1 + 2;
        temp_a5 = var_v1 + 3;
        temp_a4 = var_v1 + 4;
        temp_a3 = var_v1 + 5;
        temp_a2 = var_v1 + 6;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        temp_a1 = var_v1 + 7;
        M2C_FIELD(var_v0, s16 *, 2) = (s16) (var_v1 + 1);
        var_v1 += 8;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 4) = temp_a6;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 6) = temp_a5;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 8) = temp_a4;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 0xA) = temp_a3;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 0xC) = temp_a2;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v0, s16 *, 0xE) = temp_a1;
        var_v0 += 0x10;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    } while (var_v1 < 0x1136);
    temp_a5_2 = ((void *)D_00CEFBD0) + (var_v1 * 2);
    M2C_FIELD(temp_a5_2, s16 *, 0) = var_v1;
    var_v0_2 = 0x1155;
    var_v1_2 = ((void *)D_00CEFBD0) + 0x22AA;
    M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    M2C_FIELD(temp_a5_2, s16 *, 2) = (s16) (var_v1 + 1);
    M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    M2C_FIELD(temp_a5_2, s16 *, 4) = (s16) (var_v1 + 2);
    M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    M2C_FIELD(temp_a5_2, s16 *, 6) = (s16) (var_v1 + 3);
    M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    M2C_FIELD(temp_a5_2, s16 *, 8) = (s16) (var_v1 + 4);
    M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    do {
        M2C_FIELD(var_v1_2, s16 *, 0) = var_v0_2;
        temp_a5_3 = var_v0_2 + 2;
        temp_a4_2 = var_v0_2 + 3;
        temp_a3_2 = var_v0_2 + 4;
        temp_a2_2 = var_v0_2 + 5;
        temp_a1_2 = var_v0_2 + 6;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        temp_a0 = var_v0_2 + 7;
        M2C_FIELD(var_v1_2, s16 *, 2) = (s16) (var_v0_2 + 1);
        var_v0_2 += 8;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 4) = temp_a5_3;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 6) = temp_a4_2;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 8) = temp_a3_2;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 0xA) = temp_a2_2;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 0xC) = temp_a1_2;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
        M2C_FIELD(var_v1_2, s16 *, 0xE) = temp_a0;
        var_v1_2 += 0x10;
        M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) + 1);
    } while (var_v0_2 < 0x11F5);
    var_s3 = 0;
    do {
        var_s2 = 0;
loop_6:
        temp_v0 = Pes6Team_GetPlayerId(var_s3, var_s2, 0) & 0xFFFF;
        if ((temp_v0 != 0) && (temp_v0 < 0x11F5)) {
            temp_v1 = ((void *)D_00CEFBD0) + (temp_v0 * 2);
            if (*temp_v1 != 0) {
                *temp_v1 = 0;
                M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) - 1);
            }
        }
        var_s2 = (var_s2 + 1) & 0xFF;
        if (var_s2 < 0x17) {
            goto loop_6;
        }
        var_s3 = (var_s3 + 1) & 0xFFFF;
    } while (var_s3 < 0x40);
    var_s3_2 = 0x40;
    do {
        var_s2_2 = 0;
loop_14:
        temp_v0_2 = Pes6Team_GetPlayerId(var_s3_2, var_s2_2, 1) & 0xFFFF;
        if ((temp_v0_2 != 0) && (temp_v0_2 < 0x11F5)) {
            temp_v1_2 = ((void *)D_00CEFBD0) + (temp_v0_2 * 2);
            if (*temp_v1_2 != 0) {
                *temp_v1_2 = 0;
                M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) - 1);
            }
        }
        var_s2_2 = (var_s2_2 + 1) & 0xFF;
        if (var_s2_2 < 0x20) {
            goto loop_14;
        }
        var_s3_2 = (var_s3_2 + 1) & 0xFFFF;
    } while (var_s3_2 < 0xCC);
    var_s3_3 = 0x113;
    do {
        var_s2_3 = 0;
loop_22:
        temp_v0_3 = Pes6Team_GetPlayerId(var_s3_3, var_s2_3, 0) & 0xFFFF;
        if ((temp_v0_3 != 0) && (temp_v0_3 < 0x11F5)) {
            temp_v1_3 = ((void *)D_00CEFBD0) + (temp_v0_3 * 2);
            if (*temp_v1_3 != 0) {
                *temp_v1_3 = 0;
                M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) = (u16) (M2C_FIELD(((void *)D_00CEFBD0), u16 *, 0x23EA) - 1);
            }
        }
        var_s2_3 = (var_s2_3 + 1) & 0xFF;
        if (var_s2_3 < 0x20) {
            goto loop_22;
        }
        var_s3_3 = (var_s3_3 + 1) & 0xFFFF;
    } while (var_s3_3 < 0x118);
    func_001C6158(((void *)D_00CEFBD0), 0x11F5, 2, &func_00C04700);
}
