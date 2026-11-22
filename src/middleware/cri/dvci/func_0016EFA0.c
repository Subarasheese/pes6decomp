/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern s32 func_0016EE08(s32);
extern void func_0016F270(void *);

void func_0016EFA0(void *arg0) {
    if (arg0 != NULL) {
        if ((u8) M2C_FIELD(arg0, u8 *, 2) >= 2U) {
            func_0016F270(arg0);
        }
        M2C_FIELD(arg0, s8 *, 0) = 0;
        func_0016EE08((s32) arg0);
    }
}
