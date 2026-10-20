/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002E8A50(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, u8 *, 1) == M2C_FIELD(arg1, u8 *, 1)) && (M2C_FIELD(arg0, u8 *, 2) == M2C_FIELD(arg1, u8 *, 2)) && (M2C_FIELD(arg0, u8 *, 3) == M2C_FIELD(arg1, u8 *, 3)) && (M2C_FIELD(arg0, u8 *, 5) == M2C_FIELD(arg1, u8 *, 5)) && (M2C_FIELD(arg0, u8 *, 6) == M2C_FIELD(arg1, u8 *, 6)) && (M2C_FIELD(arg0, u8 *, 7) == M2C_FIELD(arg1, u8 *, 7))) {
        return 1;
    }
    return 0;
}
