/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern u8 D_00591BE4[];
extern u8 D_003EA750;
extern void func_0027A710(u32);
extern void func_0020B360(u8);
extern void func_00182B20(s32);

void func_009B6630(s32 mode, f32 step) {
    u32 intervals;
    u8 samples;
    f32 scaled;
    D_00CBAA18[0] = D_00CBAA14[0];
    scaled = 8.f * step;
    intervals = (u32)scaled;
    if (mode == 1)
        intervals = (u32)(2.f * scaled);
    if (!intervals)
        samples = 8;
    else {
        samples = (u8)(8u / intervals);
        if (8u % intervals)
            samples++;
    }
    func_0027A710(intervals);
    func_0020B360((u8)(samples + 1));
    D_00CBAA14[0] += step;
    if (D_00CBAA14[0] >= 300.f)
        D_00CBAA14[0] -= 300.f;
    else if (D_00CBAA14[0] < 0.f)
        D_00CBAA14[0] += 300.f;
    D_003EA750 = (D_00591BE4[0] * 8) / 2;
    D_00CBAA00.current = (u16)(s32)D_00CBAA14[0];
    if (step > 0.f)
        func_00182B20(1);
    else
        func_00182B20(0);
}
