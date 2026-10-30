/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00817930();                            /* extern */
M2C_UNK func_008179F0(f32 *, M2C_UNK);              /* extern */
s32 func_00D19210();                                /* extern */
extern s32 D_003E7BE8;
extern char D_009FF850[];
extern char D_009FF854[];
extern char D_009FF858[];
extern char D_009FF85C[];

void func_009BD380(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = D_003E7BE8;
    temp_v0 = func_00D19210();
    if (temp_s1 != temp_v0) {
        switch (temp_v0) {                          /* irregular */
        case 0:
            sp38 = (*(f32 *)D_009FF850);
            sp3C = (*(f32 *)D_009FF854);
            func_008179F0(&sp38, 1);
            break;
        case 1:
            func_00817930();
            break;
        case -1:
            sp30 = (*(f32 *)D_009FF858);
            sp34 = (*(f32 *)D_009FF85C);
            func_008179F0(&sp30, 1);
            break;
        }
        D_003E7BE8 = temp_v0;
    }
}
