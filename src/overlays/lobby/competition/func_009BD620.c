/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0099E920(s32);
s32 func_009BEE50(s32);

s32 func_009BD620(void *arg0) {
    if (arg0 == NULL) {
        return 5;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) == 8)) {
        return 5;
    }
    func_009BEE50(M2C_FIELD(arg0, s32 *, 0x10));
    func_0099E920(M2C_FIELD(arg0, s32 *, 4));
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = 2;
        M2C_FIELD(arg0, s8 *, 0x15) = 1;
    }
    return 0;
}
