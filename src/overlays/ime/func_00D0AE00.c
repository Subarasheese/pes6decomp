/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B9B00(void *, void *);
s32 func_00D0AE00(s8 *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0xD70) = 0;
    func_001B9B00(M2C_FIELD(arg0, void **, 0xD4C), arg0 + 0xD50);
    M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    return 0;
}
