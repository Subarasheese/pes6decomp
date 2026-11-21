/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0026DA40(s32);
extern s32 func_00841F40(void);
extern s32 func_00841F50(s32);

s32 func_008225C0(void) {
    if (func_00841F40() == 0) {
        return 1;
    } else {
        if (func_0026DA40(1) == 0) {
            func_00841F50(0);
            return 1;
        }
        return 0;
    }
}
