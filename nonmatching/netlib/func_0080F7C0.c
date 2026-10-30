/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_00154080(M2C_UNK);                         /* extern */
M2C_UNK func_001BE5B0(M2C_UNK);                     /* extern */
M2C_UNK func_00309440(M2C_UNK);                     /* extern */
M2C_UNK func_00309460(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00361E90(M2C_UNK, s32);                /* extern */
s32 func_00825610();                                /* extern */
s32 func_0083C4D0();                                /* extern */
s32 func_008428B0();                                /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_00858450(M2C_UNK);                         /* extern */
s32 func_00858580(M2C_UNK);                         /* extern */
s32 func_00858790(s16);                             /* extern */
s32 func_008588C0(M2C_UNK);                         /* extern */
s32 func_008589F0(s16);                             /* extern */
M2C_UNK func_00859460(M2C_UNK *);                   /* extern */
M2C_UNK func_008B77A0();                            /* extern */
extern void *D_003EA26C;
extern char D_008B21C0[];

s8 func_0080F7C0(void) {
    M2C_UNK var_s0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;

    temp_s3 = func_008589F0(*func_008472D0());
    temp_s2 = func_008588C0(-1);
    temp_s1 = func_00858790(*func_008472D0());
    temp_s0 = func_00858450(-1);
    temp_v0 = func_00858580(-1);
    if ((temp_s3 != 0) && (temp_s2 != 0) && (temp_s0 != 0) && (temp_v0 != 0) && (temp_s1 != 0)) {
        func_001BE5B0(0);
        func_008B77A0();
        if (func_00825610() != 6) {
            if (func_0083C4D0() == 0) {
                var_s0 = 1;
            } else {
                var_s0 = 0;
            }
            func_00361E90(var_s0, func_008428B0());
        }
        func_00859460(((void *)D_008B21C0));
        func_00309440(2);
        func_00309460(2, 9);
        M2C_FIELD(D_003EA26C, s8 *, 0x28) = 0;
        M2C_FIELD(D_003EA26C, s32 *, 0x58) = (s32) ((s64) (func_00154080(0xC) << 0x20) >> 0x20);
    }
    return M2C_FIELD(D_003EA26C, s8 *, 0x3F);
}
