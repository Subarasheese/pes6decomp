/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D7A20(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_0081D770(s32, f32 *);                  /* extern */
M2C_UNK func_0099B390(s32, M2C_UNK, s16 *, f32 *, M2C_UNK); /* extern */
M2C_UNK func_0099D460(s32, f32 *);                  /* extern */
M2C_UNK func_0099D700(s32, f32 *);                  /* extern */
extern char D_009FF4E0[];

void func_009B3590(void *arg0) {
    f32 sp50;
    f32 sp60;
    f32 sp70;
    f32 sp80;
    s16 sp130;
    f32 *var_s1;
    s16 *var_a0;
    s16 *var_a1;
    s32 var_s2;
    s32 var_v1;
    void *var_s0;

    var_a1 = ((void *)D_009FF4E0);
    var_v1 = 0xB;
    var_a0 = &sp130;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 2;
        var_a0 += 2;
    } while (var_v1 > 0);
    func_0099B390(M2C_FIELD(arg0, s32 *, 0), 3, &sp130, &sp80, 0xB);
    var_s2 = 0;
    var_s1 = &sp80;
    var_s0 = arg0;
    do {
        if (M2C_FIELD(arg0, s32 *, 0x1C4) == 1) {
            *var_s1 += M2C_FIELD(arg0, f32 *, 0x1B4);
        }
        func_0081D770(M2C_FIELD(var_s0, s32 *, 0x30), var_s1);
        func_0081D770(M2C_FIELD(var_s0, s32 *, 0x34), var_s1);
        func_001D7A20(M2C_FIELD(var_s0, s32 *, 0x30), &sp70, 0x12);
        func_001D7A20(M2C_FIELD(var_s0, s32 *, 0x30), &sp60, 0x11);
        func_001D7A20(M2C_FIELD(var_s0, s32 *, 0x30), &sp50, 0x13);
        func_0081D770(M2C_FIELD(var_s0, s32 *, 0x4C), &sp50);
        func_0099D700(M2C_FIELD(var_s0, s32 *, 0x44), &sp70);
        func_0099D460(M2C_FIELD(var_s0, s32 *, 0x48), &sp60);
        var_s2 += 1;
        var_s1 += 0x10;
        var_s0 += 0x20;
    } while (var_s2 < 0xB);
}
