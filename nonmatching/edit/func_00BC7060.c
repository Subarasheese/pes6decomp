/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C4698(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK *func_00220AD0(s32, M2C_UNK);               /* extern */
M2C_UNK func_00220D00(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK *func_00220EF0(M2C_UNK);                    /* extern */
M2C_UNK func_002D5020();                            /* extern */
M2C_UNK func_002D5060();                            /* extern */
s32 func_00BC4450(M2C_UNK *);                       /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
M2C_UNK func_00D13D80(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00D14030();                                /* extern */
M2C_UNK func_00D141E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00D14C20(M2C_UNK);                     /* extern */
M2C_UNK func_00D14D50(M2C_UNK *);                   /* extern */
M2C_UNK func_00D14F60(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
extern s32 D_003EAFA0;
extern char D_00CE4ED0[];

s32 func_00BC7060(s32 arg0) {
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s3;
    M2C_UNK var_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s1 = 1;
    var_s0 = 0;
    temp_s3 = func_00220EF0(1);
    temp_s2 = func_00220AD0(arg0, 1);
    switch (D_003EAFA0) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_002D5060();
        func_00D15450();
        func_00D14D50(temp_s3);
        func_00D14F60(6);
        func_00D15060(0);
        func_00D14C20(0xE6);
        func_00D141E0(0, 0, 0, 0x3C, 0, 1, temp_s2);
        D_003EAFA0 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        temp_v0 = func_00D14030();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_00D13D80(((void *)D_00CE4ED0), 0x3D);
            if ((func_001C4698(temp_s3, ((void *)D_00CE4ED0), 0x3C) != 0) && (func_00BC4450(((void *)D_00CE4ED0)) == 0)) {
                if (func_001C4698(((void *)D_00CE4ED0), temp_s2, 0x3C) != 0) {
                    var_s1 = 0;
                }
                func_00220D00(arg0, 1, ((void *)D_00CE4ED0), var_s1);
                func_00C1B380(0xE);
            }
            /* fallthrough */
        case 2:                                     /* switch 2 */
            func_00D13BE0();
            func_002D5020();
            D_003EAFA0 = 0;
            var_s0 = 1;
            break;
        }
        break;
    }
    return var_s0;
}
