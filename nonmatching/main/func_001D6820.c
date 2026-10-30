/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001D61A0(M2C_UNK, s32);                    /* extern */
void *func_001D6440(s32);                           /* extern */
s32 func_001EDFC0();                                /* extern */
extern M2C_UNK func_001D66F0;
extern M2C_UNK func_001D67B0;

void *func_001D6820(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0_2 = func_001D61A0(2, arg1);
        if (temp_v0_2 != 0) {
            temp_v0 = func_001D6440(arg0);
            M2C_FIELD(temp_v0, s32 *, 0) = 1;
            M2C_FIELD(temp_v0, s32 *, 4) = arg1;
            M2C_FIELD(temp_v0, s32 *, 8) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_001EDFC0();
            M2C_FIELD(temp_v0, M2C_UNK **, 0x14) = &func_001D66F0;
            M2C_FIELD(temp_v0, M2C_UNK **, 0x18) = &func_001D67B0;
            return temp_v0;
        }
    }
    return NULL;
}
