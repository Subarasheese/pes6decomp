/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BBB990(s32, s32);
extern s32 func_00BBB9C0(s32, s32);

void func_00B83E60(void **arg0, f32 *arg1, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    s32 sign;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s4;
    s32 s5;
    s32 v;
    void *rec;

    fparg1 = fparg1 * 10000.0f;
    rec = *arg0;
    temp_f21 = M2C_FIELD(rec, f32 *, 0xE8);
    temp_f22 = M2C_FIELD(rec, f32 *, 0xE0);
    sign = 1;
    if (M2C_FIELD(M2C_FIELD(rec, void **, 4), u8 *, 0x2D) != 0) {
        sign = -1;
    }
    v = (s32) (M2C_FIELD(rec, u16 *, 0x26) + 0x4000);
    s2 = v & 0xFFFF;
    s0 = 0x10000 - s2;
    s1 = (s32) fparg1;
    temp_f20 = fparg2 / 100.0f;
    s5 = (s32) (10000.0f * fparg0 * (f32) sign);
    s4 = func_00BBB990(s2, s5);
    arg1[0] = temp_f22 + ((temp_f20 * (f32) (s4 + func_00BBB9C0(s0 & 0xFFFF, s1))) / 100.0f);
    s0 = -func_00BBB9C0(s0 & 0xFFFF, s5);
    arg1[1] = temp_f21 + ((temp_f20 * (f32) (s0 + func_00BBB990(s2, s1))) / 100.0f);
}
