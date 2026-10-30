/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277220(void *, M2C_UNK);                 /* extern */
s32 func_009E1C90(M2C_UNK, M2C_UNK *, u8);          /* extern */
extern char D_00591BE4[];
extern char Pes6MatchSquads[];

s32 func_00BF82A0(void *arg0) {
    s32 var_v0;
    u8 temp_a2;
    u8 var_v0_2;
    void *temp_s0;

    temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_s0 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900)) + 0xF0;
    if ((func_009E1C90(1, ((void *)Pes6MatchSquads), temp_a2) & 0xFF) != 1) {
        if (func_00277220(temp_s0, 1) != 0) {
            if (func_00277220(temp_s0, 1) == 1) {
                var_v0 = (*(u8 *)D_00591BE4) * 6;
            } else {
                var_v0_2 = (*(u8 *)D_00591BE4) * 3;
                goto block_11;
            }
        } else {
            var_v0_2 = (*(u8 *)D_00591BE4);
            goto block_11;
        }
    } else if (func_00277220(temp_s0, 1) != 0) {
        if (func_00277220(temp_s0, 1) == 1) {
            var_v0_2 = (*(u8 *)D_00591BE4) * 3;
block_11:
            var_v0 = var_v0_2 * 4;
        } else {
            var_v0 = (*(u8 *)D_00591BE4) * 0x11;
        }
    } else {
        var_v0 = (*(u8 *)D_00591BE4) * 7;
    }
    return var_v0;
}
