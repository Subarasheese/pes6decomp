/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278C20(int);
extern void func_002A96D0(void);
extern void func_002727C0(s32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00277360(void *, M2C_UNK *, s32);          /* extern */
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
s32 func_00BCC980();                                /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern void *D_0058E5B4;
extern char D_0058E5C6[];
extern char D_0058E5C8[];
extern char D_00591BCE[];
extern char Pes6MatchSquads[];
extern char D_00CCB661[];

void func_00C36020(void) {
    s32 var_a0;
    s32 var_s1;
    u8 temp_a2;
    void *temp_a0;
    void *temp_s0;

    (*(s8 *)D_0058E5C6) = 0xE0;
    (*(s16 *)D_0058E5C8) = 0;
    func_00209A00(D_0058E5B4, 0x1BF, 0);
    var_s1 = 1;
    M2C_FIELD(D_0058E5B4, s8 *, 0x50) = 0;
    do {
        if (var_s1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s1 % 23;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00BDB8B0(temp_s0) != 0) {
            M2C_FIELD(temp_s0, s8 *, 0x16) = 0xFD;
            M2C_FIELD(temp_s0, s16 *, 0x18) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x66) = 0;
            func_00209A00(M2C_FIELD(temp_s0, void **, 4), 0x1BF, 0);
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x50) = 0;
        if (func_00BCC980() == 0) {
            temp_a2 = M2C_FIELD(temp_s0, u8 *, 0x12);
            temp_a0 = (M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900));
            if (M2C_FIELD(temp_a0, u8 *, 0xF8) == 1) {
                if (func_00277360(temp_a0 + 0xF0, ((void *)Pes6MatchSquads), temp_a2 * 0x69) >= 2) {
                    M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), s8 *, 0xD4) = 0;
                } else {
                    M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), s8 *, 0xD4) = 1;
                }
            }
        }
        var_s1 += 1;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x2C) = 0;
    } while (var_s1 < 0x17);
    func_00278C20(0);
    (*(u8 *)D_00591BCE) = (*(u8 *)D_00CCB661);
    func_002A96D0();
    func_002727C0(0);
    func_0027CB60(5);
}
