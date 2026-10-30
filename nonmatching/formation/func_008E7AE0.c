/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
void *func_008C5050(s32, s32);                      /* extern */

void func_008E7AE0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v1;
    void *temp_v1_2;

    temp_a1 = arg1 & 0xFF;
    temp_v1 = (temp_a1 + *arg0) & 0xFF;
    if (temp_v1 < 0xA) {
        temp_v1_2 = (temp_v1 * 4) + arg0;
        if (M2C_FIELD(temp_v1_2, void **, 0x64) != NULL) {
            func_001DF460(M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x64), void **, 0xC), func_008C5050(arg2, temp_a1));
        }
    }
}
