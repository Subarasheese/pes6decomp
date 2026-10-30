/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern int func_002DCA50(void);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00843F50(M2C_UNK);                     /* extern */
M2C_UNK func_008469B0(M2C_UNK);                     /* extern */
void *func_008472C0();                              /* extern */
s16 *func_008472D0();                               /* extern */

s32 func_00859020(void *arg0, void *arg1) {
    s16 var_s3;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_s0;
    s8 var_s1;
    s8 var_s2;
    u8 temp_v0;
    void *var_s4;
    void *var_s5;

    if (M2C_FIELD(arg0, s8 *, 0xFD) == 0) {
        return -1;
    }
    var_s0 = 0;
    var_s1 = 0;
    var_s2 = 0;
    var_s4 = func_008472C0();
    var_s3 = 1;
    var_s5 = arg0;
    do {
        temp_v0 = M2C_FIELD(var_s4, u8 *, 0x51);
        switch (temp_v0) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            var_s2 += 1;
            var_s0 += 1;
            M2C_FIELD(var_s5, s32 *, 4) = (s32) M2C_FIELD(var_s4, s32 *, 4);
            break;
        case 2:                                     /* switch 1 */
            M2C_FIELD(var_s5, s32 *, 4) = (s32) M2C_FIELD(var_s4, s32 *, 4);
            M2C_FIELD(var_s5, s8 *, 8) = 3;
            if (M2C_FIELD(var_s4, s8 *, 0x50) != 4) {
                var_s2 += 1;
                var_s1 += 1;
                if ((M2C_FIELD(var_s4, u8 *, 0x52) != 0) && (M2C_FIELD(var_s5, u8 *, 0x18) == 0)) {
                    M2C_FIELD(var_s5, u8 *, 0x18) = 1U;
                    func_00853B50(1, 0x16, 6, 0, var_s3, 2, 0, 0);
                }
            } else if (M2C_FIELD(var_s5, u8 *, 0x18) != 0) {
                M2C_FIELD(var_s5, u8 *, 0x18) = 0U;
                func_00853B50(1, 0x16, 7, 0, var_s3, 2, 0, 0);
            }
            break;
        default:                                    /* switch 1 */
            M2C_FIELD(var_s5, s8 *, 8) = 0;
            break;
        }
        var_s3 += 1;
        var_s4 += 0x88;
        var_s5 += 0x1C;
    } while (var_s3 < 9);
    if (func_002DCA40() != 0) {
        if ((arg1 != NULL) && (M2C_FIELD(arg1, u8 *, 0x51) == 2)) {
            temp_v1 = M2C_FIELD(arg1, s8 *, 0x50);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                if (M2C_FIELD(arg0, s8 *, 0xFB) >= 2) {
                    func_00843F50(0);
                }
                break;
            case 4:                                 /* switch 2 */
                func_00843F50(0);
                func_001C48E8(arg1, 0, 0x88);
                break;
            }
        }
        if (M2C_FIELD(arg0, s8 *, 0xFE) == 0) {
            if (var_s2 != 8) {
                func_008469B0(2);
                func_00853B50(1, 0x16, 5, 0, *func_008472D0(), -4, 0, 0);
            } else {
                func_008469B0(0);
                func_00853B50(1, 0x16, 4, 0, *func_008472D0(), -4, 0, 0);
            }
        }
    } else if ((func_002DCA50() != 0) && (arg1 != NULL) && (M2C_FIELD(arg1, u8 *, 0x51) == 2)) {
        temp_v1_2 = M2C_FIELD(arg1, s8 *, 0x50);
        switch (temp_v1_2) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            if (M2C_FIELD(arg0, s8 *, 0xFB) >= 2) {
                func_00843F50(0);
            }
            break;
        case 4:                                     /* switch 3 */
            func_00843F50(0);
            func_001C48E8(arg1, 0, 0x88);
            break;
        }
    }
    M2C_FIELD(arg0, s8 *, 0xFB) = var_s1;
    M2C_FIELD(arg0, s8 *, 0xFA) = var_s0;
    M2C_FIELD(arg0, s8 *, 0xFC) = var_s2;
    return 0;
}
