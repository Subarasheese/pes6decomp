/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u8 func_00B71AF0(u8 mode) {
    u8 group = 0;
    switch (mode) {
    case 0:
        group = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        group = 0;
        break;
    case 5:
        group = 2;
        break;
    case 6:
    case 7:
    case 8:
        group = 3;
        break;
    }
    return group;
}
