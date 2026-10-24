/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

void func_002D5CE0(void) {
    u8 status;
    void (*callback)();

    status = D_0092F0FF[*D_0092F0FC];
    switch(status) {
    case 1:
    case 2:

    if (func_002D33C0(1) == 0) {
        func_002D33E0(0x217, 1, 3, 0);
        callback = D_003E7614->update;
        if ((callback != NULL) && (func_002D5CE0 == callback)) {
            D_003E7614->update = NULL;
        }
        if (D_003E7614->update == NULL) {
            D_003E7614->update = func_002D5C30;
        }
    }

        break;
    }
}
