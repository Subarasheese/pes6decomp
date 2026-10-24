/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00221150(void);
s32 func_00263170(void);

void func_002629F0(s32 value) {
    void *state;

    if (func_00263170() != 0) {
        state = func_00221150();
    } else {
        state = NULL;
    }
    M2C_FIELD(state, s32 *, 0x10) = value;
}
