/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278C20(int);
extern void func_001B3C10(int);
extern int func_002DCA30(void);
extern u8 func_00BF6270(void);
extern void func_00BBB960(u32);
extern void func_00B364E0(void);
M2C_UNK func_00278B80(M2C_UNK, u8, M2C_UNK);        /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00849420(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, s32, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00973EC0(void *, M2C_UNK);             /* extern */
void *func_00B2A420(s32);                           /* extern */
M2C_UNK func_00B37240();                            /* extern */
M2C_UNK func_00B37260();                            /* extern */
M2C_UNK func_00B3D420();                            /* extern */
M2C_UNK func_00B42A20();                            /* extern */
M2C_UNK func_00B82670();                            /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
M2C_UNK func_00C379F0();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591DB4[];
extern char D_00591F12[];
extern char D_005924B0[];
extern char D_005926D8[];
extern char D_008B1180[];
extern char D_008B145C[];
extern char D_008B14F2[];

void func_00B3CF80(void) {
    M2C_UNK *var_s0;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0;
    void *temp_v0_2;

    if (func_002DCA30() != 0) {
        if (func_00BF6270() == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = func_00BF6270() % 23;
        }
        temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (M2C_FIELD(temp_v0, u8 *, 0x12) == 0) {
            var_v0 = 0;
        } else {
            var_v0 = 0x40;
        }
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x11) | var_v0;
        if (func_00C01090(1) == 0) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 0x80;
        }
        (*(f32 *)D_005926D8) = (f32) (*(s16 *)D_008B14F2);
        func_00853B50(1, 2, (temp_s0 | var_v0_2) & 0xFF, 0, *func_008472D0(), 0, 0, 0);
        func_00BBB960((*(u32 *)D_008B145C));
        var_s1 = 0;
        var_s0 = ((void *)D_008B1180);
        do {
            if (var_s1 == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = var_s1 % 23;
            }
            func_00849420(((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240), var_s0, 0, 1);
            var_s1 += 1;
            var_s0 += 0x1A;
        } while (var_s1 < 0x17);
        var_s0_2 = 0;
        do {
            if (var_s0_2 == 0xFF) {
                var_a0_3 = 1;
            } else {
                var_a0_3 = var_s0_2 % 23;
            }
            func_00973EC0(((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240), 1);
            var_s0_2 += 1;
        } while (var_s0_2 < 0x17);
    }
    func_00B37260();
    func_00B37240();
    func_00B82670();
    func_00C379F0();
    func_00BA92A0(func_00BF6270());
    (*(s8 *)D_00591F12) = 0;
    (*(s8 *)D_00591DB4) = 0;
    func_00B42A20();
    func_00B364E0();
    func_00B3D420();
    var_s1_2 = 0;
    do {
        temp_v0_2 = func_00B2A420(var_s1_2);
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s8 *, 0x66) = 3;
        if (M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), u8 *, 0x12) == (*(u8 *)D_005924B0)) {
            if (var_s1_2 == func_00BF6270()) {
                M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s8 *, 0x53) = 1;
            } else {
                M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s8 *, 0x53) = 2;
            }
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 0x17);
    func_001B3C10((s32) (*(u8 *)D_005924B0));
    func_00278C20(1);
    func_00278B80(8, (*(u8 *)D_00591BE4), 0x3F19999A);
}
