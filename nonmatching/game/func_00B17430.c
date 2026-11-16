/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u32 func_009B33A0(void *, s32, s32);
extern u8 *Pes6Ball_Current;
extern u8 D_005926E6;
extern u8 D_005926EE;

s32 func_00B17430(u8 *arg0) {
    u8 *ball;
    u8 *e;

    ball = Pes6Ball_Current;
    if (M2C_FIELD(ball, f32 *, 0x7FC) < -768.0f
        && M2C_FIELD(ball, f32 *, 0x7FC + D_005926E6 * 4) < -768.0f
        && M2C_FIELD(ball, f32 *, 0x7FC + D_005926EE * 4) < -768.0f) {
        return 1;
    }
    if (M2C_FIELD(arg0, u32 *, 0x114) <= 0x380U) {
        return 0;
    }
    e = ball + D_005926EE * 4;
    if (func_009B33A0(arg0, (s32)M2C_FIELD(e, f32 *, 0x47C), (s32)M2C_FIELD(e, f32 *, 0xB7C)) < 0x90000U) {
        return 0;
    }
    e = Pes6Ball_Current + D_005926E6 * 4;
    if (func_009B33A0(arg0, (s32)M2C_FIELD(e, f32 *, 0x47C), (s32)M2C_FIELD(e, f32 *, 0xB7C)) < 0x90000U) {
        return 0;
    }
    return 1;
}
