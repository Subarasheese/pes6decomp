/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00A14EC0(void *, void *, u8);          /* extern */
M2C_UNK func_00A1DB30(void *);                      /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00591E4C[];

void func_00A0AE50(void *arg0, M2C_UNK arg1, u8 arg2) {
    s32 var_a0;
    s32 var_a1;
    u16 temp_a0;
    u8 var_a2;

    var_a2 = arg2;
    temp_a0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    if ((temp_a0 != 0xB) && (temp_a0 != 0xF)) {
        if ((*(u8 *)D_00591E4C) != 0) {
            if ((*(u8 *)D_00591E19) != 0xFF) {
                var_a2 = M2C_FIELD(arg0, u8 *, 0x13);
                if ((*(u8 *)D_00591E19) != 0xFF) {
                    var_a1 = (s32) (*(u8 *)D_00591E19) % 23;
                } else {
                    var_a1 = 1;
                }
                if (var_a2 == M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), u8 *, 0x13)) {
                    var_a0 = 0;
                } else {
                    goto block_9;
                }
            } else {
block_9:
                var_a0 = 1;
            }
            if (var_a0 == 1) {
                goto block_11;
            }
        }
    } else {
block_11:
        func_00A14EC0(arg0, arg0, var_a2);
        func_00A1DB30(arg0);
    }
}
