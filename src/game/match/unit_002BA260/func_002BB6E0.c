/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern f32 D_005E31C0[], D_005E31C4[];
extern u8 D_00591BE4[];
extern s32 func_00BBB9F0(void);
extern u16 func_00BBCBC0(void);
extern f32 func_00BBCB90(void);
s32 func_002BB6E0(void) {
    if (D_005E31C4[0] - D_005E31C0[0] <= 2.0f)
        return 0;
    if (func_00BBB9F0())
        return 1;
    if ((f32)func_00BBCBC0() <= 2.0f * (f32)D_00591BE4[0] && func_00BBCB90() <= 0.8f)
        return 0;
    return 1;
}
