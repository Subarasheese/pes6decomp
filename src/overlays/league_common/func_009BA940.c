/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *D_003EA9C0;

s32 func_009BA940(void) {
    if (D_003EA9C0 == NULL) {
        return 0;
    }
    switch (*D_003EA9C0) {
    case 0: case 2: case 5: case 6: case 9: case 0xA: case 0xC: case 0xE:
    case 0x10: case 0x12: case 0x14: case 0x16: case 8:
        break;
    default:
        return 0;
    }
    return 1;
}
