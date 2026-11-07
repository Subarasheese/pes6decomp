/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00180030(void);
void func_00180040(void);

void *func_0017FFB0(s32 flags) {
    if (flags & 1) {
        return func_00180030;
    }
    return func_00180040;
}
