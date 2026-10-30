/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
void *func_008C5050(M2C_UNK, void *);               /* extern */

void func_008E1BA0(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_v1;
    void *temp_a1;
    void *temp_v1_2;

    temp_v1 = arg1 & 0xFF;
    temp_a1 = temp_v1 + arg0;
    temp_v1_2 = (temp_v1 * 4) + arg0;
    M2C_FIELD(temp_a1, u8 *, 0x20) = arg2;
    if (M2C_FIELD(temp_v1_2, void **, 0x40) != NULL) {
        if (M2C_FIELD(temp_a1, u8 *, 0x20) == 0) {
            func_001DF460(M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x40), void **, 0xC), func_008C5050(2, temp_a1));
        } else {
            func_001DF460(M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x40), void **, 0xC), func_008C5050(1, temp_a1));
        }
    }
}
