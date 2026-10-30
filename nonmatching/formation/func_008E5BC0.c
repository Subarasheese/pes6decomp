/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
M2C_UNK func_001EE5D0(void *, f32 *);               /* extern */
M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */
extern char D_008EC5B0[];
extern char D_008EC5B4[];
extern char D_008EC5B8[];

void func_008E5BC0(s32 arg0, s32 arg1) {
    f32 sp80;
    f32 sp84;
    s64 sp88;
    f32 sp90;
    f32 sp94;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a0_4;
    s32 temp_s1;
    s32 var_s5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_s4;

    temp_s1 = arg1 * 4;
    temp_a0 = (arg1 * 8) + arg0;
    temp_f20 = M2C_FIELD(temp_a0, f32 *, 4);
    temp_f21 = M2C_FIELD(temp_a0, f32 *, 8);
    temp_a0_2 = M2C_FIELD((temp_s1 + arg0), void **, 0x704);
    if (temp_a0_2 != NULL) {
        func_001EE5D0(temp_a0_2, &sp90);
        sp90 = temp_f20;
        sp94 = temp_f21;
        func_001EF860(M2C_FIELD((temp_s1 + arg0), void **, 0x704), &sp90);
    }
    var_s5 = 0;
    var_s4 = arg0 + (arg1 << 5);
    do {
        temp_a0_3 = M2C_FIELD(var_s4, void **, 0x730);
        if (temp_a0_3 != NULL) {
            func_001EE5D0(temp_a0_3, &sp90);
            sp90 = temp_f20;
            sp94 = temp_f21;
            func_001EF860(M2C_FIELD(var_s4, void **, 0x730), &sp90);
        }
        var_s5 += 1;
        var_s4 += 4;
    } while (var_s5 < 8);
    temp_a0_4 = M2C_FIELD((temp_s1 + arg0), s32 *, 0x8C0);
    if (temp_a0_4 != 0) {
        sp80 = (*(f32 *)D_008EC5B0);
        sp80 = M2C_FIELD(temp_a0, f32 *, 4) - 40.0f;
        sp84 = (*(f32 *)D_008EC5B4);
        sp84 = M2C_FIELD(temp_a0, f32 *, 8) - 8.0f;
        if (temp_a0_4 != 0) {
            sp88 = (*(s64 *)D_008EC5B8);
            func_001F3D80(temp_a0_4, &sp80, 0);
        }
    }
}
