/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0085C0A0();                            /* extern */
M2C_UNK func_00915000(M2C_UNK, f32 *, u8 *, u8 *, u8 *, M2C_UNK, u8, u8); /* extern */
M2C_UNK func_00C00440(M2C_UNK, u8, s16 *, u16 *, u16 *); /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E828[];
extern char D_005900E8[];
extern char D_00591E4D[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00591E79[];
extern char D_00591F10[];
extern char D_00591F40[];
extern char D_00592370[];
extern char D_005924B0[];
extern char D_005924B8[];
extern char D_00592700[];
extern char D_00592701[];
extern char D_008B1454[];
extern char D_008B145C[];
extern char D_008B1464[];
extern char D_008B14F2[];
extern char D_008B14F4[];
extern char D_008B1568[];
extern char D_008B1569[];

s32 func_0085C460(void *arg0) {
    s32 var_a0;
    u16 temp_a1;
    u8 temp_a7;
    u8 var_v1;
    void *temp_v1;

    (*(s8 *)D_008B1569) = 0;
    (*(s8 *)D_008B1568) = 0;
    func_0085C0A0();
    (*(u8 *)D_00592701) = M2C_FIELD(arg0, u8 *, 0x31C);
    temp_a7 = M2C_FIELD(arg0, u8 *, 0x320);
    (*(u8 *)D_00591E4D) = temp_a7;
    (*(u8 *)D_005924B8) = M2C_FIELD(arg0, u8 *, 0x31D);
    (*(u8 *)D_00591E79) = M2C_FIELD(arg0, u8 *, 0x321);
    (*(u8 *)D_00591F10) = M2C_FIELD(arg0, u8 *, 0x31E);
    (*(u8 *)D_00592370) = M2C_FIELD(arg0, u8 *, 0x31F);
    (*(u8 *)D_00591F40) = M2C_FIELD(arg0, u8 *, 0x322);
    if ((*(u8 *)D_00592701) != 0xFF) {
        var_a0 = (s32) (*(u8 *)D_00592701) % 23;
    } else {
        var_a0 = 1;
    }
    temp_v1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if ((*(u8 *)D_00591F10) != 0) {
        var_v1 = M2C_FIELD(temp_v1, u8 *, 0x12) ^ 1;
    } else {
        var_v1 = M2C_FIELD(temp_v1, u8 *, 0x12);
    }
    (*(u8 *)D_005924B0) = var_v1;
    (*(f32 *)D_00591E58) = M2C_FIELD(arg0, f32 *, 0x324);
    (*(f32 *)D_00591E5C) = M2C_FIELD(arg0, f32 *, 0x328);
    (*(f32 *)D_00591E60) = M2C_FIELD(arg0, f32 *, 0x32C);
    func_00915000(0x37, ((void *)D_00591E58), ((void *)D_00591E79), ((void *)D_005924B8), ((void *)D_00591E4D), 0xFF, (*(u8 *)D_00592701), temp_a7);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x338);
    (*(s16 *)D_008B1464) = 0;
    (*(s32 *)D_008B145C) = (s32) temp_a1;
    (*(s32 *)D_008B1454) = (s32) temp_a1;
    (*(u16 *)D_0058E828) = M2C_FIELD(arg0, u16 *, 0x33C);
    (*(u16 *)D_005900E8) = M2C_FIELD(arg0, u16 *, 0x33E);
    (*(s16 *)D_008B14F2) = M2C_FIELD(arg0, s16 *, 0x33A);
    (*(s32 *)D_008B14F4) = M2C_FIELD(arg0, s32 *, 0x330);
    func_00C00440(2, (*(u8 *)D_00592700), ((void *)D_008B14F2), ((void *)D_005900E8), ((void *)D_0058E828));
    return 0;
}
