/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00BA48F0(void);
s32 func_00BBB8C0(u8);                              /* extern */
M2C_UNK func_00BD3B80(void **, M2C_UNK);            /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
extern char D_00591BE4[];

void func_00BA6160(void **arg0) {
    s32 var_a1;
    s8 temp_v0;
    u8 var_s1;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (12185.0f - (f32) func_00BBB8C0(0xA00U));
    temp_v1 = *arg0;
    if (M2C_FIELD(temp_v1, f32 *, 0xE0) < 0.0f) {
        M2C_FIELD(temp_v1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x6C) * -1.0f);
    }
    M2C_FIELD(*arg0, f32 *, 0x70) = 7449.0f;
    temp_v0 = func_00BA48F0();
    if ((temp_v0 != 1) && (temp_v0 != 0)) {
        temp_v1_2 = *arg0;
        if (!(M2C_FIELD(temp_v1_2, f32 *, 0x6C) <= 0.0f)) {
            M2C_FIELD(temp_v1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0x70) * -1.0f);
        }
        var_s1 = (*(u8 *)D_00591BE4);
        var_a1 = (var_s1 * 2) + func_00BBB8C0(var_s1 * 2);
    } else {
        temp_v1_3 = *arg0;
        if (M2C_FIELD(temp_v1_3, f32 *, 0x6C) < 0.0f) {
            M2C_FIELD(temp_v1_3, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v1_3, f32 *, 0x70) * -1.0f);
        }
        var_s1 = (*(u8 *)D_00591BE4);
        var_a1 = var_s1 + func_00BBB8C0(var_s1);
    }
    M2C_FIELD(*arg0, s8 *, 0x4F) = (s8) (var_a1 / (s32) var_s1);
    M2C_FIELD(*arg0, s8 *, 0x50) = (s8) (var_a1 % (s32) (*(u8 *)D_00591BE4));
    func_00BD4040(arg0, 3);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 5, 1);
    func_00BD3B80(arg0, 0);
    temp_v0_2 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 2;
}
