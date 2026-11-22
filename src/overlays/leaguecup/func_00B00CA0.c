/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B00D40(void);
extern void *D_003EAD54;

s32 func_00B00CA0(s32 arg0) {
    s32 value;
    s32 value2;
    s32 value3;
    void *entry;

    entry = D_003EAD54;
    if (entry == NULL) {
        return 0;
    }
    if (entry == NULL) {
        value2 = 0;
    } else if (!(arg0 >= (func_00B00D40() & 0xFF))) {
        value2 = 1;
    } else {
        value2 = 0;
    }
    value = M2C_FIELD(entry, s32 *, 0x5D4);
    if (D_003EAD54 == NULL) {
        value3 = 0;
    } else if (!(value >= (func_00B00D40() & 0xFF))) {
        value3 = 1;
    } else {
        value3 = 0;
    }
    return value2 == value3;
}
