/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_00932FA0();                                /* extern */
s32 func_00933180();                                /* extern */
s32 func_009333B0();                                /* extern */
s32 func_00939CF0(M2C_UNK);                         /* extern */
extern s32 D_003EAA08;
extern s8 D_003EAA3C;
extern char D_0053C300[];
extern char D_0053C310[];

s32 func_009338F0(void) {
    s32 var_s1;

    var_s1 = 0;
    if ((*(s32 *)D_0053C310) == 0) {
        switch (M2C_FIELD(((void *)D_0053C300), s16 *, 6)) { /* irregular */
        case 4:
            if ((D_003EAA3C == -1) && (func_00939CF0(1) == 1)) {
                func_00213540(D_003EAA08, 0);
block_20:
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 2;
            }
            break;
        case 3:
            if ((D_003EAA3C == -1) && (func_00939CF0(0) == 1)) {
                func_00213540(D_003EAA08, 0);
                goto block_20;
            }
            break;
        case 0:
            var_s1 = func_009333B0();
            break;
        case 1:
            var_s1 = func_00933180();
            break;
        case 2:
            var_s1 = func_00932FA0();
            break;
        }
    }
    return var_s1;
}
