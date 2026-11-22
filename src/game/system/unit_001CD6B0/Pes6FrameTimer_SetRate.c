/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 Pes6FrameTimer_TicksPerFrame[][2];
extern f32 Pes6FrameTimer_FramesPerTick[];
s32 func_001CDAA0(void);
s32 func_001CDA90(void);

void Pes6FrameTimer_SetRate(void) {
    Pes6FrameTimer_FramesPerTick[0] = 1.0f / Pes6FrameTimer_TicksPerFrame[func_001CDAA0()][func_001CDA90()];
}
