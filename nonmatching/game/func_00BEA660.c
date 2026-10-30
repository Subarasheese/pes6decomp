/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B7B910(void);
extern s32 func_00B7B880(void);
M2C_UNK func_0099DC90();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B78E60(M2C_UNK);                     /* extern */
s32 func_00B79600();                                /* extern */
s32 func_00B7B850(s32);                             /* extern */
M2C_UNK func_00B7B890();                            /* extern */
M2C_UNK func_00B7B8C0(M2C_UNK);                     /* extern */
s32 func_00B7B8E0();                                /* extern */
s32 func_00BE9B70();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DC4[];
extern char D_00591E4D[];
extern char D_00591F24[];
extern char D_00CBBE44[];

s32 func_00BEA660(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    u8 temp_v1;
    void *temp_s0;

    var_s2 = 0;
    temp_s1 = func_00B79600();
    func_00B7B910();
    func_0099DC90();
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    temp_a0 = var_a0 * 0x240;
    temp_s0 = ((void *)Pes6MatchPlayers) + temp_a0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x16);
    if ((temp_v1 != 0x30) && (temp_v1 != 0x2F) && (temp_v1 != 0x2D) && (temp_v1 != 0x2C)) {

    } else {
        var_s2 = 1;
    }
    if (var_s2 != 1) {
        if (temp_s1 == 0) {
            goto block_20;
        }
        if (func_00B7B850(temp_a0) != 0) {
            return 1;
        }
block_20:
        var_s2_2 = 0;
loop_21:
        func_00B78E60(0);
        if (M2C_FIELD(temp_s0, u8 *, 0x16) != 0xFD) {
            goto block_37;
        }
        if ((*(u8 *)D_00591F24) == 1) {
            if ((*(u8 *)D_00CBBE44) == 0) {
                goto block_27;
            }
            goto block_28;
        }
block_27:
        if (M2C_FIELD(temp_s0, u16 *, 0x18) == 0x19) {
block_28:
            if (func_00BE9B70() == 0) {
                func_00B7B8C0(1);
                if (temp_s1 != 0) {
                    return 1;
                }
            }
            goto block_37;
        }
block_37:
        var_s2_2 += 1;
        func_00B7B890();
        if (var_s2_2 < (func_00B7B8E0() & 0xFF)) {
            (*(s32 *)D_00591DC4) += 1;
            goto loop_21;
        }
        goto block_31;
    }
    if (temp_s1 == 0) {
        return 0;
    }
    var_s0 = 0;
    if ((*(u8 *)D_00591F24) != 1) {
        var_s1 = 0;
        do {
            func_00B78E60(0);
            func_00B7B890();
            var_s1 += 1;
            (*(s32 *)D_00591DC4) += 1;
        } while (var_s1 < 0x96);
        if (func_00B7B880() < 0x258) {
            var_s0 = 1;
        }
    }
    if (var_s0 != 1) {
        func_009E1D30(2, 0xE);
    }
block_31:
    return 0;
}
