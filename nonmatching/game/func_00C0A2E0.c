/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952910(void *, u16);                     /* extern */
s32 func_00958AD0(void *, u8, M2C_UNK);             /* extern */
M2C_UNK func_00961AB0(void *, u8, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B32D0(u16, u16, M2C_UNK);               /* extern */
M2C_UNK func_00C04830(void *, M2C_UNK, u8);         /* extern */
s32 func_00C0B420(void *, void *, void *);          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_00C0A2E0(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 *var_s0;
    u8 temp_s0;
    u8 temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s2 = M2C_FIELD(arg1, u8 *, 0x28);
    if ((*(u8 *)D_00591E4C) != 0) {
        temp_v0 = ((temp_s2 & 0xFF) * 2) + arg0;
        var_s0 = temp_v0 + 0x128;
        var_v0 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x128));
    } else {
        temp_v0_2 = ((temp_s2 & 0xFF) * 2) + arg0;
        var_s0 = temp_v0_2 + 0x128;
        var_v0 = func_009B3070(func_009B32D0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26), 0x2000), M2C_FIELD(temp_v0_2, u16 *, 0x128));
    }
    temp_v1 = temp_s2 & 0xFF;
    if (temp_v1 == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = temp_v1 % 23;
    }
    if (func_00C0B420(arg0, ((void *)Pes6MatchPlayers) + (var_v1 * 0x240), arg1) != 0) {
        return 1;
    }
    if ((var_v0 & 0xFFFF & 0xFFFF) >= 0x3000) {
        func_0096D0A0(arg0, func_00952910(arg0, *var_s0) & 0xFFFF, 0);
        return 2;
    }
    temp_s0 = func_00958AD0(arg0, temp_s2, 0) & 0xFF;
    if (temp_s0 == 0) {
        func_00961AB0(arg0, temp_s2, 3, 0x1000, 0);
    } else {
        func_00961AB0(arg0, temp_s0, 0, 0x4000, 0);
        temp_v1_2 = temp_s0 & 0xFF;
        if (temp_v1_2 == 0xFF) {
            var_v1_2 = 1;
        } else {
            var_v1_2 = temp_v1_2 % 23;
        }
        func_00C04830(((void *)Pes6MatchPlayers) + (var_v1_2 * 0x240), 2, temp_s2);
    }
    return 4;
}
