/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 Pes6FrameTimer_FramesPerTick[];
extern s32 Pes6FrameTimer_ElapsedFrames[];

void Pes6FrameTimer_Measure(void) {
    Pes6FrameTimer_ElapsedFrames[0] = (s32)((f32)*(volatile u32 *)0x10000800 * Pes6FrameTimer_FramesPerTick[0]);
}
