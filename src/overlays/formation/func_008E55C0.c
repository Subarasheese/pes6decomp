/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void func_008E5200(void *, u8);

void func_008E55C0(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x1DB) = arg1;
        func_008E5200(arg0, M2C_FIELD(arg0, u8 *, 0x1DE));
    }
}
