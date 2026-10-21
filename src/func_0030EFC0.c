/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

typedef struct LookupResult {
    u8 pad00[0x18];
    int found; /* 0x18 */
    u8 pad1C[0x4];
} LookupResult;

extern u8 D_00591F12[];
extern int D_00591E0C[];
extern s16 D_00591E10[];
extern u8 D_00591F24[];

void func_002C42A0(LookupResult *result, u8 a, u8 b);

/* Whether func_002C42A0 finds an entry for (a, b); only asked when a is set and either the flag
   at 0x591F12 is set or the match state at 0x591E0C/0x591E10/0x591F24 is all clear. */
int func_0030EFC0(u8 a, int b)
{
    LookupResult result;
    int ok;

    if (a == 0) {
        return 0;
    }
    ok = D_00591F12[0];
    if (!ok && D_00591E0C[0] == 0 && D_00591E10[0] == 0 && D_00591F24[0] == 0) {
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    func_002C42A0(&result, a, (u8)b);
    return result.found != 0;
}
