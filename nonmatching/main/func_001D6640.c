/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D61A0(M2C_UNK);                         /* extern */
void *func_001D6440(s32);                           /* extern */
s32 func_001D7F80(s32);                             /* extern */
extern M2C_UNK func_001D64B0;
extern M2C_UNK func_001D6600;

void *func_001D6640(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    void *temp_v0;

    if ((arg0 != 0) && (arg1 != 0)) {
        temp_v0_2 = func_001D61A0(2);
        if (temp_v0_2 != 0) {
            temp_v0 = func_001D6440(arg0);
            M2C_FIELD(temp_v0, s32 *, 0) = 2;
            M2C_FIELD(temp_v0, s32 *, 4) = arg2;
            M2C_FIELD(temp_v0, s32 *, 8) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_001D7F80(arg1);
            M2C_FIELD(temp_v0, M2C_UNK **, 0x14) = &func_001D64B0;
            M2C_FIELD(temp_v0, M2C_UNK **, 0x18) = &func_001D6600;
            return temp_v0;
        }
    }
    return NULL;
}
