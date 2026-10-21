/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

extern u8 D_00591E4F[];
extern u8 D_00591E50[];

/* The opposing side's player for id: the first of the two ids stored for the other side, or the
   second when the first plays role 0x10, 0x11 or 0x14. */
int func_0030E5C0(u8 *out, u8 id)
{
    int other;
    u8 pick;
    int role;

    other = (Pes6MatchPlayer_Get(id)->side ^ 1) * 2;
    pick = D_00591E4F[other];
    role = Pes6MatchPlayer_Get(pick)->role;
    switch (role) {
    case 0x14:
    case 0x11:
    case 0x10:
        pick = D_00591E50[other];
        break;
    }
    *out = pick;
    return 1;
}
