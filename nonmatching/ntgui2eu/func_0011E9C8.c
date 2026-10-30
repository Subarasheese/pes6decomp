/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134388(s32);                         /* extern */
extern char D_011C8A40[];

void func_0011E9C8(s32 arg0) {
    M2C_UNK (*temp_v0)(s32, s32 *);
    s32 *temp_s0_2;
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = arg0 * 0xB4;
    temp_v0 = M2C_FIELD((((void *)D_011C8A40) + temp_s0), M2C_UNK (**)(s32, s32 *), 0xB0);
    temp_s1 = temp_s0 + ((void *)D_011C8A40);
    if (temp_v0 != NULL) {
        temp_v0(*temp_s1, temp_s1);
    }
    temp_s0_2 = temp_s0 + (((void *)D_011C8A40) + 0x30);
    temp_a0 = *temp_s0_2;
    if (temp_a0 >= 0) {
        func_00134388(temp_a0);
        *temp_s0_2 = -1;
    }
    *temp_s1 = 0;
}
