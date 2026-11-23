#ifndef PES6_MATCH_STRIP_COLORS_H
#define PES6_MATCH_STRIP_COLORS_H

#include "types.h"

enum { STRIP_PRIMARY_SHIRT, STRIP_SECONDARY_SHIRT, STRIP_SHORTS, STRIP_GOALKEEPER };
enum {
    ALTERNATE_SHIRT = 1,
    ALTERNATE_SHORTS = 2,
    OUTFIELD_PARTS = 7,
    KEEPER_PARTS = 0x38,
    ALL_STRIP_PARTS = 0x3f
};
typedef struct {
    u8 red, green, blue, alpha;
} MatchColor;
extern u16 Pes6MatchContext[], D_00591BB2[];
extern u8 D_003E9E88[2];
extern MatchColor func_00241660(s32 team, s32 part, s32 alternate);
extern s32 func_002440E0(MatchColor homeShirt, MatchColor homeAccent, MatchColor homeShorts,
                         MatchColor awayShirt, MatchColor awayAccent, MatchColor awayShorts);
extern f32 func_00243930(MatchColor left, MatchColor right, s32 mode);

static inline s32 selectedStripContrast(void) {
    MatchColor shirt[2], accent[2], shorts[2];
    s32 side;
    for (side = 0; side <= 1; side++) {
        if ((D_003E9E88[side] & ALTERNATE_SHIRT) != 0) {
            shirt[side] = func_00241660(Pes6MatchContext[side], STRIP_PRIMARY_SHIRT, 1);
            accent[side] = func_00241660(Pes6MatchContext[side], STRIP_SECONDARY_SHIRT, 1);
        } else {
            shirt[side] = func_00241660(Pes6MatchContext[side], STRIP_PRIMARY_SHIRT, 0);
            accent[side] = func_00241660(Pes6MatchContext[side], STRIP_SECONDARY_SHIRT, 0);
        }
        if ((D_003E9E88[side] & ALTERNATE_SHORTS) != 0)
            shorts[side] = func_00241660(Pes6MatchContext[side], STRIP_SHORTS, 1);
        else
            shorts[side] = func_00241660(Pes6MatchContext[side], STRIP_SHORTS, 0);
    }
    return func_002440E0(shirt[0], accent[0], shorts[0], shirt[1], accent[1], shorts[1]);
}

#endif
