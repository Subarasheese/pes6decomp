/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DF460(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if ((M2C_FIELD(arg0, u8 *, 0x48) != M2C_FIELD(arg1, u8 *, 0)) || (M2C_FIELD(arg0, u8 *, 0x49) != M2C_FIELD(arg1, u8 *, 1)) || (M2C_FIELD(arg0, u8 *, 0x4A) != M2C_FIELD(arg1, u8 *, 2)) || (M2C_FIELD(arg0, u8 *, 0x4B) != M2C_FIELD(arg1, u8 *, 3))) {
            M2C_FIELD(arg0, u8 *, 0x48) = (u8) M2C_FIELD(arg1, u8 *, 0);
            M2C_FIELD(arg0, u8 *, 0x49) = (u8) M2C_FIELD(arg1, u8 *, 1);
            M2C_FIELD(arg0, u8 *, 0x4A) = (u8) M2C_FIELD(arg1, u8 *, 2);
            M2C_FIELD(arg0, u8 *, 0x4B) = (u8) M2C_FIELD(arg1, u8 *, 3);
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 4);
        }
    }
}
