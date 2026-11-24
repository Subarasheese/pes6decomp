/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD311[];
extern u8 D_00CBD312[];
extern s32 D_003EA780;
extern u32 D_003EA790;
extern u8 D_003EA7A4;
extern s32 func_00152130(s32, s32);
extern void func_0013B7F0(f32);
extern void func_00BCA720(s32);
extern HighlightClip *D_00CBD394[];

s32 func_00BCB420(void) {
    if (!D_00CBD312[0]) {
        if (!func_00152130(0, 16))
            return 0;
        D_003EA780 = 9;
    } else {
        D_003EA790++;
        if (D_003EA790 < 30) {
            f32 elapsed = (f32)D_003EA790 / 30.f;
            func_0013B7F0(1.f - elapsed * elapsed);
        } else {
            func_0013B7F0(0.f);
            D_003EA780 = 9;
        }
    }
    if (!D_003EA7A4) {
        s32 next;
        D_003EA7A4 = 1;
        next = D_00CBD311[0] + 1;
        if (next == HIGHLIGHTS || !D_00CBD394[D_00CBD311[0]])
            func_00BCA720(0);
        else if (D_00CBD394[D_00CBD311[0]])
            func_00BCA720(next);
    }
    return 1;
}
