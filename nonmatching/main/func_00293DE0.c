/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2493[];

void func_00293DE0(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_a2;

    temp_a2 = M2C_FIELD(arg1, u8 *, 2);
    if (M2C_FIELD(arg1, u8 *, 5) == 0) {
        temp_v1 = temp_a2 & 0xFF;
        if ((temp_v1 >= 4) && (temp_v1 < 0xB)) {
            goto block_9;
        }
        M2C_FIELD(arg0, s8 *, 0x18) = 1;
    } else {
        temp_v1_2 = temp_a2 & 0xFF;
        if ((temp_v1_2 >= 4) && (temp_v1_2 < 0xB)) {
            if ((*(s8 *)D_005A2493) <= 0) {
                M2C_FIELD(arg0, s8 *, 0x18) = 1;
            } else {
                goto block_9;
            }
        } else if ((*(s8 *)D_005A2493) > 0) {
            M2C_FIELD(arg0, s8 *, 0x18) = 1;
        } else {
block_9:
            M2C_FIELD(arg0, s8 *, 0x18) = 0;
        }
    }
}
