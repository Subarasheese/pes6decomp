/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227DA0(void);
extern s32 func_0022F0E0(void);
extern u8 func_002243B0(s32, s32);
void *func_00224520(s32, s32, s32);                 /* extern */
s32 func_00225680(s32);                             /* extern */
u32 func_0094CC80(s32, s32);                        /* extern */
extern char D_00591BB0[];

void func_0094C880(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    u32 var_s2;
    u8 temp_v1;
    void *temp_v0;

    temp_s0 = func_0022F0E0();
    if ((func_00227DA0() != 0) && ((arg0 & 0xFF) < 0x50) && ((arg1 & 0xFF) < 0x20) && (temp_s0 != 0)) {
        var_s2 = func_0094CC80(arg0, arg1);
        temp_s1 = func_002243B0(arg0, arg1) & 0xFF;
        if (var_s2 != 0) {
            temp_a2 = func_00225680(arg0) & 0xFFFF;
            if (temp_a2 != 0xFFFF) {
                temp_v1 = M2C_FIELD((((arg1 & 0xFF) * 0x14) + ((((*(u16 *)D_00591BB0) != temp_a2) * 0x280) + temp_s0)), u8 *, 0x5E);
                if (temp_v1 != 0) {
                    if ((s32) temp_v1 < 0x5A) {
                        if ((s32) temp_v1 < 0x46) {
                            if ((s32) temp_v1 < 0x3C) {
                                if ((s32) temp_v1 < 0x23) {
                                    if ((s32) temp_v1 < 0xF) {
                                        if ((s32) temp_v1 < 5) {
                                            var_s2 = 0;
                                        } else {
                                            var_s2 = (u32) (s32) (0.1f * (f32) var_s2);
                                        }
                                    } else {
                                        var_s2 = (u32) (s32) (0.3f * (f32) var_s2);
                                    }
                                } else {
                                    var_s2 = (u32) (s32) (0.5f * (f32) var_s2);
                                }
                            } else {
                                var_s2 = (u32) (s32) (0.7f * (f32) var_s2);
                            }
                        } else {
                            var_s2 = (u32) (s32) (0.9f * (f32) var_s2);
                        }
                    }
                    temp_v0 = func_00224520(arg0, temp_s1, temp_a2);
                    if (temp_v0 != NULL) {
                        M2C_FIELD(temp_v0, u8 *, 2) = (u8) (M2C_FIELD(temp_v0, u8 *, 2) + (((var_s2 / 10) + (var_s2 >> 0x1F)) & 0xFF));
                        if ((s32) M2C_FIELD(temp_v0, u8 *, 2) >= 0x64) {
                            M2C_FIELD(temp_v0, u8 *, 2) = 0x63U;
                        }
                    }
                }
            }
        }
    }
}
