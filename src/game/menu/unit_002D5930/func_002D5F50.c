/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

void func_002D5F50(void) {
    u8 status;
    void (**callbackSlot)();
    void (*callback)();
    void (*callback2)();

    status = D_0092F0FF[*D_0092F0FC];
    switch (status) {
    case 5:
        if (func_002D33C0(1) == 0) {
            func_002D33E0(0x2D, 1, 0, 0);
            func_0026E840(0x220000FFU);
            callback = D_003E7614->update;
            if ((callback != NULL) && (func_002D5F50 == callback)) {
                D_003E7614->update = NULL;
            }
            callbackSlot = &D_003E7614->update;
            if (D_003E7614->update == NULL) {
                *callbackSlot = func_002D5E90;
            }
        }
        break;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
        if (func_002D33C0(1) == 0) {
            func_002D33E0(0x2D, 1, 0, 0);
            callback2 = D_003E7614->update;
            if ((callback2 != NULL) && (func_002D5F50 == callback2)) {
                D_003E7614->update = NULL;
            }
            callbackSlot = &D_003E7614->update;
            if (D_003E7614->update == NULL) {
                *callbackSlot = func_002D5DF0;
            }
        }
        break;
    }
}
