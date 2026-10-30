/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002736F0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002B3F60(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0085C0A0(void *);                      /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00B789F0();                                /* extern */
M2C_UNK func_00BC8DF0(s16 *, s32, s16, void *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_00C00440(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00C18760(M2C_UNK);                     /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DCD[];
extern char D_00591E00[];
extern char D_00591E0C[];
extern char D_00591E10[];
extern char D_00591F12[];
extern char D_00592700[];
extern char D_008B1454[];
extern char D_008B145C[];
extern char D_008B1464[];
extern char D_008B14F2[];
extern char D_008B1568[];
extern char D_008B1569[];
extern char D_00CBD2C8[];
extern M2C_UNK func_0085C410;

s32 func_0085C1E0(void *arg0) {
    M2C_UNK *var_a4;
    M2C_UNK var_a0;
    s16 temp_a2;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_t1;
    s32 var_t2;
    u8 temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_v0;
    void *var_a3;

    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        if ((s32) M2C_FIELD(arg0, u8 *, 0x320) >= (s32) (*(u8 *)D_00591DCD)) {
            func_0085C0A0(arg0);
            (*(s8 *)D_008B1569) = 0;
            (*(s8 *)D_008B1568) = 0;
            (*(s8 *)D_00591F12) = 0;
            (*(s16 *)D_00CBD2C8) = 0;
            (*(s16 *)D_00591E10) = 0;
            (*(u8 *)D_00591DCD) = M2C_FIELD(arg0, u8 *, 0x320);
            if (M2C_FIELD(arg0, s32 *, 0x324) != 0) {
                switch ((*(u8 *)D_00591DCD)) {               /* irregular */
                case 2:
                    var_a0 = 0xE9;
                    break;
                case 1:
                    var_a0 = 0xDA;
                    break;
                case 0:
                    var_a0 = 0xAD;
                    break;
                default:
                case 3:
                    var_a0 = 0xF8;
                    break;
                }
                func_00C18760(var_a0);
                (*(s16 *)D_00591E10) = 0;
                (*(s32 *)D_00591E0C) = (s32) ((s64) (0 << 0x30) >> 0x30);
            }
            (*(s32 *)D_008B145C) = (s32) M2C_FIELD(arg0, u16 *, 0x332);
            func_002B3F60(arg0 + 0x334, &func_0085C410, 1, 0);
            var_a6 = 1;
            var_a7 = 0;
            var_a5 = 0;
            var_a4 = ((void *)D_00591E00);
            var_a3 = arg0;
            do {
                if (var_a6 == 0xFF) {
                    var_t1 = 1;
                } else {
                    var_t1 = (var_a5 % 23) + 1;
                }
                temp_t0 = M2C_FIELD(var_a4, u8 *, 0x4F);
                temp_v0 = ((void *)Pes6MatchPlayers) + (var_t1 * 0x240);
                if ((s32) temp_t0 < 0x17) {
                    if (temp_t0 == 0xFF) {
                        var_t2 = 1;
                    } else {
                        var_t2 = (s32) temp_t0 % 23;
                    }
                    temp_t1 = arg0 + var_a7;
                    temp_t2 = ((void *)Pes6MatchPlayers) + (var_t2 * 0x240);
                    M2C_FIELD(temp_t2, s16 *, 0x30) = (s16) M2C_FIELD(temp_t1, u8 *, 0x31C);
                    M2C_FIELD(temp_t2, s32 *, 0x98) = (s32) M2C_FIELD(temp_t1, u8 *, 0x31E);
                }
                var_a7 += 1;
                var_a6 += 0xB;
                var_a5 += 0xB;
                var_a4 += 2;
                M2C_FIELD(temp_v0, s16 *, 0x1CE) = (s16) M2C_FIELD(var_a3, s16 *, 0x328);
                M2C_FIELD(temp_v0, s16 *, 0x1D0) = (s16) M2C_FIELD(var_a3, s16 *, 0x32C);
                var_a3 += 2;
            } while (var_a7 < 2);
            temp_a2 = M2C_FIELD(arg0, s16 *, 0x330);
            (*(s16 *)D_008B14F2) = temp_a2;
            (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
            (*(s16 *)D_008B1464) = 0;
            func_00BC8DF0(((void *)D_008B14F2), (*(s32 *)D_008B145C), temp_a2, var_a3, var_a4, var_a5, var_a6, var_a7);
            func_002736F0(func_00B789F0(), 1);
            func_00C00440(1, (*(u8 *)D_00592700));
        }
    }
    return 0;
}
