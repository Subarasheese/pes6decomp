/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B24DD0(void);
extern u8 func_00BBCC20(void);
extern u8 func_00BF6270(void);
M2C_UNK func_00B24DE0(u8);                          /* extern */
M2C_UNK func_00B24E10(u8);                          /* extern */
M2C_UNK func_00B24E40(u8);                          /* extern */
M2C_UNK func_00B24EB0(s32, u32, u32, u8);           /* extern */
M2C_UNK func_00B24F40(s32, u32, u32, u8);           /* extern */
M2C_UNK func_00B25220();                            /* extern */
M2C_UNK func_00B25270(M2C_UNK, u16, u16);           /* extern */
M2C_UNK func_00B25380(void *);                      /* extern */
s32 func_00B363E0(M2C_UNK);                         /* extern */
M2C_UNK func_00B36400(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C01090(M2C_UNK, u32, u32, u8);           /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00CBCB14[];
extern char D_00CBCB20[];

void func_00B3C8D0(void) {
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s1;
    u16 temp_a1_2;
    u16 temp_a2_2;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_s1;
    u8 var_a0;
    void *temp_s2;

    if (func_00BF6270() != 0xFF) {
        var_a1 = func_00BF6270() % 23;
    } else {
        var_a1 = 1;
    }
    temp_s2 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    temp_a2 = (*(u8 *)D_00591BE4) * 3;
    temp_s0 = (*(u8 *)D_00591BE4) * 6;
    temp_a1 = (u8) (*(u8 *)D_00591BE4) >> 0x1F;
    temp_a0 = ((*(u8 *)D_00591BE4) / 3) + temp_a1;
    temp_s1 = temp_s0 + temp_a0;
    if ((*(u32 *)D_00CBCB14) != temp_a2) {
        if ((*(u32 *)D_00CBCB14) != temp_s0) {
            if ((temp_a2 < (u32) (*(u32 *)D_00CBCB14)) && ((u32) (*(u32 *)D_00CBCB14) < temp_s0)) {
                temp_v0 = (*(u8 *)D_00591BE4) * 9;
                var_s1 = temp_v0 >> 1;
                if (temp_v0 < 0) {
                    var_s1 = (s32) (temp_v0 + 1) >> 1;
                }
                if (func_00C01090(1, temp_a1, temp_a2, (*(u8 *)D_00591BE4)) != 0) {
                    var_a0 = M2C_FIELD(temp_s2, u8 *, 0x12) ^ 1;
                } else {
                    var_a0 = M2C_FIELD(temp_s2, u8 *, 0x12);
                }
                if ((u32) (*(u32 *)D_00CBCB14) >= (u32) var_s1) {
                    if ((*(u32 *)D_00CBCB14) != var_s1) {
                        if ((*(u32 *)D_00CBCB14) == (temp_s0 - 0x10)) {
                            func_00B24E40(var_a0);
                        }
                    } else {
                        func_00B24DE0(var_a0);
                    }
                } else {
                    func_00B24E10(var_a0);
                }
                func_00B24DD0();
            } else if ((*(u32 *)D_00CBCB14) == temp_s1) {
                (*(u16 *)D_00CBCB20) = (*(u8 *)D_00591BE4) * 4;
            } else if ((func_00C01090(1, temp_a1, temp_a2, (*(u8 *)D_00591BE4)) == 0) && (temp_s1 < (u32) (*(u32 *)D_00CBCB14))) {
                temp_s0_2 = func_00BBCC20() & 0xFF;
                if ((temp_s0_2 == func_00BF6270()) && ((*(u16 *)D_00CBCB20) != 0)) {
                    if (func_00B363E0(0) != 0) {
                        temp_a2_2 = (*(u16 *)D_00CBCB20);
                        temp_a1_2 = temp_a2_2 - 1;
                        (*(u16 *)D_00CBCB20) = temp_a1_2;
                        if (temp_a2_2 == 0x10) {
                            func_00B25270(0x10, temp_a1_2, temp_a2_2);
                        }
                    } else {
                        func_00B25380(temp_s2);
                        (*(u16 *)D_00CBCB20) = (*(u8 *)D_00591BE4) * 4;
                        func_00B36400(0, 1);
                    }
                } else {
                    func_00B25220();
                    func_00B36400(0, 0);
                }
            }
        } else {
            func_00B24EB0(temp_a0, temp_a1, temp_a2, (*(u8 *)D_00591BE4));
        }
    } else {
        func_00B24F40(temp_a0, temp_a1, temp_a2, (*(u8 *)D_00591BE4));
    }
}
