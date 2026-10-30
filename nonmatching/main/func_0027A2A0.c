/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00141390(void *);
M2C_UNK func_00278740(void *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, u32); /* extern */
M2C_UNK func_00278980(void *, u8);                  /* extern */
M2C_UNK func_00278C30(void *, void *, s32, M2C_UNK *); /* extern */
s32 func_00279920(void *, void *, M2C_UNK *);       /* extern */
extern char D_003AB9A0[];
extern u16 D_003E7560;
extern u16 D_003E7564;
extern u8 D_003E9CB0;
extern u32 D_003E9CB4;
extern char Pes6MatchPlayers[];
extern char D_0059FBD0[];
extern char D_0059FBD8[];
extern char D_0059FBE0[];

void func_0027A2A0(void) {
    s32 temp_a2;
    u32 temp_a0_2;
    u32 var_a0;
    u32 var_a1;
    u32 var_a5;
    u32 var_s1;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_s0;
    void *temp_s2;

    if ((*(s32 *)D_0059FBD0) != 0) {
        var_s1 = 0;
        do {
            if (var_s1 != 0xFF) {
                var_a1 = var_s1 % 23U;
            } else {
                var_a1 = 1;
            }
            temp_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
            temp_a0 = M2C_FIELD(temp_s0, void **, 4);
            if (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) {
                temp_a1 = M2C_FIELD(temp_a0, void **, 0);
                if ((M2C_FIELD(temp_a1, u8 *, 3) != 1) && (func_00141390(*M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x10), void ***, 0x2C)) >= 0x11)) {
                    temp_s2 = M2C_FIELD(temp_s0, void **, 4) + 8;
                    temp_a2 = func_00279920(temp_s0, temp_s2, ((void *)D_003AB9A0));
                    if (M2C_FIELD(temp_s2, u8 *, 3) != 0) {
                        func_00278C30(temp_s0, temp_s2, temp_a2, ((void *)D_003AB9A0));
                    }
                    if (D_003E9CB0 != 0) {
                        func_00278980(temp_s2, M2C_FIELD(temp_s0, u8 *, 0));
                    }
                }
            }
            var_s1 += 1;
        } while (var_s1 < 0x17U);
        if (D_003E9CB0 != 0) {
            temp_a0_2 = D_003E7560 + D_003E7564;
            if (temp_a0_2 != 0) {
                D_003E9CB4 = (u32) (D_003E9CB4 + 1) % temp_a0_2;
            }
        }
        (*(s32 *)D_0059FBD8) = 0;
    } else {
        var_a5 = 0;
        do {
            if (var_a5 != 0xFF) {
                var_a0 = var_a5 % 23U;
            } else {
                var_a0 = 1;
            }
            temp_a0_3 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4);
            if ((M2C_FIELD(temp_a0_3, u8 *, 0x2C) != 0) && (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 0), u8 *, 3) != 1)) {
                M2C_FIELD(temp_a0_3, s32 *, 0x20) = 0;
            }
            var_a5 += 1;
        } while (var_a5 < 0x17U);
        if ((*(s32 *)D_0059FBE0) != 0) {
            func_00278740(temp_a0_3, ((void *)Pes6MatchPlayers), 1, 0x17, 0xFF, var_a5);
        }
    }
}
