/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CBCB37[];

u32 func_0030D4E0(void) {
    u32 value;

    value = 0;
    switch (D_00CBCB37[0]) {
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0x24:
        value = 1;
    }
    return value;
}
