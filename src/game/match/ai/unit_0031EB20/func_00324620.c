/* compiler: mwcc-3.0.1b198 */
#include "types.h"

s32 func_00324620(s32 *out, s32 rule, s32 value) {
    switch (rule) {
    case 5:
        value = 6;
        break;
    case 8:
        value = 7;
        break;
    case 1:
        switch (value) {
        case 2:
            value = 5;
            break;
        case 3:
            value = 4;
            break;
        case 4:
            value = 3;
            break;
        case 5:
            value = 2;
            break;
        }
        break;
    case 2:
        value = 3;
        break;
    case 3:
        value = 4;
        break;
    case 4:
        value = 5;
        break;
    case 0:
        value = 0;
        break;
    }
    *out = value;
    return 1;
}