/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00BF5660(M2C_UNK *, u16);              /* extern */
extern char D_00CE6738[];
extern char D_00CE6750[];
extern char D_00CE8E20[];
extern char D_00CEA28C[];

void func_00BF3C40(s32 arg0) {
    M2C_UNK *var_s2;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_v0;
    u16 *var_s1;
    u16 temp_s4;
    u32 temp_a0;
    void *temp_s0;

    temp_s0 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    if ((M2C_FIELD(temp_s0, u32 *, 0x1460) != (*(u32 *)D_00CE6738)) && ((*(u32 *)D_00CE6738) != 0)) {
        M2C_FIELD(temp_s0, u32 *, 0x1460) = (u32) (*(u32 *)D_00CE6738);
        M2C_FIELD(temp_s0, s32 *, 0x1458) = (s32) (((*(u32 *)D_00CE6738) / 14) + ((u32) (*(u32 *)D_00CE6738) >> 0x1F));
        if (((s32) M2C_FIELD(temp_s0, u32 *, 0x1460) % 14) > 0) {
            M2C_FIELD(temp_s0, s32 *, 0x1458) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1458) + 1);
        }
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1458) - 1;
        if (temp_v1 < M2C_FIELD(temp_s0, s32 *, 0x1454)) {
            M2C_FIELD(temp_s0, s32 *, 0x1454) = temp_v1;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x1454) != (M2C_FIELD(temp_s0, s32 *, 0x1458) - 1)) {
            var_v0 = 0xE;
            goto block_13;
        }
        temp_a0 = M2C_FIELD(temp_s0, u32 *, 0x1460);
        if (((s32) temp_a0 > 0) && (((s32) temp_a0 % 14) == 0)) {
            M2C_FIELD(temp_s0, s32 *, 0x144C) = 0xE;
        } else {
            var_v0 = (s32) temp_a0 % 14;
block_13:
            M2C_FIELD(temp_s0, s32 *, 0x144C) = var_v0;
        }
        temp_s4 = M2C_FIELD(temp_s0, u16 *, 0x1464);
        var_s3 = 0;
        var_s2 = ((void *)D_00CEA28C);
        var_s1 = ((void *)D_00CE6750) + (M2C_FIELD(temp_s0, s32 *, 0x1454) * 0x1C);
        do {
            M2C_FIELD(var_s2, u16 *, 0x80) = (u16) *var_s1;
            func_00BF5660(var_s2, temp_s4);
            if (M2C_FIELD(var_s2, u16 *, 0x80) != 0) {
                M2C_FIELD(var_s2, s32 *, 0x7C) = 1;
            } else {
                M2C_FIELD(var_s2, s32 *, 0x7C) = 0;
            }
            var_s3 += 1;
            var_s2 += 0x88;
            var_s1 += 2;
        } while (var_s3 < 0xE);
        temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x144C);
        if (M2C_FIELD(temp_s0, s32 *, 0x1444) >= temp_v1_2) {
            temp_a0_2 = temp_v1_2 - 1;
            M2C_FIELD(temp_s0, s32 *, 0x1444) = temp_a0_2;
            if (temp_a0_2 < M2C_FIELD(temp_s0, s32 *, 0x1448)) {
                if (M2C_FIELD(temp_s0, s32 *, 0x144C) >= M2C_FIELD(temp_s0, s32 *, 0x1450)) {
                    M2C_FIELD(temp_s0, s32 *, 0x1448) = temp_a0_2;
                } else {
                    M2C_FIELD(temp_s0, s32 *, 0x1448) = 0;
                }
            }
        }
        func_001C4730(((void *)D_00CEA28C) + 0x13A8, ((void *)D_00CEA28C) + (M2C_FIELD(((void *)D_00CEA28C), s32 *, 0x1444) * 0x88), 0x88);
    }
}
