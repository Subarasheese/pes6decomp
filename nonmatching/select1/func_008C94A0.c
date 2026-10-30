/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017A670(M2C_UNK);                         /* extern */
s32 func_0017F900();                                /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_002CE550(u16, f32 *);                  /* extern */
M2C_UNK func_002F7170();                            /* extern */
s32 func_002F72F0();                                /* extern */
s32 func_00309420();                                /* extern */
s8 func_008C7980();                                 /* extern */
s8 func_008C8700();                                 /* extern */
s32 func_008C8C00();                                /* extern */
M2C_UNK func_008C8FB0();                            /* extern */
s32 func_008C90D0();                                /* extern */
M2C_UNK func_008C9230();                            /* extern */
s32 func_00934440(s32);                             /* extern */
M2C_UNK func_00934540(s32);                         /* extern */
extern s32 D_003EA490;
extern char D_0053C300[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_008DA348[];
extern char D_008DA34C[];
extern char D_008DA350[];

s8 func_008C94A0(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 temp_s0;
    s8 var_v0;

    sp20 = (*(f32 *)D_008DA348);
    sp24 = (*(f32 *)D_008DA34C);
    sp28 = (*(f32 *)D_008DA350);
    switch (D_003EA490) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if ((func_0017A670(0) != 4) || (func_00934440(func_0021E000(0x157)) != 0)) {
            func_008C9230();
            func_008C8FB0();
            D_003EA490 += 1;
        }
block_39:
    default:                                        /* switch 1 */
        return 0;
    case 0:                                         /* switch 1 */
        if (((func_0017A670(0) != 4) && (func_0017A670(0) != 0xF)) || (func_002F72F0() != 0)) {
            if (func_0017A670(0) == 4) {
                func_00934540(func_0021E000(0x157));
            }
            if ((func_00309420() == 1) || (func_0017A670(0) == 4)) {
                func_002CE550((*(u16 *)D_00591BB0), &sp20);
                func_002CE550((*(u16 *)D_00591BB2), &sp20);
            }
            D_003EA490 += 1;
        }
        goto block_39;
    case 2:                                         /* switch 1 */
        temp_s0 = func_008C90D0();
        func_008C8FB0();
        switch (temp_s0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            D_003EA490 = 3;
            break;
        case 1:                                     /* switch 2 */
            D_003EA490 = 4;
            break;
        }
        goto block_39;
    case 3:                                         /* switch 1 */
        if (func_00309420() != 0) {
            var_v0 = func_008C8700();
        } else {
            var_v0 = func_008C7980();
        }
        M2C_FIELD(((void *)D_0053C300), s8 *, 9) = var_v0;
        func_008C8FB0();
        if (((func_0017A670(0) == 4) || (func_0017A670(0) == 0xF)) && (func_0017F900() == 1)) {
            func_002F7170();
        }
        if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) != 0) {
            D_003EA490 += 1;
        }
        goto block_39;
    case 4:                                         /* switch 1 */
        if (func_008C8C00() == 1) {
            D_003EA490 = 0;
            return M2C_FIELD(((void *)D_0053C300), s8 *, 9);
        }
        goto block_39;
    }
}
