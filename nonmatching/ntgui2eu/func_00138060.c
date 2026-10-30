/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00125968(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00152010(M2C_UNK, M2C_UNK);            /* extern */
extern char D_005B3744[];
extern char D_011D7890[];

void func_00138060(s32 arg0) {
    s32 temp_s0;

    func_00137990(0, 0);
    func_00136490(M2C_FIELD(((void *)D_011D7890), s32 *, 0), arg0, 0x16);
    if (arg0 >= 0) {
        if (arg0 >= 7) {
            if (arg0 < 0xE) {
                func_00152010(0xFF, 0x14);
            }
        } else {
            func_00152010(0, 0x14);
            (*(s32 *)D_005B3744) = M2C_FIELD(((void *)D_011D7890), s32 *, 0x7890);
            temp_s0 = func_00135080(2);
            func_00125968(0, temp_s0, func_00135080(3), 0);
        }
    }
}
