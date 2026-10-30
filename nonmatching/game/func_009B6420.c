/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AFD20(void);
extern void func_0027A770(void);
M2C_UNK func_009A7540();                            /* extern */
M2C_UNK func_009B6630(M2C_UNK, u16, u16, M2C_UNK);  /* extern */
extern char D_00CBAA00[];
extern char D_00CBAA02[];
extern char D_00CBAA04[];
extern char D_00CBAA14[];
extern char D_00CBAA18[];

void func_009B6420(s32 arg0) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_s0;
    s32 var_a0;
    s32 var_v1;
    u16 var_v1_2;

    if ((s32) (*(u16 *)D_00CBAA02) < (s32) (*(u16 *)D_00CBAA04)) {
        var_a0 = arg0 & 0xFFFF;
        if (((s32) (*(u16 *)D_00CBAA02) < var_a0) && (var_a0 < (s32) (*(u16 *)D_00CBAA04))) {
            return;
        }
        goto block_6;
    }
    var_a0 = arg0 & 0xFFFF;
    if ((var_a0 >= (s32) (*(u16 *)D_00CBAA04)) && ((s32) (*(u16 *)D_00CBAA02) >= var_a0)) {
block_6:
        if (!((*(f32 *)D_00CBAA14) >= 2.1474836e9f)) {
            var_v1 = (s32) (*(f32 *)D_00CBAA14);
        } else {
            var_v1 = (s32) ((*(f32 *)D_00CBAA14) - 2.1474836e9f) | 0x80000000;
        }
        temp_s0 = var_v1 & 0xFFFF & 0xFFFF;
        if (var_a0 == (*(u16 *)D_00CBAA04)) {
            if (var_a0 != 0x12B) {
                (*(u16 *)D_00CBAA00) = var_a0 + 1;
            } else {
                (*(u16 *)D_00CBAA00) = 0;
            }
            if ((s32) (*(u16 *)D_00CBAA00) >= 0) {
                var_f0 = (f32) (*(u16 *)D_00CBAA00);
            } else {
                var_f0 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA00) >> 1) | ((*(u16 *)D_00CBAA00) & 1));
            }
            (*(f32 *)D_00CBAA14) = var_f0;
            func_009B6630(0, (*(u16 *)D_00CBAA04), (*(u16 *)D_00CBAA02), 0xBF800000);
        } else {
            if (var_a0 != 0) {
                var_v1_2 = var_a0 - 1;
            } else {
                var_v1_2 = 0x12B;
            }
            (*(u16 *)D_00CBAA00) = var_v1_2;
            if ((s32) (*(u16 *)D_00CBAA00) >= 0) {
                var_f0_2 = (f32) (*(u16 *)D_00CBAA00);
            } else {
                var_f0_2 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA00) >> 1) | ((*(u16 *)D_00CBAA00) & 1));
            }
            (*(f32 *)D_00CBAA14) = var_f0_2;
            func_009B6630(0, (*(u16 *)D_00CBAA04), (*(u16 *)D_00CBAA02), 0x3F800000);
        }
        if (temp_s0 >= 0) {
            var_f0_3 = (f32) temp_s0;
        } else {
            var_f0_3 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
        }
        (*(f32 *)D_00CBAA18) = var_f0_3;
        func_009A7540();
        func_001AFD20();
        func_0027A770();
    }
}
