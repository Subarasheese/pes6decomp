/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 *func_00221150(void);
s32 func_00263170(void);

void func_00262B00(s32 value) {
    s32 *state;

    if (func_00263170() != 0) {
        state = func_00221150();
    } else {
        state = NULL;
    }
    *state = value;
}
