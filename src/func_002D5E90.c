/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

void func_002D5E90(void) {
    u8 status;
    void (*callback)();

    status = D_0092F0FF[*D_0092F0FC];
    switch(status) {
    case 6:
    case 7:
    case 8:
    case 9:

    func_0026E840(0x22000100U);
    callback = D_003E7614->update;
    if ((callback != NULL) && (func_002D5E90 == callback)) {
        D_003E7614->update = NULL;
    }
    if (D_003E7614->update == NULL) {
        D_003E7614->update = func_002D5DF0;
    }

        break;
    }
}
