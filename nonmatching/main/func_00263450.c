/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D9060(void);
extern void func_002D9010(void);
extern void func_002D9070(int);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002632F0(s32);                         /* extern */
extern char D_0058D3C0[];

void func_00263450(void *arg0) {
    f32 temp_f0;
    f32 var_f1;
    f32 var_f1_2;
    s32 var_a0;
    u8 temp_v1;

    func_002632F0(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x20) * 4) + arg0), s32 *, -4));
    if ((M2C_FIELD(arg0, u8 *, 0x20) - 1) == 0) {
        func_002D9060();
        func_002D9010();
        func_002D9070(0);
        func_001C48E8(((void *)D_0058D3C0), 0, 0x50);
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x20);
    if ((s32) temp_v1 < 0) {
        var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
    } else {
        var_f1 = (f32) temp_v1;
    }
    temp_f0 = var_f1 - 1.0f;
    var_f1_2 = 0.0f;
    if (temp_f0 >= 0.0f) {
        var_f1_2 = temp_f0;
    }
    if (var_f1_2 >= 2.1474836e9f) {
        var_a0 = (s32) (var_f1_2 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0 = (s32) var_f1_2;
    }
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) (var_a0 & 0xFF);
}
