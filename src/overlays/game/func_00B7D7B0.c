/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00591BE4[], D_00C9A725[], D_00C9A727[], D_00C9A72A[], D_00C9A72D[], D_00C9A72F[],
    *D_003EA768;
extern s32 D_00C9A920[];
extern f32 D_00C9A924[];
extern s32 func_00152130(s32 mode, u8 step), func_00BA91C0(void);
extern void func_00BF9330(s32, void *), func_00B27170(void);
s32 func_00B7D7B0(void) {
    if (D_00C9A920[0] >= 39) {
        s32 step = 16 * D_00591BE4[0] / 60;
        if ((f32)(u32)D_00591BE4[0] * D_00C9A924[0] - (f32)(255 / step) < (f32)D_00C9A920[0] &&
            func_00152130(1, (u8)step) == 1)
            return 1;
    } else {
        if (func_00152130(0, (u8)(16 * D_00591BE4[0] / 60)) == 1)
            *D_003EA768 |= 1;
    }
    {
        if ((s32)(0.2f * (f32)(u32)D_00591BE4[0]) == D_00C9A920[0]) {
            u8 cue[2];
            cue[0] = D_00C9A725[0];
            cue[1] = D_00C9A727[0];
            func_00BF9330(0, cue);
        } else if ((s32)(1.8f * (f32)(u32)D_00591BE4[0]) == D_00C9A920[0] && D_00C9A72A[0] != 255) {
            u8 cue[2];
            cue[0] = D_00C9A72D[0];
            cue[1] = D_00C9A72F[0];
            func_00BF9330(0, cue);
        }
    }
    if (D_00C9A920[0] == D_00591BE4[0] * 3)
        func_00B27170();
    if (func_00BA91C0())
        D_00C9A920[0] = (s32)((f32)(u32)D_00591BE4[0] * D_00C9A924[0] + 1.0f);
    ++D_00C9A920[0];
    return 0;
}
