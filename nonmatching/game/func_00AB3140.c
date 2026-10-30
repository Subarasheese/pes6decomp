/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B34C0(s32, f32 *, f32 *, void *, f32, f32, f32, f32); /* extern */
M2C_UNK func_009B36C0(void *, u16, s32, u16, u8, s32); /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char Pes6MatchSquads[];

void func_00AB3140(void *arg0) {
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f2;
    s32 temp_a3;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_s1;
    s32 var_a0;
    u16 temp_a1;
    u8 temp_a5;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_v1, u16 *, 0x30);
    if (temp_a1 == 0x1DE) {
        temp_f2 = M2C_FIELD(temp_v1, f32 *, 0x38);
        if (!(temp_f2 < 5.0f)) {
            temp_a5 = M2C_FIELD(arg0, u8 *, 0x12);
            temp_a3 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a5 * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (f32) (((temp_a3 * -0x90) / 183) + ((u32) (temp_a3 * -0x90) >> 0x1F))) && (temp_f2 <= 12.0f)) {
                if (temp_f2 >= 2.1474836e9f) {
                    var_a0 = (s32) (temp_f2 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a0 = (s32) temp_f2;
                }
                func_009B36C0(arg0, temp_a1, var_a0 & 0xFF & 0xFF, M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_v1, u8 *, 0x2D), temp_a5 * 0x69);
                (*(f32 *)D_00591E6C) += M2C_FIELD(arg0, f32 *, 0xF0);
                (*(f32 *)D_00591E74) += M2C_FIELD(arg0, f32 *, 0xF8);
                temp_f14 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C);
                temp_f15 = M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C);
                temp_f0 = (s32) ((*(f32 *)D_00591E6C) - temp_f14);
                temp_f0_2 = (s32) ((*(f32 *)D_00591E74) - temp_f15);
                if (((temp_f0 * temp_f0) + (temp_f0_2 * temp_f0_2)) < 0x510) {
                    temp_s1 = func_009B34C0(temp_f0_2, ((void *)D_00591E74), ((void *)D_00591E6C), Pes6Ball_Current, (*(f32 *)D_00591E6C), (*(f32 *)D_00591E74), temp_f14, temp_f15) & 0xFFFF;
                    M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) ((*(f32 *)D_00591E6C) + (f32) func_00BBB990(temp_s1, 0x24));
                    M2C_FIELD(Pes6Ball_Current, f32 *, 0x18) = (f32) ((*(f32 *)D_00591E74) + (f32) func_00BBB9C0(temp_s1, 0x24));
                    (*(u8 *)Pes6MatchState_Current) = M2C_FIELD(arg0, u8 *, 0);
                }
            }
        }
    }
}
