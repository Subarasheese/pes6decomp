/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_0023F240(s32, s32, M2C_UNK, s32);          /* extern */
s32 func_00246550(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern s32 D_003E9A8C;
extern s32 D_003EAA08;
extern s32 D_003EAA0C;
extern s32 D_003EAA10;
extern s32 D_003EAA14;
extern s8 D_003EAA3C;
extern char D_0053C300[];
extern char D_008DC230[];
extern char D_008DC270[];

s32 func_00932FA0(void) {
    s32 temp_v0;
    s64 temp_v1;
    s64 var_s1;

    var_s1 = (s64) ((s64) D_003EAA10 << 0x38) >> 0x38;
    if (((*(s32 *)D_008DC230) != 0x20) && ((*(s32 *)D_008DC230) != 0x10)) {

    } else {
        temp_v0 = func_0023F240((*(s32 *)D_008DC230) & 0xFFFF, D_003EAA10, 0, D_003EAA14 - 1);
        D_003EAA10 = temp_v0;
        if (((s64) (var_s1 << 0x38) >> 0x38) != temp_v0) {
            M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0x20;
            func_0026E840(0x8400F802);
        }
    }
    switch ((*(s32 *)D_008DC270)) {                           /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if (D_003EAA3C == -1) {
            func_0026E840(0x84008401);
            M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 1;
            M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0x40;
        }
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        func_0026E840(0x84028400);
        if (D_003E9A8C != 6) {
            return 2;
        }
        if (D_003EAA0C == 2) {
            if ((func_00246550(0xA3) == 0) && (((s64) (var_s1 << 0x38) >> 0x38) >= 4)) {
                var_s1 = (s64) ((var_s1 + 1) << 0x38) >> 0x38;
            }
            if ((func_00246550(0xA1) == 0) && (((s64) (var_s1 << 0x38) >> 0x38) >= 5)) {
                var_s1 = (s64) ((var_s1 + 1) << 0x38) >> 0x38;
            }
            temp_v1 = (s64) (var_s1 << 0x38) >> 0x38;
            switch (temp_v1) {                      /* switch 2; irregular */
            case 5:                                 /* switch 2 */
                func_00213540(D_003EAA08, 1);
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 3;
                return 0;
            case 6:                                 /* switch 2 */
                func_00213540(D_003EAA08, 1);
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 4;
                return 0;
            }
        } else {
            return 2;
        }
        break;
    }
}
