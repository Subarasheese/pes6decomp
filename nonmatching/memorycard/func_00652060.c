/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, s32);               /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
M2C_UNK func_00D13D80(s32, s32);                    /* extern */
M2C_UNK func_00D13DD0();                            /* extern */
s32 func_00D14030();                                /* extern */
M2C_UNK func_00D141E0(s32, s32, M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_00D14C20(s32);                         /* extern */
M2C_UNK func_00D14C60(M2C_UNK *);                   /* extern */
M2C_UNK func_00D14D50(s32);                         /* extern */
M2C_UNK func_00D14F60(s32);                         /* extern */
M2C_UNK func_00D15060(s32);                         /* extern */
M2C_UNK func_00D15350(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
M2C_UNK func_00D16930();                            /* extern */
extern s32 D_003EA238;
extern char D_0065E6A0[];

s32 func_00652060(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    s32 temp_v0;
    s32 var_s5;

    var_s5 = 0;
    switch (D_003EA238) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        func_00D13D80(arg7, arg4 + 1);
        func_00D13BE0();
        D_003EA238 = 0;
        var_s5 = 1;
        break;
    default:                                        /* switch 1 */
        D_003EA238 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        func_00D15450();
        func_00D16930();
        func_00D14C60(((void *)D_0065E6A0));
        func_00D14F60(arg0);
        func_00D14C20(arg6);
        func_00D15060(arg1);
        func_00D15350(1);
        func_00D14D50(arg7);
        func_00D141E0(arg2, arg3, 0, arg4, arg5, 0, arg_sp0);
        D_003EA238 = 2;
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00D14030();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_00D13DD0();
            D_003EA238 = 3;
            break;
        case 2:                                     /* switch 2 */
            func_00D13DD0();
            D_003EA238 = 4;
            break;
        }
        break;
    case 4:                                         /* switch 1 */
        func_001C4730(arg7, arg_sp0, arg4);
        func_00D13BE0();
        D_003EA238 = 0;
        var_s5 = 2;
        break;
    }
    return var_s5;
}
