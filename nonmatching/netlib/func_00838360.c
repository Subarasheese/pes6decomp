/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC800(void);
extern s32 func_001FC7D0(void);
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
s32 func_0083EE70(M2C_UNK);                         /* extern */
s32 func_0083F0C0(M2C_UNK);                         /* extern */
M2C_UNK func_00842660(s8);                          /* extern */
M2C_UNK func_00842670(u8);                          /* extern */
M2C_UNK func_00842680(u8);                          /* extern */
M2C_UNK func_00842690(u8);                          /* extern */
M2C_UNK func_008426A0(s8);                          /* extern */
M2C_UNK func_008426B0(s8);                          /* extern */
M2C_UNK func_008426C0(s8);                          /* extern */
M2C_UNK func_008426D0(s8);                          /* extern */
M2C_UNK func_008426E0(s8);                          /* extern */
M2C_UNK func_008426F0(s8);                          /* extern */
M2C_UNK func_00842700(s8);                          /* extern */
M2C_UNK func_00842710(s8);                          /* extern */
M2C_UNK func_00842720(s8);                          /* extern */
M2C_UNK func_00842730(s8);                          /* extern */
M2C_UNK func_00842740(s8);                          /* extern */
M2C_UNK func_00842750(s8);                          /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00838360(s32 arg0) {
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_a0;
    void *temp_s0;

    if (func_00D0BAF0() == 0) {
        var_s1 = NULL;
    } else {
        var_s1 = ((void *)D_008A5CB0);
    }
    if (var_s1 == NULL) {
        return 0;
    }
    if (arg0 != 0) {
        temp_s0 = arg0 + 0x874;
        if (temp_s0 != NULL) {
            if (M2C_FIELD(var_s1, s8 *, 0x2B6) != 1) {
                if (M2C_FIELD(var_s1, s32 *, 0x234) != 1) {
                    func_001FC800();
                    if (func_001FC7D0() == 0x15) {
                        temp_v0 = func_0083F0C0(0);
                        if (temp_v0 != 0) {
                            func_001C8590(var_s1 + 0x248, temp_v0, 0x30);
                        }
                        temp_v0_2 = func_0083F0C0(1);
                        if (temp_v0_2 != 0) {
                            func_001C8590(var_s1 + 0x279, temp_v0_2, 0x30);
                        }
                        M2C_FIELD(var_s1, s32 *, 0x2AC) = func_0083EE70(0);
                        M2C_FIELD(var_s1, s32 *, 0x2B0) = func_0083EE70(1);
                    }
                    M2C_FIELD(var_s1, s32 *, 0x234) = 1;
                    temp_a0 = M2C_FIELD(temp_s0, s8 *, 4);
                    M2C_FIELD(var_s1, s8 *, 0x238) = temp_a0;
                    M2C_FIELD(var_s1, s8 *, 0x239) = (s8) M2C_FIELD(temp_s0, s8 *, 5);
                    M2C_FIELD(var_s1, s8 *, 0x23A) = (s8) M2C_FIELD(temp_s0, s8 *, 6);
                    M2C_FIELD(var_s1, s8 *, 0x23B) = (s8) M2C_FIELD(temp_s0, s8 *, 7);
                    M2C_FIELD(var_s1, s8 *, 0x23C) = (s8) M2C_FIELD(temp_s0, s8 *, 8);
                    M2C_FIELD(var_s1, s8 *, 0x23D) = (s8) M2C_FIELD(temp_s0, s8 *, 9);
                    M2C_FIELD(var_s1, s8 *, 0x23E) = (s8) M2C_FIELD(temp_s0, s8 *, 0xA);
                    M2C_FIELD(var_s1, s8 *, 0x23F) = (s8) M2C_FIELD(temp_s0, s8 *, 0xB);
                    M2C_FIELD(var_s1, s8 *, 0x240) = (s8) M2C_FIELD(temp_s0, s8 *, 0xC);
                    M2C_FIELD(var_s1, s8 *, 0x247) = (s8) M2C_FIELD(temp_s0, s8 *, 0x13);
                    M2C_FIELD(var_s1, s8 *, 0x241) = (s8) M2C_FIELD(temp_s0, s8 *, 0xD);
                    M2C_FIELD(var_s1, s8 *, 0x242) = (s8) M2C_FIELD(temp_s0, s8 *, 0xE);
                    M2C_FIELD(var_s1, s8 *, 0x243) = (s8) M2C_FIELD(temp_s0, s8 *, 0xF);
                    M2C_FIELD(var_s1, u8 *, 0x244) = (u8) M2C_FIELD(temp_s0, u8 *, 0x10);
                    M2C_FIELD(var_s1, u8 *, 0x245) = (u8) M2C_FIELD(temp_s0, u8 *, 0x11);
                    M2C_FIELD(var_s1, u8 *, 0x246) = (u8) M2C_FIELD(temp_s0, u8 *, 0x12);
                    func_00842750(temp_a0);
                    func_00842740(M2C_FIELD(var_s1, s8 *, 0x239));
                    func_00842730(M2C_FIELD(var_s1, s8 *, 0x23A));
                    func_00842720(M2C_FIELD(var_s1, s8 *, 0x23B));
                    func_00842710(M2C_FIELD(var_s1, s8 *, 0x23C));
                    func_00842700(M2C_FIELD(var_s1, s8 *, 0x23D));
                    func_008426F0(M2C_FIELD(var_s1, s8 *, 0x23E));
                    func_008426E0(M2C_FIELD(var_s1, s8 *, 0x23F));
                    func_008426D0(M2C_FIELD(var_s1, s8 *, 0x240));
                    func_008426C0(M2C_FIELD(var_s1, s8 *, 0x241));
                    func_008426B0(M2C_FIELD(var_s1, s8 *, 0x243));
                    func_008426A0(M2C_FIELD(var_s1, s8 *, 0x242));
                    func_00842690(M2C_FIELD(var_s1, u8 *, 0x244));
                    func_00842680(M2C_FIELD(var_s1, u8 *, 0x246));
                    func_00842670(M2C_FIELD(var_s1, u8 *, 0x245));
                    func_00842660(M2C_FIELD(var_s1, s8 *, 0x247));
                    M2C_FIELD(var_s1, s8 *, 0x2B6) = 1;
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
