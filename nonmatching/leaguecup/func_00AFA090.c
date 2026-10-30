/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4B90(void *);
extern void func_001D7D60(void *, s8);
extern u32 func_00B035D0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00971B50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00AF81F0();                            /* extern */
M2C_UNK func_00AF84F0();                            /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */

void func_00AFA090(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_s2;
    u32 temp_v0;
    void *temp_s1;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        if ((u32) (M2C_FIELD(temp_v0, s32 *, 0x5E4) - 3) >= 2U) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x80C);
            switch (temp_v0_2) {                    /* irregular */
            case 1:
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x5BC), 1);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 0);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 0);
                if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) != 0) {
                    var_s1 = 0;
                    do {
                        func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), void **, 0x7DC), 1);
                        var_s1 = (var_s1 + 1) & 0xFF;
                    } while (var_s1 < 0xB);
                    temp_a0 = func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5D0) + M2C_FIELD(temp_v0, u8 *, 0x5C7)) & 0xFF) & 0xFF;
                    if ((M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2) && ((temp_a0 & 0xFF) < 0xB)) {
                        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 1);
                    } else {
                        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                    }
                } else {
                    var_s1_2 = 0;
                    do {
                        func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_2 & 0xFF) * 4)), void **, 0x7DC), 0);
                        var_s1_2 = (var_s1_2 + 1) & 0xFF;
                    } while (var_s1_2 < 0xB);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                    var_s1_3 = 0;
                    do {
                        temp_a0_2 = var_s1_3 & 0xFF;
                        if (temp_a0_2 == M2C_FIELD(temp_v0, s32 *, 0x5D4)) {
                            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 1);
                        } else if ((temp_a0_2 == (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) && (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2)) {
                            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 1);
                        } else {
                            func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_3 & 0xFF) * 4)), void **, 0x818), 1);
                        }
                        var_s1_3 = (var_s1_3 + 1) & 0xFF;
                    } while (var_s1_3 < 0xB);
                }
                func_002E4B90(M2C_FIELD(temp_v0, void **, 0x410));
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x738), 0);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x400), 0);
                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x40C), 2, 0);
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                func_00971B50(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                break;
            case 0:
                if (M2C_FIELD(temp_v0, u8 *, 0x29F9C) != 1) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x5BC), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 0);
                    var_s2 = 0;
                    do {
                        temp_s1 = temp_v0 + ((var_s2 & 0xFF) * 4);
                        func_001D7D60(M2C_FIELD(temp_s1, void **, 0x7DC), 0);
                        func_001D7D60(M2C_FIELD(temp_s1, void **, 0x818), 0);
                        var_s2 = (var_s2 + 1) & 0xFF;
                    } while (var_s2 < 0xB);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                    func_002E4B90(M2C_FIELD(temp_v0, void **, 0x410));
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x738), 1);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x400), 1);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x40C), 2, 1);
                    func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x40C), 1);
                    func_00971B50(M2C_FIELD(temp_v0, s32 *, 0x40C), 1);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                } else {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x5BC), 1);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 0);
                    if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) != 0) {
                        var_s1_4 = 0;
                        do {
                            func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_4 & 0xFF) * 4)), void **, 0x7DC), 1);
                            var_s1_4 = (var_s1_4 + 1) & 0xFF;
                        } while (var_s1_4 < 0xB);
                        temp_a0_3 = func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5D0) + M2C_FIELD(temp_v0, u8 *, 0x5C7)) & 0xFF) & 0xFF;
                        if ((M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2) && ((temp_a0_3 & 0xFF) < 0xB)) {
                            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 1);
                        } else {
                            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                        }
                    } else {
                        var_s1_5 = 0;
                        do {
                            func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_5 & 0xFF) * 4)), void **, 0x7DC), 0);
                            var_s1_5 = (var_s1_5 + 1) & 0xFF;
                        } while (var_s1_5 < 0xB);
                        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                        var_s1_6 = 0;
                        do {
                            temp_a0_4 = var_s1_6 & 0xFF;
                            if (temp_a0_4 == M2C_FIELD(temp_v0, s32 *, 0x5D4)) {
                                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 1);
                            } else if ((temp_a0_4 == (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) && (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2)) {
                                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 1);
                            } else {
                                func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_6 & 0xFF) * 4)), void **, 0x818), 1);
                            }
                            var_s1_6 = (var_s1_6 + 1) & 0xFF;
                        } while (var_s1_6 < 0xB);
                    }
                    func_002E4B90(M2C_FIELD(temp_v0, void **, 0x410));
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x738), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x400), 0);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x40C), 2, 0);
                    func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                    func_00971B50(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                }
                break;
            }
            temp_a0_5 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
            if ((temp_a0_5 == 6) || (M2C_FIELD(temp_v0, s32 *, 0x29F98) == 1)) {
                if (M2C_FIELD(temp_v0, s32 *, 0x80C) != 0) {
                    func_00958000(0x87);
                } else {
                    func_00958000(0x86);
                }
            } else if (temp_a0_5 != 1) {
                if (M2C_FIELD(temp_v0, s32 *, 0x80C) != 0) {
                    func_00958000(0x83);
                } else {
                    func_00958000(0x82);
                }
            } else if (M2C_FIELD(temp_v0, s32 *, 0x80C) != 0) {
                func_00958000(0x85);
            } else {
                func_00958000(0x84);
            }
            if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) == 0) {
                func_00AF84F0();
                return;
            }
            func_00AF81F0();
        } else {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x5BC), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 0);
            if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) != 0) {
                var_s1_7 = 0;
                do {
                    func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_7 & 0xFF) * 4)), void **, 0x7DC), 1);
                    var_s1_7 = (var_s1_7 + 1) & 0xFF;
                } while (var_s1_7 < 0xB);
                temp_a0_6 = func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5D0) + M2C_FIELD(temp_v0, u8 *, 0x5C7)) & 0xFF) & 0xFF;
                if ((M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2) && ((temp_a0_6 & 0xFF) < 0xB)) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 1);
                } else {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                }
            } else {
                var_s1_8 = 0;
                do {
                    func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_8 & 0xFF) * 4)), void **, 0x7DC), 0);
                    var_s1_8 = (var_s1_8 + 1) & 0xFF;
                } while (var_s1_8 < 0xB);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x808), 0);
                var_s1_9 = 0;
                do {
                    temp_a0_7 = var_s1_9 & 0xFF;
                    if (temp_a0_7 == M2C_FIELD(temp_v0, s32 *, 0x5D4)) {
                        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x848), 1);
                    } else if ((temp_a0_7 == (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) && (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x5E4) != 2)) {
                        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x844), 1);
                    } else {
                        func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1_9 & 0xFF) * 4)), void **, 0x818), 1);
                    }
                    var_s1_9 = (var_s1_9 + 1) & 0xFF;
                } while (var_s1_9 < 0xB);
            }
            func_002E4B90(M2C_FIELD(temp_v0, void **, 0x410));
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x738), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x400), 0);
            func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x40C), 2, 0);
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
            func_00971B50(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
            if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) == 0) {
                func_00AF84F0();
            } else {
                func_00AF81F0();
            }
        }
    }
}
