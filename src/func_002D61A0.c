/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

void func_002D61A0(void) {
    u8 status;
    void (*callback)();
    void (*callback2)();

    status = D_0092F0FF[*D_0092F0FC];
    switch (status) {
    case 3:
    case 4:
    case 5:
if (func_0090F1F0() != 0) {
        D_003E7614->counter += 1;
        if (D_003E7614->counter == 0x78) {
            callback2 = D_003E7614->update;
            if ((callback2 != NULL) && (func_002D61A0 == callback2)) {
                D_003E7614->update = NULL;
            }
            if (D_003E7614->update == NULL) {
                D_003E7614->update = func_002D6090;
            }
            if (D_003E7614->enabled != 0) {
                func_002D33E0(D_003E7614->entries[func_00151EA0(3) & 0xFFFF], 1, 0, 0);
            }
            D_003E7614->counter = 0;
        }
    }
        break;
    default:
        D_003E7614->counter = 0;
        callback = D_003E7614->update;
        if ((callback != NULL) && (func_002D61A0 == callback)) {
            D_003E7614->update = NULL;
        }
        if (D_003E7614->update == NULL) {
            D_003E7614->update = func_002D6090;
        }
        break;
    }
}
