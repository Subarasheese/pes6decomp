/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7920(void);
extern void func_001B7B80(s32);
M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_001B7D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00BA9D10();                            /* extern */
M2C_UNK func_00BAA0F0();                            /* extern */
M2C_UNK func_00BAB3F0(M2C_UNK);                     /* extern */
M2C_UNK func_00BAB400();                            /* extern */
extern char D_00CB5E70[];

s32 func_00BA9B30(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s8 temp_v1;
    s8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s8 *, 2);
    var_s1 = 0;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        temp_v1_2 = M2C_FIELD(arg0, s8 *, 3);
        var_s0 = 0;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x108) = 0;
            M2C_FIELD(arg0, s16 *, 0x106) = 0;
            M2C_FIELD(arg0, s16 *, 0x104) = 0;
            func_00BAB3F0(6);
            func_001B79C0();
            func_001B7ED0(((void *)D_00CB5E70), 3);
            M2C_FIELD(arg0, s8 *, 3) = 1;
            break;
        case 1:                                     /* switch 2 */
            func_00BAA0F0();
            break;
        case 2:                                     /* switch 2 */
            func_00BAB3F0(5);
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
            M2C_FIELD(arg0, s32 *, 0x100) = 0;
            func_00BAB400();
            M2C_FIELD(arg0, s8 *, 2) = 1;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x68);
        func_001C4730(arg0 + 0x68, M2C_FIELD(arg0, s32 *, 0x14), 0x50);
        M2C_FIELD(arg0, s32 *, 0x68) = temp_s0;
        M2C_FIELD(arg0, s8 *, 0x71) = 1;
        M2C_FIELD(arg0, s8 *, 0x70) = 1;
        func_00BAB400();
        M2C_FIELD(arg0, s32 *, 0x100) = 1;
        func_00BAB3F0(5);
        func_001B79C0();
        func_001B7ED0(((void *)D_00CB5E70), 3);
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x100);
        if ((temp_v0 > 0) && (temp_v0 < 5)) {
            func_001B7D40(0xB, 0x6C0044);
        } else {
            func_001B7B80(0xB);
        }
        M2C_FIELD(arg0, s8 *, 2) = 1;
        break;
    case 1:                                         /* switch 1 */
        func_00BA9D10();
        break;
    case 3:                                         /* switch 1 */
        func_00BAB3F0(1);
        var_s1 = M2C_FIELD(arg0, s32 *, 4);
        func_001B7920();
        M2C_FIELD(arg0, s8 *, 2) = 0;
        break;
    }
    return var_s1;
}
