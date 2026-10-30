/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF3A0(s32);
extern void func_00BF2A00(void);
M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern s32 D_003EB070;
extern s32 D_003EB074;
extern char D_00CE5C00[];
extern char D_00CE64C2[];
extern char D_00CE64C3[];
extern M2C_UNK *D_00CE64D0;

s32 func_00BEC480(s8 *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;

    var_s0 = 0;
    switch (D_003EB070) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001C4730(((void *)D_00CE5C00), D_00CE64D0, 0xF8);
        func_00BF2A00();
        if (arg1 != 0) {
            D_003EB074 = 0;
        } else {
            D_003EB074 = 1;
        }
        temp_v1 = *arg0;
        if ((temp_v1 != 0) && (temp_v1 != 2)) {
            *arg0 = 2;
        }
        D_003EB070 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (func_00BCF3A0(1) == 0) {
            if (func_00BCF3A0(8) == 0) {
                if (func_00BCF3A0(0x80) == 0) {
                    if (func_00BCF3A0(0x400) == 0) {
                        if (func_00BCF3A0(0x1000) == 0) {
                            if (func_00BCF3A0(0x4000) != 0) {
                                if (*arg0 != 0) {
                                    *arg0 = 0;
                                    func_00BF2A00();
                                } else {
                                    (*(s8 *)D_00CE64C2) = 1;
                                    (*(s8 *)D_00CE64C3) = 1;
                                    D_003EB070 = 0;
                                    func_001C4730(D_00CE64D0, ((void *)D_00CE5C00), 0xF8);
                                    var_s0 = 1;
                                }
                                func_0026E840(0x84008401);
                            }
                        } else {
                            if (*arg0 == 0) {
                                var_s0 = 1;
                                D_003EB070 = 0;
                                M2C_FIELD(D_00CE64D0, u8 *, 0xF5) = (u8) ((M2C_FIELD(D_00CE64D0, u8 *, 0xF5) & ~1) | 1);
                                M2C_FIELD(D_00CE64D0, u8 *, 0xEE) = (u8) M2C_FIELD(D_00CE64D0, u8 *, 0xEE);
                                (*(s8 *)D_00CE64C2) = 1;
                                (*(s8 *)D_00CE64C3) = 1;
                            } else {
                                *arg0 = 0;
                            }
                            func_0026E840(0x84028400);
                        }
                    } else if (*arg0 == 2) {
                        var_v1 = M2C_FIELD(D_00CE64D0, u8 *, 0xEE) + 1;
                        if (var_v1 < 5) {
                            if (var_v1 < D_003EB074) {
                                var_v1 = 4;
                            }
                        } else {
                            var_v1 = D_003EB074;
                        }
                        M2C_FIELD(D_00CE64D0, u8 *, 0xEE) = (u8) var_v1;
                        func_00BF2A00();
                        func_0026E840(0x8400F802);
                    }
                } else if (*arg0 == 2) {
                    var_v1_2 = M2C_FIELD(D_00CE64D0, u8 *, 0xEE) - 1;
                    if (var_v1_2 < 5) {
                        if (var_v1_2 < D_003EB074) {
                            var_v1_2 = 4;
                        }
                    } else {
                        var_v1_2 = D_003EB074;
                    }
                    M2C_FIELD(D_00CE64D0, u8 *, 0xEE) = (u8) var_v1_2;
                    func_00BF2A00();
                    func_0026E840(0x8400F802);
                }
            } else {
                temp_v1_2 = *arg0;
                switch (temp_v1_2) {                /* switch 3; irregular */
                case 2:                             /* switch 3 */
                    *arg0 = 0;
                    break;
                case 0:                             /* switch 3 */
                    *arg0 = 2;
                    break;
                }
                func_00BF2A00();
                func_0026E840(0x8400F802);
            }
        } else {
            temp_v1_3 = *arg0;
            switch (temp_v1_3) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                *arg0 = 0;
                break;
            case 0:                                 /* switch 2 */
                *arg0 = 2;
                break;
            }
            func_00BF2A00();
            func_0026E840(0x8400F802);
        }
        break;
    }
    return var_s0;
}
