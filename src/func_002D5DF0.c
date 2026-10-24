/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

void func_002D5DF0(void) {
    u8 status;
    void (*callback)();

    status = D_0092F0FF[*D_0092F0FC];
    switch (status) {
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 26:
    case 27:
    case 28:
        func_002D33D0(1, 0x5CC60 / (s32) *D_00591BE4);
        callback = D_003E7614->update;
        if ((callback != NULL) && (func_002D5DF0 == callback)) {
            D_003E7614->update = NULL;
        }
        break;
    }
}
