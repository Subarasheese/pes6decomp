/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00907230();                            /* extern */
M2C_UNK func_00984E90();                            /* extern */
M2C_UNK func_00A99360(void *, M2C_UNK);             /* extern */
extern char Pes6MatchPlayers[];
extern char D_00592294[];
extern char D_005926FD[];
extern char D_00592800[];
extern char D_008B142D[];

void func_002B0B40(void) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    u8 temp_v1;

    if ((*(s8 *)D_008B142D) == 0) {
        if ((s32) (*(u8 *)D_00592294) > 0) {
            (*(u8 *)D_00592294) -= 1;
        }
        func_00984E90();
        func_00907230();
        if ((*(u8 *)D_005926FD) == 0) {
            var_s0 = 0;
            do {
                temp_v1 = M2C_FIELD((((void *)D_00592800) + ((var_s0 & 0xFF) * 0x28)), u8 *, 0x10);
                if (temp_v1 != 0) {
                    temp_v1_2 = temp_v1 & 0xFF;
                    if (temp_v1_2 < 0x17) {
                        if (temp_v1_2 == 0xFF) {
                            var_a0 = 1;
                        } else {
                            var_a0 = temp_v1_2 % 23;
                        }
                        func_00A99360(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), -0xC8);
                    }
                }
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < 8);
        }
    }
}
