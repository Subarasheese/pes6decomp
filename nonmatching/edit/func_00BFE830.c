/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C4698(s32, s32, M2C_UNK);               /* extern */
s32 func_00220B20();                                /* extern */
M2C_UNK func_00221020(s32, s32);                    /* extern */
M2C_UNK func_00221070(s32, s32);                    /* extern */
M2C_UNK func_002D5020();                            /* extern */
M2C_UNK func_002D5060();                            /* extern */
s32 func_00BC4450(s32);                             /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
M2C_UNK func_00D13D80(s32, M2C_UNK);                /* extern */
s32 func_00D14030();                                /* extern */
M2C_UNK func_00D141E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00D14C20(M2C_UNK);                     /* extern */
M2C_UNK func_00D14D50(s32);                         /* extern */
M2C_UNK func_00D14F60(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
extern s32 D_003EB0E4;

s32 func_00BFE830(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_s1 = func_00220B20();
    switch (D_003EB0E4) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg1 == 0) {
            return 1;
        }
        func_002D5060();
        func_00D15450();
        func_00D14D50(arg1);
        func_00D14F60(6);
        func_00D15060(0);
        func_00D14C20(0x180);
        func_00D141E0(0, 0, 0, 0x3C, 0, 1, temp_s1);
        D_003EB0E4 = 1;
    case 1:                                         /* switch 1 */
        temp_v0 = func_00D14030();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_00D13D80(arg1, 0x3D);
            if ((func_001C4698(arg2, arg1, 0x3C) != 0) && (func_00BC4450(arg1) == 0)) {
                func_00221020(arg0, func_001C4698(arg1, temp_s1, 0x3C) & 0xFF);
                func_00221070(arg0, arg1);
                func_00C1B380(4);
            }
            /* fallthrough */
        case 2:                                     /* switch 2 */
            func_00D13BE0();
            func_002D5020();
            D_003EB0E4 = 0;
            var_s0 = 1;
            break;
        }
    default:                                        /* switch 1 */
        return var_s0;
    }
}
