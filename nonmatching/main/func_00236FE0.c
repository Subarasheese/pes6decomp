/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
void func_00236FE0(void) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v1;
    void *var_a0;

    temp_s0 = func_00229460();
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        var_a2 = 0;
        var_a0 = temp_s0;
        do {
            M2C_FIELD(var_a0, s16 *, 0x4BA6) = 0;
            var_a2 += 8;
            M2C_FIELD(var_a0, s16 *, 0x4BA8) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BAA) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BAB) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BAC) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BAD) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BB2) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BB4) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BB6) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BB7) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BB8) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BB9) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BBE) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BC0) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BC2) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BC3) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BC4) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BC5) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BCA) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BCC) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BCE) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BCF) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BD0) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BD1) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BD6) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BD8) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BDA) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BDB) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BDC) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BDD) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BE2) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BE4) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BE6) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BE7) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BE8) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BE9) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BEE) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BF0) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BF2) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BF3) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BF4) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BF5) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BFA) = 0;
            M2C_FIELD(var_a0, s16 *, 0x4BFC) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BFE) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4BFF) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4C00) = 0;
            M2C_FIELD(var_a0, s8 *, 0x4C01) = 0;
            var_a0 += 0x60;
        } while (var_a2 < 0x69);
        var_a1 = 0;
        temp_v1 = (var_a2 * 0xC) + temp_s0;
        M2C_FIELD(temp_v1, s16 *, 0x4BA6) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x4BA8) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x4BAA) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x4BAB) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x4BAC) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x4BAD) = 0;
        do {
            temp_a0 = temp_s0 + var_a1;
            M2C_FIELD(temp_a0, s8 *, 0x2974) = 0;
            var_a1 += 8;
            M2C_FIELD(temp_a0, s8 *, 0x2975) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2976) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2977) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2978) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2979) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x297A) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x297B) = 0;
        } while (var_a1 < 0x940);
        var_a1_2 = 0;
        do {
            temp_a0_2 = temp_s0 + var_a1_2;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B4) = 0;
            var_a1_2 += 8;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B5) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B6) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B7) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B8) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32B9) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32BA) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x32BB) = 0;
        } while (var_a1_2 < 0xA1A);
        M2C_FIELD((var_a1_2 + temp_s0), s8 *, 0x32B4) = 0;
        M2C_FIELD((var_a1_2 + 1 + temp_s0), s8 *, 0x32B4) = 0;
    }
}
