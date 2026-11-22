/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002631D0(void);
extern void *func_00CEC600(s32);
extern void *func_001D5A10(s32);
extern s32 func_00CDCCB0(void);

void *func_00CED0D0(void) {
    s32 mode;
    void *message;
    mode = func_002631D0();
    switch (mode) {
    case 7:
        message = func_00CEC600(0x301259a);
        break;

    case 5:
        message = func_00CEC600(0x201259d);
        break;

    case 6:
        message = func_00CEC600(0x4012592);
        break;

    case 2:

    case 8:
        message = func_001D5A10(0x1259c);
        break;

    case 9:
        message = func_00CEC600(0x501259f);
        break;

    default:
        mode = func_00CDCCB0();
        switch (mode) {
        case 0:
            message = func_00CEC600(0x3012595);
            break;

        case 1:
            message = func_00CEC600(0x3012598);
            break;

        case 2:
            message = (void *)0x0;
            break;

        default:
            message = (void *)0x0;
            break;
        }

        break;
    }

    return message;
}
