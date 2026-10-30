/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001B0B00();                            /* extern */
M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_0023F3A0();                            /* extern */
M2C_UNK func_00241640();                            /* extern */
M2C_UNK func_00266A30(M2C_UNK);                     /* extern */
M2C_UNK func_002DED00(s32);                         /* extern */
s32 func_00814FC0(M2C_UNK *);                       /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
s32 func_00825610();                                /* extern */
M2C_UNK func_008804D0();                            /* extern */
M2C_UNK func_008B2880();                            /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_008C7850();                            /* extern */
M2C_UNK func_009435B0();                            /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FD20();                            /* extern */
extern s32 D_003E78DC;
extern s32 D_003E9A4C;
extern s32 D_003E9A58;
extern s32 D_003EA488;
extern s32 D_003EA48C;
extern s32 D_003EA490;
extern s32 D_003EA498;
extern s32 D_003EA4B0;
extern char D_008DA9E0[];
extern char D_008E7850[];
extern char D_008E7854[];
extern char D_008E7858[];
extern char D_008E785C[];

s32 func_008C76E0(void) {
    switch (D_003EA498) {                           /* irregular */
    case 0:
        if ((func_0017F900() == 1) && (func_00814FC0(((void *)D_008DA9E0)) == 1)) {
            func_008C7850();
            if (func_00825610() != 6) {
                func_009435B0();
            } else {
                func_008B2880();
            }
            func_0081D240(0);
            func_0081D200(0);
            func_001B8DC0();
            func_008B34C0();
            func_00266A30(0);
            func_00266A30(1);
            func_00241640();
            func_00D0F680(0);
            func_00D0C980();
            func_00D0FBE0(0);
            func_00D0FD20();
            func_0023F3A0();
            D_003EA498 = 1;
        }
    default:
        return 0;
    case 1:
        func_002DED00(D_003EA488);
        func_001B0B00();
        func_008804D0();
        D_003EA498 = 0;
        D_003E78DC = -1;
        D_003E9A58 = 0;
        (*(s32 *)D_008E7850) = 0;
        D_003EA48C = 0;
        (*(s32 *)D_008E7854) = 0;
        D_003E9A4C = 0;
        (*(s32 *)D_008E7858) = 0;
        D_003EA490 = 0;
        (*(s32 *)D_008E785C) = 0;
        D_003EA4B0 = 0;
        return 1;
    }
}
