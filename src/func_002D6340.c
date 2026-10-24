/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_002d5930.h"

M2C_UNK func_002D5DA0();

void func_002D6340(void) {
    M2C_UNK (*callback38)();
    M2C_UNK (*callback3C)();
    M2C_UNK (*callback40)();
    M2C_UNK (*callback44)();
    u8 phase;
    void (*callback)();

    phase = D_003E7614->pad02[0];
    switch (phase) {
    case 0:
        if (D_003E7614->update == NULL) {
            D_003E7614->update = func_002D61A0;
        }
        M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x40) = func_002D5DA0;
        M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x44) = NULL;
        M2C_FIELD(D_003E7614, s32 *, 0x48) = 0;
        D_003E7614->pad02[0] += 1;
        D_003E7614->initialized = 0;
        return;
    case 1:
        callback = D_003E7614->update;
        if (callback != NULL) {
            callback();
        }
        callback38 = M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x38);
        if (callback38 != NULL) {
            callback38();
        }
        callback3C = M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x3C);
        if (callback3C != NULL) {
            callback3C();
        }
        callback40 = M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x40);
        if (callback40 != NULL) {
            callback40();
        }
        callback44 = M2C_FIELD(D_003E7614, M2C_UNK (**)(), 0x44);
        if (callback44 != NULL) {
            callback44();
        }
        return;
    }
}
