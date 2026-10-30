/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001F84D0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_001F85A0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_002D5020();                            /* extern */
M2C_UNK func_002D5060();                            /* extern */
s32 func_00B9FBB0();                                /* extern */
s32 func_00BC4450(M2C_UNK *);                       /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
M2C_UNK func_00D13D80(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00D14030();                                /* extern */
M2C_UNK func_00D141E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00D14C20(M2C_UNK);                     /* extern */
M2C_UNK func_00D14D50(M2C_UNK *);                   /* extern */
M2C_UNK func_00D14F60(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
M2C_UNK func_00D16930();                            /* extern */
extern s32 D_003EAFFC;
extern char D_00CE5910[];
extern char D_00CE5940[];

s32 func_00BDF530(M2C_UNK *arg0, M2C_UNK *arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EAFFC) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (func_00B9FBB0() != 0) {
            func_001C48E8(((void *)D_00CE5910), 0, 0x2E);
            func_001F85A0(arg0, ((void *)D_00CE5910));
            func_001C48E8(((void *)D_00CE5940), 0, 0x2E);
            func_001F85A0(arg1, ((void *)D_00CE5940));
            func_00D15450();
            func_002D5060();
            func_00D14D50(((void *)D_00CE5910));
            func_00D16930();
            func_00D14F60(6);
            func_00D15060(0);
            func_00D14C20(0x9F);
            func_00D141E0(0, 0, 0, 0x2D, 0xF, 1, ((void *)D_00CE5940));
            D_003EAFFC += 1;
        case 1:                                     /* switch 1 */
            temp_v0 = func_00D14030();
            switch (temp_v0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_00D13D80(((void *)D_00CE5910), 0x2E);
                if (func_00BC4450(((void *)D_00CE5910)) == 0) {
                    func_001C48E8(arg0, 0, 0x20);
                    func_001F84D0(((void *)D_00CE5910), arg0);
                }
                /* fallthrough */
            case 2:                                 /* switch 2 */
                func_00D13BE0();
                func_002D5020();
                D_003EAFFC = 0;
                var_s0 = 1;
                break;
            }
        }
        break;
    }
    return var_s0;
}
