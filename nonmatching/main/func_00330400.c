/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00335370(void);
extern int func_003109B0(void);
extern u8 func_0030E540(s32);
extern char Pes6MatchPlayers[];

s32 func_00330400(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    u8 temp_s3;
    u8 temp_s3_2;
    u8 temp_s3_3;

    switch (arg2) {                                 /* irregular */
    case 4:
        if ((func_003109B0() & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_003109B0() & 0xFF) % 23;
        }
        temp_s3 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x12);
        if (temp_s3 == M2C_FIELD(func_00335370(), s32 *, 0xFFC)) {
            *arg1 = -1;
            return 0;
        }
    default:
block_23:
        temp_v0 = M2C_FIELD(((arg2 * 4) + arg0), s32 *, 0x104);
        *arg1 = temp_v0;
        return ~temp_v0 != 0;
    case 3:
    case 1:
        if (func_0030E540(0) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = func_0030E540(0) % 23;
        }
        temp_s3_2 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), u8 *, 0x12);
        if (temp_s3_2 != M2C_FIELD(func_00335370(), s32 *, 0xFFC)) {
            *arg1 = -1;
            return 0;
        }
        goto block_23;
    case 2:
        if (func_0030E540(0) == 0xFF) {
            var_a0_3 = 1;
        } else {
            var_a0_3 = func_0030E540(0) % 23;
        }
        temp_s3_3 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240)), u8 *, 0x12);
        if (temp_s3_3 == M2C_FIELD(func_00335370(), s32 *, 0xFFC)) {
            *arg1 = -1;
            return 0;
        }
        goto block_23;
    }
}
