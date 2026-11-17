/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_009832C0(void *, s32);
extern s32 func_009B3070(u16, u16);
extern s32 func_00A0C770(void *, s32);
extern s32 func_00BF7550(void *);
extern char Pes6MatchPlayers[];
extern char D_0058E5B4[];
extern char D_00CBCDE2[];

s32 func_00B7A770(void) {
    s32 var_s1;
    char *p;

    var_s1 = 0;
    p = Pes6MatchPlayers;
    if (M2C_FIELD(*(void **)D_0058E5B4, u8 *, 0x2C) == 0) {
        return 0;
    }
    if (M2C_FIELD(p, u8 *, 0) == 0 && M2C_FIELD(p, u8 *, 0x16) != 0xE1) {
        M2C_FIELD(p, u8 *, 0x16) = 0xE1;
        M2C_FIELD(p, s16 *, 0x18) = 0xD;
        return 1;
    }
    if (func_00BF7550(p) != 0) {
        if ((func_009B3070(M2C_FIELD(p, u16 *, 0x26), M2C_FIELD(p, u16 *, 0x28)) & 0xFFFF) <= 0x4000) {
            if (func_00A0C770(p, 0x300) == 0) {
                goto block_9;
            }
        }
    }
    if (M2C_FIELD(p, u8 *, 0x16) != 0xA3 && M2C_FIELD(p, u8 *, 0x16) != 0x82) {
        return 0;
    }
block_9:
    if (M2C_FIELD(p, u8 *, 0) != (*(u8 *)D_00CBCDE2)) {
        func_009832C0(p, 0x37);
        M2C_FIELD(p, s16 *, 0x18) = 0;
        M2C_FIELD(p, u8 *, 0x16) = 0x48;
    } else {
        func_009832C0(p, 0x37);
        M2C_FIELD(p, s16 *, 0x18) = 0;
        M2C_FIELD(p, u8 *, 0x16) = 0x32;
    }
    return 1;
}
