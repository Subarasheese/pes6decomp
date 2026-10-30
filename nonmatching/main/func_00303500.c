/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
s32 func_00992220(u8 *);                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB5F28[];
extern M2C_UNK func_003032A0;

s32 func_00303500(void *arg0) {
    s32 var_a0;
    u8 *temp_s2;
    u8 var_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    switch ((*(u8 *)D_00CB5F28)) {                           /* irregular */
    case 0x0:
        var_v0 = 0;
        break;
    case 0xFF:
        var_a0 = 1;
block_6:
        temp_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00992220(temp_s2) == 0) {
            var_v0 = 0;
        } else {
            var_v0 = *temp_s2;
        }
        break;
    default:
        var_a0 = (s32) (*(u8 *)D_00CB5F28) % 23;
        goto block_6;
    }
    M2C_FIELD(temp_s0, u8 *, 0x2C) = var_v0;
    if (M2C_FIELD(temp_s0, u8 *, 0x2C) == 0) {
        return 0;
    }
    func_00305E60(arg0, (s32) &func_003032A0);
    return 1;
}
