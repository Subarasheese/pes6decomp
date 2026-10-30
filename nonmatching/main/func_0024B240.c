/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0023B360(s32);
extern int func_0030C2D0(void);
extern s32 func_002631D0(void);
extern s32 func_0023E090(void);
s32 func_002259E0();                                /* extern */
extern char D_003AA200[];
extern s32 D_003EAA0C;
extern char D_00510FD0[];
extern char D_00591C09[];

void func_0024B240(s8 *arg0) {
    M2C_UNK *var_s0_2;
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s4_2;
    s32 var_s5;
    s64 var_v1;
    s8 *var_s1;
    s8 *var_s1_2;
    s8 *var_s3;
    s8 *var_s5_2;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 var_a0;
    s8 var_a0_2;
    void *var_s4;

    var_s3 = arg0;
    if ((*(u8 *)D_00591C09) == 5) {
        if ((*(s32 *)D_00510FD0) == 4) {
            if (D_003EAA0C != 1) {
                var_v1 = 3;
            } else {
                var_v1 = 2;
            }
        } else {
            var_v1 = (s64) (func_002631D0() << 0x38) >> 0x38;
        }
        if (((s64) (var_v1 << 0x38) >> 0x38) != 2) {
            var_s0 = 0;
            do {
                if (*var_s3 == 1) {
                    func_0023B360(var_s0);
                    func_0023B360(var_s0 + 8);
                }
                var_s0 += 1;
                var_s3 += 0x34;
            } while (var_s0 < 8);
            return;
        }
        var_s2 = 0;
        var_s1 = var_s3;
        var_s0_2 = ((void *)D_003AA200);
        do {
            if (*var_s1 == 1) {
                if (var_s2 == 0) {
                    func_0023B360(var_s2 + 8);
                    var_s5 = 1;
                    var_s4 = var_s3 + 0x34;
                    do {
                        var_a0 = M2C_FIELD(var_s4, s8 *, 1);
                        if (var_a0 <= 0) {
                            var_a0 = -var_a0;
                        }
                        if (var_a0 == 3) {
                            func_0023B360(var_s2);
                        }
                        var_s5 += 1;
                        var_s4 += 0x34;
                    } while (var_s5 < 8);
                } else {
                    var_s4_2 = 0;
                    var_s5_2 = var_s3;
                    do {
                        var_a0_2 = M2C_FIELD(var_s5_2, s8 *, 1);
                        if (var_a0_2 <= 0) {
                            var_a0_2 = -var_a0_2;
                        }
                        if ((var_a0_2 == 3) && (var_s2 != var_s4_2)) {
                            temp_a0 = M2C_FIELD(var_s0_2, s8 *, 1);
                            if ((temp_a0 != 0) && (temp_a0 != 0xA)) {
                                func_0023B360(var_s2);
                            }
                        }
                        var_s4_2 += 1;
                        var_s5_2 += 0x34;
                    } while (var_s4_2 < 8);
                }
                temp_a0_2 = M2C_FIELD(var_s0_2, s8 *, 1);
                if ((temp_a0_2 == 0) || (temp_a0_2 == 0xA)) {
                    func_0023B360(var_s2 + 8);
                }
            }
            var_s2 += 1;
            var_s1 += 0x34;
            var_s0_2 += 0x34;
        } while (var_s2 < 8);
        return;
    }
    if (func_0023E090() != 0) {
        if ((func_002259E0() & 0xFF) < 2) {
            var_s0_3 = 0;
            var_s1_2 = var_s3;
            do {
                if (M2C_FIELD(var_s1_2, s8 *, 0) == 1) {
                    if ((u32) (M2C_FIELD(var_s3, s8 *, 1) + 3) < 3U) {
                        if (var_s0_3 == 0) {
                            func_0023B360(8);
                        }
                        if (M2C_FIELD(var_s1_2, s8 *, 1) == 0) {
                            func_0023B360(var_s0_3 + 8);
                        }
                    } else {
                        if (var_s0_3 == 0) {
                            func_0023B360(0);
                        }
                        if (M2C_FIELD(var_s1_2, s8 *, 1) == 0) {
                            func_0023B360(var_s0_3);
                        }
                    }
                }
                var_s0_3 += 1;
                var_s1_2 += 0x34;
            } while (var_s0_3 < 8);
        }
    } else if (func_0030C2D0() == 1) {
        if (M2C_FIELD(var_s3, s8 *, 0) == 1) {
            func_0023B360(8);
        }
        if (M2C_FIELD(var_s3, s8 *, 0x34) == 1) {
            func_0023B360(1);
        }
    }
}
