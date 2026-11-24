/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 r, g, b, a;
} TeamStripRgba;

extern u32 *func_0021F440(u16 team, s32 side);
extern s32 func_0021F520(u16 team), func_0021FA50(s32 team),
    func_002659F0(s32 team, s32 variant, const TeamStripRgba *colors);

s32 func_00209B10(s32 team) {
    TeamStripRgba colors[2];
    s32 i;
    s32 variant;
    if ((team >= 0x40 && team <= 0xcb) || team == 0x126 || team == 0x127) {
        for (i = 0; i < 2; ++i) {
            const TeamStripRgba *color = (const TeamStripRgba *)func_0021F440((u16)team, i);
            colors[i] = *color;
        }
        variant = (u8)func_0021F520((u16)team);
    } else {
        variant = 0;
        colors[0].r = 255;
        colors[0].g = 255;
        colors[0].b = 255;
        colors[0].a = 255;
        colors[1].r = 255;
        colors[1].g = 255;
        colors[1].b = 255;
        colors[1].a = 255;
    }
    return func_002659F0(func_0021FA50((u16)team), variant, colors);
}
