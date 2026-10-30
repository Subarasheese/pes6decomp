/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C13AB0(void *, M2C_UNK, void *, void *, u16, void *); /* extern */
extern char D_00CB3488[];
extern char D_00CBFAA0[];

void func_00C13870(void *arg0) {
    s32 var_a1;
    s32 var_a5;
    s32 var_v0;
    u16 temp_a4;
    u8 *var_a4;
    u8 var_v0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_a5;

    temp_a2 = ((void *)D_00CBFAA0) + M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB220);
    var_a1 = (s32) M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) < 0x1387;
    temp_a3 = temp_a2 + 0x4E20;
    if (var_a1 != 0) {
        var_a1 = (u32) (temp_a3 + 0x10) < (u32) (((void *)D_00CBFAA0) + 0xB220);
    }
    if ((var_a1 != 0) && (arg0 != NULL)) {
        var_a5 = 0;
        var_a4 = ((void *)D_00CB3488);
        M2C_FIELD(temp_a2, f32 *, 0x4E20) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(temp_a3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(temp_a3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(temp_a3, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        temp_a2_2 = ((void *)D_00CBFAA0) + (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) * 4);
        M2C_FIELD(temp_a2_2, u16 *, 0) = (u16) M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB220);
        M2C_FIELD(temp_a2_2, u8 *, 2) = (u8) M2C_FIELD(arg0, f32 *, 0);
loop_5:
        if (*var_a4 != (u8) M2C_FIELD(arg0, f32 *, 0)) {
            var_a5 += 1;
            var_a4 += 1;
            if (var_a5 >= 8) {
                var_v0 = 0;
            } else {
                goto loop_5;
            }
        } else {
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            var_v0_2 = 0xFF;
        } else {
            var_v0_2 = M2C_FIELD(arg0, u8 *, 1);
        }
        M2C_FIELD(temp_a2_2, u8 *, 3) = var_v0_2;
        M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) = (u16) (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) + 1);
        temp_a4 = M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB220);
        temp_a5 = (u8) M2C_FIELD(arg0, f32 *, 0) + ((void *)D_00CBFAA0);
        M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB220) = (u16) (temp_a4 + M2C_FIELD(temp_a5, u8 *, 0xB224));
        func_00C13AB0(((void *)D_00CBFAA0) + 0xB2A4, 0, temp_a2_2, temp_a5 + 0x10000, temp_a4, temp_a5);
    }
}
