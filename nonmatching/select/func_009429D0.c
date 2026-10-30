/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00241640(void);
extern void func_001AC410(void);
extern s32 func_001B8DC0(void);
extern s32 func_002DED00(s32);
M2C_UNK func_001A5900();                            /* extern */
M2C_UNK func_0023F3A0();                            /* extern */
s32 func_00814FC0(M2C_UNK *);                       /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_008804D0();                            /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_009435B0();                            /* extern */
M2C_UNK func_00D0C980();                            /* extern */
extern s32 D_003E9A50;
extern s32 D_003E9A54;
extern s32 D_003E9A5C;
extern s32 D_003EABE8;
extern s32 D_003EABEC;
extern s32 D_003EABF4;
extern char D_0053C318[];
extern char D_00966870[];

s32 func_009429D0(void) {
    switch (D_003EABF4) {                           /* irregular */
    case 0:
        if (func_00814FC0(((void *)D_00966870)) == 1) {
            (*(s32 *)D_0053C318) = 0;
            func_009435B0();
            func_0081D240(0);
            func_0081D200(0);
            func_001B8DC0();
            func_008B34C0();
            func_00241640();
            func_00D0C980();
            func_0023F3A0();
            func_001A5900();
            func_001AC410();
            D_003EABF4 = 1;
        }
    default:
        return 0;
    case 1:
        func_002DED00(D_003E9A5C);
        func_008804D0();
        D_003EABF4 = 0;
        D_003E9A54 = 0;
        D_003EABE8 = 0;
        D_003E9A50 = 0;
        D_003EABEC = 0;
        return 1;
    }
}
