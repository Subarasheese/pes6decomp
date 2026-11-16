/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u16 func_009B4580(void);
extern void func_002871C0(void *);
extern u8 func_009B45F0(void);
extern u16 func_009B4390(void);
extern u32 func_00BC8D30(void);
void func_0099FC30(f32 *, f32 *);                /* extern */
void *func_009B4090(s32);                       /* extern */
extern f32 D_00592380[];

void func_0099FAF0(void) {
    f32 sp50[3];
    f32 sp60[3];
    f32 *var_s1;
    s32 temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    if (!(func_009B45F0() & 0xFF) && (func_00BC8D30() == 0)) {
        var_s1 = D_00592380;
        func_002871C0(sp60);
    } else {
        temp_v0 = func_009B4090(0);
        var_s1 = sp50;
        sp60[0] = (f32) M2C_FIELD(temp_v0, s16 *, 8);
        sp60[1] = (f32) M2C_FIELD(temp_v0, s16 *, 0xA);
        sp60[2] = (f32) M2C_FIELD(temp_v0, s16 *, 0xC);
        temp_s2 = func_009B4390() & 0xFFFF;
        if (temp_s2 != (func_009B4580() & 0xFFFF)) {
            temp_v0_2 = func_009B4090(-1);
            var_s1[0] = (f32) M2C_FIELD(temp_v0_2, s16 *, 8);
            var_s1[1] = (f32) M2C_FIELD(temp_v0_2, s16 *, 0xA);
            var_s1[2] = (f32) M2C_FIELD(temp_v0_2, s16 *, 0xC);
        } else {
            sp50[1] = sp60[1];
            sp50[0] = sp60[0];
            sp50[2] = sp60[2];
        }
    }
    func_0099FC30(var_s1, sp60);
}
