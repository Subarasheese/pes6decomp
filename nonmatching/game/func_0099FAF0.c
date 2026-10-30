/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B4580(void);
extern void func_002871C0(void *);
extern u8 func_009B45F0(void);
extern u16 func_009B4390(void);
extern u32 func_00BC8D30(void);
M2C_UNK func_0099FC30(f32 *, f32 *);                /* extern */
void *func_009B4090(M2C_UNK);                       /* extern */
extern char D_00592380[];

void func_0099FAF0(void) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 *var_s1;
    s32 temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    if (!(func_009B45F0() & 0xFF) && (func_00BC8D30() == 0)) {
        var_s1 = ((void *)D_00592380);
        func_002871C0(&sp60);
    } else {
        temp_v0 = func_009B4090(0);
        var_s1 = &sp50;
        sp60 = (f32) M2C_FIELD(temp_v0, s16 *, 8);
        sp64 = (f32) M2C_FIELD(temp_v0, s16 *, 0xA);
        sp68 = (f32) M2C_FIELD(temp_v0, s16 *, 0xC);
        temp_s2 = func_009B4390() & 0xFFFF;
        if (temp_s2 != (func_009B4580() & 0xFFFF)) {
            temp_v0_2 = func_009B4090(-1);
            M2C_FIELD(var_s1, f32 *, 0) = (f32) M2C_FIELD(temp_v0_2, s16 *, 8);
            M2C_FIELD(var_s1, f32 *, 4) = (f32) M2C_FIELD(temp_v0_2, s16 *, 0xA);
            M2C_FIELD(var_s1, f32 *, 8) = (f32) M2C_FIELD(temp_v0_2, s16 *, 0xC);
        } else {
            sp54 = sp64;
            sp50 = sp60;
            sp58 = sp68;
        }
    }
    func_0099FC30(var_s1, &sp60);
}
