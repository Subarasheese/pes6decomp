/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001ED5F0(s32);                           /* extern */

void *func_001EDB00(void *arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = func_001ED5F0(arg1);
        if (temp_v0 == NULL) {
            return NULL;
        }
        if (M2C_FIELD(arg0, void **, 0) == NULL) {
            M2C_FIELD(arg0, void **, 0) = temp_v0;
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4) = temp_v0;
            M2C_FIELD(temp_v0, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
        }
        M2C_FIELD(arg0, void **, 4) = temp_v0;
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) + 1);
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(arg0, u16 *, 0x36) = (u16) (M2C_FIELD(arg0, u16 *, 0x36) + (arg1 & 0xFFFF));
        M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 2);
        return temp_v0;
    }
    return NULL;
}
