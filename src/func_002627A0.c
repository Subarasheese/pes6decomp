/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00221150(void);
s32 func_00263170(void);
s32 func_00B297C0(s32);

void func_002627A0(s32 arg0) {
    void *result;

    if (func_00263170() != 0) {
        result = func_00221150();
    } else {
        result = NULL;
    }
    M2C_FIELD(result, s32 *, 4) = arg0;
    func_00B297C0(arg0);
}
