/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C13AB0(M2C_UNK *, s32, s8 *, void *, u8); /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CCAF40[];
extern char D_00CCAF44[];

void func_00C18430(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u8 arg4) {
    s8 sp18;
    s16 sp1C;
    s16 sp1E;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    u8 temp_a0;
    u8 var_a4;

    var_a3 = arg3;
    var_a4 = arg4;
    var_a1 = 0;
    if (&sp18 != NULL) {
        var_a4 = (*(u8 *)D_00CCAF40);
        if (((s32) var_a4 > 0) && ((s32) var_a4 < 0x17)) {
            if (var_a4 == 0xFF) {
                var_a3_2 = 1;
            } else {
                var_a3_2 = (s32) var_a4 % 23;
            }
            if (M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a3_2 * 0x240)), void **, 4), u8 *, 0x2C) != 0) {
                var_a1 = 1;
            }
        }
        var_a3 = 1;
        switch (var_a1) {                           /* irregular */
        case 0:
            break;
        case 1:
            if (var_a4 != 0xFF) {
                var_a3 = (s32) var_a4 % 23;
            }
            var_a3 = (s32) (((void *)Pes6MatchPlayers) + (var_a3 * 0x240));
            sp18 = (M2C_FIELD(var_a3, u8 *, 0x12) << 5) | (M2C_FIELD(var_a3, u8 *, 0x11) & 0x1F);
            var_a0 = (s32) M2C_FIELD(var_a3, f32 *, 0xE0);
            if (var_a0 >= -0x8000) {
                if (var_a0 >= 0x8000) {
                    var_a0 = 0x7FFF;
                }
            } else {
                var_a0 = -0x8000;
            }
            sp1C = (s16) var_a0;
            var_a0_2 = (s32) M2C_FIELD(var_a3, f32 *, 0xE8);
            if (var_a0_2 >= -0x8000) {
                if (var_a0_2 >= 0x8000) {
                    var_a0_2 = 0x7FFF;
                }
            } else {
                var_a0_2 = -0x8000;
            }
            sp1E = (s16) var_a0_2;
            break;
        }
    }
    temp_a0 = (*(u8 *)D_00CCAF40) + 1;
    (*(u8 *)D_00CCAF40) = temp_a0;
    if ((temp_a0 & 0xFF) >= 0x17) {
        (*(u8 *)D_00CCAF40) = 1;
    }
    if (var_a1 != 0) {
        func_00C13AB0(((void *)D_00CCAF44), var_a1, &sp18, (void *) var_a3, var_a4);
    }
}
