/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00B84790(void **, u16, u16, u8, M2C_UNK, f32); /* extern */
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00CBCC70[];
extern char D_00CBCD80[];

void func_00B846A0(void **arg0) {
    f32 *var_s0;
    u32 var_s1;
    s32 var_s2;
    void *temp_a0;
    void *temp_a3;

    var_s2 = 0;
    if ((s32) ((u8 *)D_00CBCC70)[0x110] > 0) {
        var_s1 = 0;
        var_s0 = (f32 *)D_00CBCC70;
        do {
            temp_a0 = *arg0;
            temp_a3 = M2C_FIELD(temp_a0, void **, 4);
            func_00B84790(arg0, M2C_FIELD(temp_a3, u16 *, 0x30), M2C_FIELD(temp_a0, u16 *, 0x26), M2C_FIELD(temp_a3, u8 *, 0x2D), 0, (f32) var_s1);
            var_s2 += 1;
            var_s1 += 2;
            var_s0[0] = *(f32 *)D_00591E6C;
            var_s0[8] = *(f32 *)D_00591E70;
            var_s0[16] = *(f32 *)D_00591E74;
            var_s0 += 1;
        } while (var_s2 < (s32) ((u8 *)D_00CBCC70)[0x110]);
    }
}
