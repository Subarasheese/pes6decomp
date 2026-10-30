/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0();                                /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B32D0(u16, s32, M2C_UNK);               /* extern */
s16 func_00BBB990(u16, M2C_UNK);                    /* extern */
s16 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E7C[];

void func_00A515A0(void *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 var_a0;
    s16 var_a0_2;
    s16 var_a0_3;
    s16 var_s0_2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v1;
    u16 temp_s0;
    u16 var_s0;

    if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
        if ((*(s32 *)D_00591E7C) == 0) {
            if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x200)) {
                var_v1 = M2C_FIELD(arg0, s16 *, 0x1CE);
                if (var_v1 > 0) {

                } else {
                    var_v1 = -var_v1;
                }
                if (var_v1 < 0x41) {
                    M2C_FIELD(arg0, s16 *, 0x1CE) = 0;
                }
                var_v1_2 = M2C_FIELD(arg0, s16 *, 0x1D0);
                if (var_v1_2 > 0) {

                } else {
                    var_v1_2 = -var_v1_2;
                }
                if (var_v1_2 < 0x41) {
                    M2C_FIELD(arg0, s16 *, 0x1D0) = 0;
                }
                temp_a0 = M2C_FIELD(arg0, s16 *, 0x1CE);
                M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (((temp_a0 * 9) / 10) + ((u32) (temp_a0 * 9) >> 0x1F));
                temp_a0_2 = M2C_FIELD(arg0, s16 *, 0x1D0);
                M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (((temp_a0_2 * 9) / 10) + ((u32) (temp_a0_2 * 9) >> 0x1F));
            }
        } else {
            var_s0 = func_0099DFF0() & 0xFFFF;
            temp_v1 = func_009B30B0(var_s0, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
            if (temp_v1 >= 9) {
                if (temp_v1 >= 0x70) {
                    var_s0 = (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF;
                }
            } else {
                var_s0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
            }
            if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x200)) {
                var_a0 = M2C_FIELD(arg0, s16 *, 0x1CE);
                if (var_a0 > 0) {

                } else {
                    var_a0 = -var_a0;
                }
                if (var_a0 < 0x41) {
                    M2C_FIELD(arg0, s16 *, 0x1CE) = 0;
                }
                var_a0_2 = M2C_FIELD(arg0, s16 *, 0x1D0);
                if (var_a0_2 > 0) {

                } else {
                    var_a0_2 = -var_a0_2;
                }
                if (var_a0_2 < 0x41) {
                    M2C_FIELD(arg0, s16 *, 0x1D0) = 0;
                }
                temp_a1 = M2C_FIELD(arg0, s16 *, 0x1CE);
                M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (((temp_a1 * 9) / 10) + ((u32) (temp_a1 * 9) >> 0x1F));
                temp_a1_2 = M2C_FIELD(arg0, s16 *, 0x1D0);
                M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (((temp_a1_2 * 9) / 10) + ((u32) (temp_a1_2 * 9) >> 0x1F));
                if (((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 0x120U) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1000) && (temp_v1 < 0x61) && (temp_v1 >= 0x20)) {
                    temp_s0 = func_009B32D0(var_s0, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0x5000) & 0xFFFF;
                    var_s0_2 = -func_00BBB990(temp_s0, 0x60);
                    var_a0_3 = -func_00BBB9C0(temp_s0, 0x60);
                    goto block_31;
                }
            } else {
                var_s0_2 = func_00BBB990(var_s0, 0x200);
                temp_v0 = func_00BBB9C0(var_s0, 0x200);
                M2C_FIELD(arg0, s16 *, 0x1CE) = var_s0_2;
                var_a0_3 = temp_v0;
                M2C_FIELD(arg0, s16 *, 0x1D0) = var_a0_3;
block_31:
                M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) + (f32) var_s0_2);
                M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) + (f32) var_a0_3);
            }
        }
    }
}
