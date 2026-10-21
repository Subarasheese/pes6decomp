/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

extern u8 D_00592370[];
extern int D_00591E0C[];
extern u8 D_00591C09[];

int func_00BD9AF0(void);
int func_00333600(int id);

int func_0030F080(int a)
{
    int r = func_00BD9AF0();

    if (D_00592370[0]) {
        if (a != 0) {
            r = 2;
        } else {
            r = 0;
        }
    } else if (func_00333600(0x16)) {
        r = 2;
    } else if (r != 0xFF && D_00591E0C[0] != 0 && D_00591C09[0] != 7 && !func_00333600(0x16)) {
        r = 0;
    }
    return r;
}
