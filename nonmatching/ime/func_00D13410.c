/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07080(s32 *, s32);                      /* extern */
s32 func_00D070F0(s32 *, s32);                      /* extern */
s32 func_00D07160(s32 *, void *);                   /* extern */
s32 func_00D072A0(s32, s32 *);                      /* extern */
s32 *func_00D07350(s32);                            /* extern */
M2C_UNK func_00D0FBB0();                            /* extern */

s32 *func_00D13410(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s8 arg6, s8 arg7) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_a1_3;
    s32 *temp_a1_4;
    s32 *temp_a1_5;
    s32 *temp_v0;

    if (arg0 != NULL) {
        if (arg2 != 0) {
            if ((M2C_FIELD(arg0, s32 *, 0) + 1) >= 0x32) {
                if (func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 **, 0x2B8)) == 0) {
                    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                }
                if (arg0 != NULL) {
loop_11:
                    if (M2C_FIELD(arg0, s32 *, 0) >= 0x33) {
                        temp_a1 = M2C_FIELD(arg0, s32 **, 0x2B8);
                        if (temp_a1 != (arg0 + 0x10)) {
                            func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1);
                            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                            goto loop_11;
                        }
                    }
                    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 **, 0x2B8) != NULL)) {
loop_17:
                        temp_a1_2 = M2C_FIELD(arg0, s32 **, 0x2B8);
                        if ((*temp_a1_2 == -1) && (temp_a1_2 != (arg0 + 0x10))) {
                            func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1_2);
                            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                            goto loop_17;
                        }
                    }
                }
                if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 **, 0x2B8) != NULL)) {
loop_23:
                    temp_a1_3 = M2C_FIELD(arg0, s32 **, 0x2B8);
                    if ((*temp_a1_3 == -1) && (temp_a1_3 != (arg0 + 0x10))) {
                        func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1_3);
                        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                        goto loop_23;
                    }
                }
            }
            temp_v0 = func_00D07350(M2C_FIELD(arg0, s32 *, 0xC));
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0);
                M2C_FIELD(temp_v0, s32 *, 0xC) = 2;
                if (arg3 == 1) {
                    M2C_FIELD(temp_v0, s32 *, 0x148) = 2;
                } else {
                    M2C_FIELD(temp_v0, s32 *, 0x148) = 1;
                }
                if (func_00D070F0(temp_v0, arg1) != 1) {
                    if (func_00D07080(temp_v0, arg2) != 1) {
                        if (func_00D07160(temp_v0, arg0 + 0x10) != 1) {
                            M2C_FIELD(temp_v0, s32 *, 0x13C) = arg4;
                            M2C_FIELD(temp_v0, u8 *, 0x140) = (u8) M2C_FIELD(arg5, u8 *, 0);
                            M2C_FIELD(temp_v0, u8 *, 0x141) = (u8) M2C_FIELD(arg5, u8 *, 1);
                            M2C_FIELD(temp_v0, u8 *, 0x142) = (u8) M2C_FIELD(arg5, u8 *, 2);
                            M2C_FIELD(temp_v0, u8 *, 0x143) = (u8) M2C_FIELD(arg5, u8 *, 3);
                            M2C_FIELD(temp_v0, s8 *, 0x14C) = arg6;
                            M2C_FIELD(temp_v0, s8 *, 0x14D) = arg7;
                            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
                            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
                            if (arg0 != NULL) {
loop_47:
                                if (M2C_FIELD(arg0, s32 *, 0) >= 0x33) {
                                    temp_a1_4 = M2C_FIELD(arg0, s32 **, 0x2B8);
                                    if (temp_a1_4 != (arg0 + 0x10)) {
                                        func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1_4);
                                        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                                        goto loop_47;
                                    }
                                }
                                if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 **, 0x2B8) != NULL)) {
loop_53:
                                    temp_a1_5 = M2C_FIELD(arg0, s32 **, 0x2B8);
                                    if ((*temp_a1_5 == -1) && (temp_a1_5 != (arg0 + 0x10))) {
                                        func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1_5);
                                        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                                        goto loop_53;
                                    }
                                }
                            }
                            func_00D0FBB0();
                            return temp_v0;
                        }
                        func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
                        return NULL;
                    }
                    func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
                    return NULL;
                }
                func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
                return NULL;
            }
            return NULL;
        }
        goto block_4;
    }
block_4:
    return NULL;
}
