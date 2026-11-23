/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_0095D110(s32 side, u16 *players);
extern void func_0095CCC0(s32 side, s32 page, const u16 *players, s32 num, s32 mode);
void func_0095CB80(s32 side, s32 page, s32 mode) {
    u16 players[32];
    s32 i;
    s32 num;
    for (i = 0; i < 32; ++i)
        players[i] = 0;
    num = func_0095D110(side, players);
    func_0095CCC0(side, page, players, num, mode);
}
