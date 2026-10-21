/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_00C00630(void);

/* Classify func_00C00630's state 0x21-0x2B into 1, 2 or 3 in *out; returns 0 for other states. */
int func_0030F2B0(int *out)
{
    int r;

    switch (func_00C00630()) {
    case 0x21:
    case 0x23:
    case 0x26:
        r = 2;
        break;
    case 0x24:
    case 0x28:
        r = 1;
        break;
    case 0x22:
    case 0x25:
    case 0x27:
    case 0x29:
    case 0x2A:
    case 0x2B:
        r = 3;
        break;
    default:
        return 0;
    }
    *out = r;
    return 1;
}
