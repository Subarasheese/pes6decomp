/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00287600(void);
extern void func_00278180(void);
extern void func_00270DE0(u8);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00263210(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_00263560(s32, s32);                    /* extern */
M2C_UNK func_002636C0();                            /* extern */
M2C_UNK func_00CDCCE0(s32);                         /* extern */
extern char D_0058D3C0[];
extern char Pes6MatchPlayers[];
extern char D_00591DD9[];
extern char D_00591EF6[];
extern char D_00591EF7[];
extern char D_00591EFC[];
extern char D_00591F11[];
extern char D_00592810[];
extern char D_00592838[];
extern char D_00592860[];
extern char D_00592888[];
extern char D_005928B0[];
extern char D_005928D8[];
extern char D_00592900[];
extern char D_00592928[];

void func_00263F20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    u32 temp_a1;
    void *temp_s0;

    func_002636C0();
    func_00263560(arg0, arg1);
    func_00287600();
    func_00263210(((void *)D_0058D3C0), arg0, arg2);
    if (arg0 == 4) {
        func_00CDCCE0(arg1);
    }
    (*(s8 *)D_00591DD9) = 0;
    (*(s8 *)D_00592810) = 0xFF;
    (*(s8 *)D_00591EF7) = 0;
    (*(s8 *)D_00592860) = 0xFF;
    (*(s8 *)D_00591EF6) = 0;
    (*(s8 *)D_005928B0) = 0xFF;
    (*(s8 *)D_00591EFC) = 0;
    (*(s8 *)D_00592900) = 0xFF;
    (*(s8 *)D_00592838) = 0xFF;
    M2C_FIELD(((void *)D_0058D3C0), s32 *, 0x44) = arg3;
    (*(s8 *)D_00592888) = 0xFF;
    (*(s8 *)D_005928D8) = 0xFF;
    (*(s8 *)D_00592928) = 0xFF;
    func_00270DE0(0U);
    (*(s8 *)D_00591F11) = 0;
    func_00278180();
    var_s1 = 0;
    do {
        if (var_s1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s1 % 23;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        func_00209A00(M2C_FIELD(temp_s0, void **, 4), 0, 0);
        M2C_FIELD(temp_s0, s32 *, 0xE4) = 0;
        temp_a1 = (u32) var_s1 >> 0x1F;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 9) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x66) = 0;
        temp_v1 = var_s1 / 6;
        var_s1 += 1;
        M2C_FIELD(temp_s0, s8 *, 0x12) = (s8) ((temp_v1 >> 1) + temp_a1);
    } while (var_s1 < 0x17);
}
