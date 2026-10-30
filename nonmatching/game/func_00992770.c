/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBCB36[];
extern char D_00CBCDE2[];

s32 func_00992770(s32 arg0) {
    s32 var_a1;
    s32 var_s0;

    var_s0 = 0;
    if (((func_009E1C90(1) & 0xFF) == 0xC) && (func_00BF6280() == 2) && ((func_009E1C90(3) & 0xFF) == 3) && ((*(u8 *)D_00CBCB36) == arg0)) {
        var_s0 = 2;
    } else if (((func_009E1C90(1) & 0xFF) == 0xC) && (func_00BF6280() == 2) && ((func_009E1C90(3) & 0xFF) == 5) && ((*(u8 *)D_00CBCB36) == arg0)) {
        var_s0 = 3;
    } else if (((func_009E1C90(1) & 0xFF) == 0xA) && ((*(u8 *)D_005926FE) == 4)) {
        var_a1 = 1;
        if (((*(u8 *)D_005926FD) == 1) && (arg0 == 8)) {
            if ((*(u8 *)D_00CBCDE2) != 0xFF) {
                var_a1 = (s32) (*(u8 *)D_00CBCDE2) % 23;
            }
            if (M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), void **, 4), u16 *, 0x30) == 0x40E) {
                var_s0 = 1;
            }
        }
    }
    return var_s0 & 0xFF;
}
