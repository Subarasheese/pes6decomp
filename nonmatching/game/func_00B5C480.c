/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B94F50(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BDBB60(f32, f32);                        /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CBCDE2[];

s32 func_00B5C480(void) {
    s32 var_a0;

    if ((func_009E1C90(1) & 0xFF) == 0xC) {
        if (func_00C01090(0x13) != 0) {
            goto block_13;
        }
        goto block_11;
    }
    if ((*(u8 *)D_00CBCDE2) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00CBCDE2) % 23;
    }
    if (func_00B94F50() != 0) {
        return 0;
    }
    if ((M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s16 *, 0x14) * func_00BDBB60((*(f32 *)D_00591E58), (*(f32 *)D_00591E60))) < 0) {
block_13:
        return 1;
    }
block_11:
    return 0;
}
