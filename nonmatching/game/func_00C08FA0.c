/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00949D10(void *);                          /* extern */
s32 func_0094A450(void *, M2C_UNK);                 /* extern */
s32 func_00952420(void *, s32, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00952760(void *);                          /* extern */
s32 func_00952910(u16);                             /* extern */
s32 func_00952A50(s32);                             /* extern */
s32 func_00962BC0(void *);                          /* extern */
M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009909D0(void *, M2C_UNK);                 /* extern */
s32 func_009916B0(void *, u32);                     /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
M2C_UNK func_00C04830(void *, M2C_UNK, s32);        /* extern */
extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];
extern char D_00CB5382[];

s32 func_00C08FA0(void *arg0) {
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u32 temp_a1;
    u32 temp_v0;
    u32 var_v0;

    var_s1 = func_00952910(M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF;
    if ((func_00952A50(var_s1) & 0xFF) >= 0x51) {
        var_s1 = func_00952760(arg0) & 0xFFFF;
    }
    func_0096D0A0(arg0, var_s1, 0);
    if (func_0094A450(arg0, 1) == 0) {
        temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U);
        temp_a1 = 0x63 - temp_v0;
        var_s0 = (((0x63 - temp_v0) / 30) + (temp_a1 >> 0x1F)) & 0xFF;
        switch ((s32) (*(u8 *)D_00CB5382)) {                 /* irregular */
        case 2:
            temp_v1 = (var_s0 & 0xFF) * 3;
            var_v0 = (u32) (temp_v1 >> 2);
            if (temp_v1 < 0) {
                var_v0 = (u32) ((s32) (temp_v1 + 3) >> 2);
            }
block_19:
            var_s0 = var_v0 & 0xFF;
            break;
        default:
            var_s0 = 0;
            break;
        case 3:
            var_v0 = (u32) (var_s0 & 0xFF) >> 1;
            goto block_19;
        }
        temp_s3 = func_009916B0(arg0, temp_a1) & 0xFF;
        if (temp_s3 == 0) {
            if (func_009909D0(arg0, 0x100000) == 0) {
                if (func_00952420(arg0, var_s1, 0x3000, 0x240000) == 0) {
                    goto block_32;
                }
            } else {
block_32:
                var_s0 = 0;
            }
            if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
                var_s0 = 0;
            }
        }
        if (temp_s3 >= (var_s0 & 0xFF)) {
            if (func_00949D10(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0xB4) = 0x8000;
                return 1;
            }
            goto block_26;
        }
block_26:
        return 2;
    }
    func_00C04830(arg0, 0, func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)));
    if (func_00962BC0(arg0) < 2) {
        if ((func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
        }
        func_00C04830(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), 6, 0xFF);
    }
    return 1;
}
