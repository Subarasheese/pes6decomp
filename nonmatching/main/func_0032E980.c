/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0032EA30();                            /* extern */
extern char D_005EFFA0[];
extern char D_005F0968[];

u32 func_0032E980(u32 arg0) {
    s32 temp_a0;
    s32 temp_a1_3;
    s32 temp_v1_2;
    u32 *temp_a1;
    u32 temp_a1_2;
    u32 temp_v1;

    temp_v1_2 = (*(s32 *)D_005F0968) - 1;
    (*(s32 *)D_005F0968) = temp_v1_2;
    if (temp_v1_2 == 0) {
        func_0032EA30();
    }
    if (arg0 != 0) {
        temp_a1 = M2C_FIELD(((void *)D_005EFFA0), u32 **, 0x9CC);
        M2C_FIELD(((void *)D_005EFFA0), u32 **, 0x9CC) = (u32 *) (temp_a1 + 4);
        temp_a1_2 = *temp_a1;
        temp_a1_3 = temp_a1_2 ^ (temp_a1_2 >> 0xB);
        temp_a0 = temp_a1_3 ^ ((temp_a1_3 << 7) & 0x9D2C5680);
        temp_v1 = temp_a0 ^ ((temp_a0 << 0xF) & 0xEFC60000);
        return (u32) (temp_v1 ^ (temp_v1 >> 0x12)) % arg0;
    }
    return 0U;
}
