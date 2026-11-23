/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_strip_colors.h"

typedef struct {
    MatchColor colors[73];
} StripPalette;
extern const MatchColor D_003A9FB0[];
static inline MatchColor paletteEntry(StripPalette palette, s32 index) {
    return palette.colors[index];
}

s32 func_00242C60(MatchColor color) {
    s32 i, nearest = 0;
    f32 best = 1000.0f;
    for (i = 0; i < 73; i++) {
        if (i % 5 != 0 || i == 0 || i == 70 || (i >= 25 && i < 66)) {
            if (!(best <=
                  func_00243930(color, paletteEntry(*(const StripPalette *)D_003A9FB0, i), 1))) {
                best = func_00243930(color, paletteEntry(*(const StripPalette *)D_003A9FB0, i), 1);
                nearest = i;
            }
        }
    }
    if (nearest == 0)
        return 0;
    if (nearest < 5)
        return 3;
    switch (nearest) {
    case 9:
    case 14:
    case 19:
    case 24:
        return 3;
    }
    if (nearest < 8)
        return 6;
    if (nearest < 0xA)
        return 7;
    if (nearest < 0xD)
        return 0xB;
    if (nearest < 0xF)
        return 0xC;
    if (nearest < 0x12)
        return 0x10;
    if (nearest < 0x14)
        return 0x11;
    if (nearest < 0x17)
        return 0x15;
    if (nearest < 0x19)
        return 0x16;
    if (nearest < 0x1C)
        return 0x1A;
    if (nearest < 0x1E)
        return 0x1C;
    if (nearest < 0x21)
        return 0x1F;
    if (nearest < 0x23)
        return 0x21;
    if (nearest < 0x26)
        return 0x24;
    if (nearest < 0x28)
        return 0x25;
    if (nearest < 0x2B)
        return 0x29;
    if (nearest < 0x2D)
        return 0x2B;
    if (nearest < 0x30)
        return 0x2E;
    if (nearest < 0x32)
        return 0x30;
    if (nearest < 0x35)
        return 0x33;
    if (nearest < 0x37)
        return 0x35;
    if (nearest < 0x3A)
        return 0x38;
    if (nearest < 0x3C)
        return 0x3A;
    if (nearest < 0x3F)
        return 0x3D;
    if (nearest < 0x41)
        return 0x3E;
    if (nearest < 0x44)
        return 0x42;
    if (nearest < 70)
        return 67;
    return nearest;
}
