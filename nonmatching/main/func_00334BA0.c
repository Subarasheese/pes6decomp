/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00326070(void *);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_002216F0(u16, M2C_UNK);                /* extern */
extern char Pes6MatchSquads[];

s32 func_00334BA0(void *arg0, s32 arg1, void *arg2) {
    s32 var_s0;
    s32 var_s1;
    u16 temp_a0;

    func_001C48E8(arg0 + 0x128, -1, 0xE00);
    if (arg1 == 5) {
        if (func_00326070(arg2) != 0) {
            var_s1 = 0;
            var_s0 = 0;
            do {
                temp_a0 = M2C_FIELD((var_s0 + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, s32 *, 0xFFC) * 0x6900))), u16 *, 0x46);
                if (temp_a0 != 0) {
                    func_002216F0(temp_a0, 2);
                }
                var_s1 += 1;
                var_s0 += 0x348;
            } while (var_s1 < 0x20);
            return 1;
        }
        return 0;
    }
    return 0;
}
