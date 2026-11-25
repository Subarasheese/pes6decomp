/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x20];
    u32 flags;
    u8 reserved24[8];
    u8 sides[2];
} LeagueMatch;
extern LeagueMatch *D_003E77B0;
extern void func_00978220(void), func_00978090(s32 team, s32 side), func_0095FE30(void),
    func_0094C790(s32 value);
extern u8 func_00225820(void);
extern s32 func_002307F0(void), func_00230410(void), func_00210DF0(void),
    Pes6Settings_Get_B04_b5_w1(void), func_00230EF0(void), func_00B02920(s32);
static inline void prepareLeagueMatch(void) {
    switch ((u8)func_002307F0()) {
    case 0: {
        u32 flags = D_003E77B0->flags;
        if ((u64)flags & 0x800) {
            D_003E77B0->flags &= ~0x1000;
            D_003E77B0->flags &= ~0x10;
            D_003E77B0->flags &= ~0x100;
            D_003E77B0->flags |= 0x200000;
        } else {
            func_0095FE30();
        }
    } break;
    default:
        break;
    }
}
s32 func_0096B690(void) {
    s32 next;
    func_00978220();
    func_00978090(D_003E77B0->sides[0], 0);
    func_00978090(D_003E77B0->sides[1], 1);
    prepareLeagueMatch();
    next = 0x41;
    if (func_00230410() == 1 && func_00210DF0() == 2 && Pes6Settings_Get_B04_b5_w1() == 1 &&
        func_00230EF0() == 1 && (func_00B02920(func_00225820()) & 0xff) > 0)
        next = 0x34;
    func_0094C790(0);
    return next;
}
