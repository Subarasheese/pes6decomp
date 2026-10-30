/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0032EA30();                            /* extern */
extern char D_005EFFA0[];
extern char D_005F0968[];

s32 func_0032E8D0(u32 arg0) {
    s32 temp_a1;
    s32 temp_a2_3;
    s32 temp_v1;
    u32 *temp_a2;
    u32 temp_a0;
    u32 temp_a2_2;

    temp_v1 = (*(s32 *)D_005F0968) - 1;
    (*(s32 *)D_005F0968) = temp_v1;
    if (temp_v1 == 0) {
        func_0032EA30();
    }
    temp_a2 = M2C_FIELD(((void *)D_005EFFA0), u32 **, 0x9CC);
    M2C_FIELD(((void *)D_005EFFA0), u32 **, 0x9CC) = (u32 *) (temp_a2 + 4);
    temp_a2_2 = *temp_a2;
    temp_a2_3 = temp_a2_2 ^ (temp_a2_2 >> 0xB);
    temp_a1 = temp_a2_3 ^ ((temp_a2_3 << 7) & 0x9D2C5680);
    temp_a0 = temp_a1 ^ ((temp_a1 << 0xF) & 0xEFC60000);
    return (u32) ((u32) (temp_a0 ^ (temp_a0 >> 0x12)) % 100U) < arg0;
}
