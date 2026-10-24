/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 *func_00221150(void);
s32 func_00263170(void);
s32 func_00B29950(s32);

void func_002627E0(s32 arg0) {
    s32 *result;

    if (func_00263170() != 0) {
        result = func_00221150();
    } else {
        result = NULL;
    }
    *result = arg0;
    func_00B29950(arg0);
}
