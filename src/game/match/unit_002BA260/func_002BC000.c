/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
extern f32 *D_003E74CC, D_005E3170[], D_005E31C0[], D_005E31C4[];
extern u8 D_00591BE4[];
extern s32 func_0029AC20(void), func_00BBB9F0(void);
extern u16 func_00BBCBC0(void);
extern f32 func_00BBCB90(void);
extern void func_002A6B20(void), func_00BBBC10(void);
void func_002BC000(void) {
    f32 step = *D_003E74CC / 60.0f;
    if (func_0029AC20()) {
        func_002A6B20();
        return;
    }
    D_005E31C0[0] += step;
    D_005E3170[0] += step;
    if (D_005E2F70.program && func_00BBB9F0() && !(D_005E31C4[0] - D_005E31C0[0] <= 2.0f) &&
        (!((f32)func_00BBCBC0() <= 2.0f * (f32)D_00591BE4[0]) || !(func_00BBCB90() <= 0.8f))) {
        s32 repeats = 0;
        for (;;) {
            playTrack(D_005E2F70.program);
            func_00BBBC10();
            if (!func_00BBB9F0())
                break;
            if (repeats > 10)
                break;
            ++repeats;
        }
    } else {
        func_00BBBC10();
    }
}
