/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0027D0B0(s32, s32);
extern s32 func_009B34C0(float, float, float, float);

extern char D_00591E6C[];
extern char D_00591E74[];

s32 func_00AB30C0(s32 arg0) {
    f32 temp_f20;
    f32 temp_f21;

    func_0027D0B0(arg0, 9);
    temp_f21 = (*(f32 *)D_00591E6C);
    temp_f20 = (*(f32 *)D_00591E74);
    func_0027D0B0(arg0, 0xA);
    return ((func_009B34C0(temp_f21, temp_f20, (*(f32 *)D_00591E6C), (*(f32 *)D_00591E74)) & 0xFFFF) + 0x4000) & 0xFFFF;
}
