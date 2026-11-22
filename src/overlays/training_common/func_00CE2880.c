/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00CDCCB0(void);

s32 func_00CE2880(void) {
    s32 message;
    message = func_00CDCCB0();
    switch (message) {
    case 0:
        message = 0x17;
        break;

    case 1:
        message = 0x18;
        break;

    case 2:
        message = 0x19;
        break;

    case 3:
        message = 0x17;
        break;

    default:
        message = 0x17;
        break;
    }

    return message;
}
