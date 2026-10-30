/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_0023FC70();                            /* extern */
M2C_UNK func_0024E090(M2C_UNK, s32);                /* extern */
M2C_UNK func_0026E560(M2C_UNK);                     /* extern */
M2C_UNK func_008B5EF0();                            /* extern */
M2C_UNK func_008B6530(s32);                         /* extern */
s32 func_008C94A0(s32);                             /* extern */
s32 func_00930080(s32);                             /* extern */
M2C_UNK func_00943240();                            /* extern */
s32 func_009432F0();                                /* extern */
extern s32 D_003E9A88;
extern s32 D_003EA9E8;
extern s32 D_003EAA0C;
extern char D_0053C300[];
extern char D_0053C302[];
extern char D_0053C318[];

void func_00930AF0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    switch (D_003EA9E8) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (D_003EAA0C == 2) {
            func_0024E090(0, D_003EA9E8);
        } else {
            func_0024E090(1, D_003EA9E8);
        }
        M2C_FIELD(((void *)D_0053C300), s8 *, 9) = 2;
        func_0023F510(3);
        D_003EA9E8 += 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        temp_v0 = func_009432F0();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            D_003EA9E8 = 0;
            func_0023F510(2);
            func_0023FC70();
            return;
        case 2:                                     /* switch 2 */
            if ((*(s32 *)D_0053C318) != 0) {
                D_003EA9E8 = 2;
                return;
            }
            D_003EA9E8 = 3;
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_00930080(D_003EA9E8);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            func_00943240();
            func_0023E0E0(0x1E);
            D_003EA9E8 += 1;
            return;
        case 1:                                     /* switch 3 */
            func_00943240();
            D_003EA9E8 -= 1;
            return;
        }
        break;
    case 3:                                         /* switch 1 */
        temp_v0_3 = func_008C94A0(D_003EA9E8);
        switch (temp_v0_3) {                        /* switch 4; irregular */
        case 1:                                     /* switch 4 */
            D_003EA9E8 = 1;
            return;
        case 2:                                     /* switch 4 */
            func_0026E560(0x9A080400);
            D_003EA9E8 = 4;
            return;
        }
        break;
    case 4:                                         /* switch 1 */
        func_008B6530(D_003EA9E8);
        func_008B5EF0();
        D_003EA9E8 = 0;
        (*(s16 *)D_0053C302) = 3;
        D_003E9A88 = 1;
        return;
    }
}
