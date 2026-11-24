/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

u8 func_00290B80(u8 value, u8 kind) {
    switch (kind) {
    case 0:
        if (value >= 50)
            value = 99;
        else
            value += 50;
        break;
    case 1:
        break;
    case 2:
        if (value < 50)
            value = 0;
        else
            value -= 50;
        break;
    }
    if (value > 99)
        value = 99;
    return value;
}
