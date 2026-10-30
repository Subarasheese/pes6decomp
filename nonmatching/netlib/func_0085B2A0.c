/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE260(void);
extern s32 func_002DDA00(void);
extern s32 func_002DD700(void);
extern s32 func_002DD670(void);
extern s32 func_002DE880(s32);
M2C_UNK printf(M2C_UNK *);                   /* extern */
M2C_UNK func_00857F50();                            /* extern */
s32 *func_008580D0();                               /* extern */
extern s32 D_003E9D60;
extern s32 D_003EA350;
extern char D_008893E0[];

s32 func_0085B2A0(void) {
    s32 *temp_s0;

    temp_s0 = func_008580D0();
    switch (D_003EA350) {                           /* irregular */
    case 3:
        func_00857F50();
        func_002DE260();
        func_002DE880(*temp_s0);
        D_003EA350 -= 1;
        /* fallthrough */
    case 2:
        func_002DD700();
        D_003EA350 -= 1;
        /* fallthrough */
    case 1:
        if (func_002DD670() >= 0) {
            D_003EA350 -= 1;
        }
    default:
        return 0;
    case 0:
        func_002DDA00();
        D_003E9D60 = 0;
        D_003EA350 = 0;
        printf(((void *)D_008893E0));
        return 1;
    }
}
