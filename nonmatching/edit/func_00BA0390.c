/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B80(s32);
extern void func_001B7920(void);
extern void func_00BA0BA0(s32);
M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_001B7D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00BA0570(M2C_UNK);                     /* extern */
M2C_UNK func_00BA08B0();                            /* extern */
M2C_UNK func_00BA0BB0();                            /* extern */
extern char D_00CB5A70[];

s32 func_00BA0390(void *arg0) {
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s8 temp_v1;
    s8 temp_v1_2;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, s8 *, 2);
    var_s1 = 0;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        temp_v1_2 = M2C_FIELD(arg0, s8 *, 3);
        var_s0 = 0;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            M2C_FIELD(arg0, s16 *, 0x22) = 0;
            M2C_FIELD(arg0, s16 *, 0x20) = 0;
            func_00BA0BA0(5);
            func_001B79C0();
            func_001B7ED0(((void *)D_00CB5A70), 2);
            M2C_FIELD(arg0, s8 *, 3) = 1;
            break;
        case 1:                                     /* switch 2 */
            func_00BA08B0();
            break;
        case 2:                                     /* switch 2 */
            func_00BA0BA0(4);
            var_s0 = M2C_FIELD(arg0, s32 *, 4);
            func_001B7920();
            M2C_FIELD(arg0, s8 *, 3) = 0;
            break;
        }
        switch (var_s0) {                           /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            M2C_FIELD(arg0, s8 *, 2) = 1;
            break;
        case 1:                                     /* switch 3 */
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            func_00BA0BB0();
            M2C_FIELD(arg0, s8 *, 2) = 1;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_v0 = (M2C_FIELD(arg0, s32 *, 0x14) * 4) + arg0;
        M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(temp_v0, u8 *, 8);
        M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(temp_v0, u8 *, 9);
        M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(temp_v0, u8 *, 0xA);
        M2C_FIELD(arg0, u8 *, 0x2B) = (u8) M2C_FIELD(temp_v0, u8 *, 0xB);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        func_00BA0BA0(4);
        func_001B79C0();
        func_001B7ED0(((void *)D_00CB5A70), 2);
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        if ((temp_v0_2 > 0) && (temp_v0_2 < 4)) {
            func_001B7D40(0xB, 0x6C0044);
        } else {
            func_001B7B80(0xB);
        }
        M2C_FIELD(arg0, s8 *, 2) = 1;
        break;
    case 1:                                         /* switch 1 */
        func_00BA0570(1);
        break;
    case 3:                                         /* switch 1 */
        func_00BA0BA0(1);
        var_s1 = M2C_FIELD(arg0, s32 *, 4);
        func_001B7920();
        M2C_FIELD(arg0, s8 *, 2) = 0;
        break;
    }
    return var_s1;
}
