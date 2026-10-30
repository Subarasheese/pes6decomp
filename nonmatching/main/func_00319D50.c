/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern s32 func_003389F0(void *, s32, s32);
s32 func_00992220(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern M2C_UNK func_00319BD0;

s32 func_00319D50(void *arg0) {
    s32 var_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x44);
    if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
        goto block_13;
    }
    temp_s0 = temp_s1 + 0x74;
    if (M2C_FIELD(temp_s1, s32 *, 0x74) == 0xA) {
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x20);
        if ((temp_v1 != 3) && (temp_v1 != 2) && (temp_v1 != 1)) {
            goto block_13;
        }
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 4);
        if (temp_v1_2 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) temp_v1_2 % 23;
        }
        if (func_00992220(((void *)Pes6MatchPlayers) + (var_a0 * 0x240)) != 0) {
            func_003387D0(arg0, (s32) &func_00319BD0);
            func_003389F0(arg0, 0, (s32) M2C_FIELD(temp_s0, u8 *, 4));
            func_003389F0(arg0, 1, (s32) M2C_FIELD(temp_s1, u8 *, 0xB8));
            func_003389F0(arg0, 2, 0);
            func_003389F0(arg0, 3, 0);
            return 1;
        }
        goto block_13;
    }
block_13:
    return 0;
}
