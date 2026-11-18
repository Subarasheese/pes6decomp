/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00151FC0(s32 stream, s32 seed);
extern u32 func_00151FA0(s32 stream);
extern u16 func_00151D80(s32 stream, u16 upper);
extern s32 D_003EA778;

static inline int draw(void)
{
    int sample;

    func_00151FC0(1, D_003EA778);
    sample = (u16)func_00151D80(1, 0x7FFF);
    D_003EA778 = func_00151FA0(1);
    return sample;
}

static inline u32 chance(s16 percent)
{
    return draw() % 100 < percent;
}

s32 func_00BBB7F0(s32 limit)
{
    int magnitude;
    int sample = draw();
    int bound = (s32)((u32)limit + 1);

    if (bound == 0) {
        magnitude = 0;
    } else if (bound < 0) {
        magnitude = -sample % (s32)(0u - (u32)bound);
    } else {
        magnitude = sample % bound;
    }
    /* The sign draw also advances the stream when the magnitude is zero. */
    return chance(50) ? magnitude : -magnitude;
}
