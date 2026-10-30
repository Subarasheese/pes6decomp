/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008FB320(s32);                         /* extern */
s32 func_008FF3F0();                                /* extern */
M2C_UNK func_009A3510(s32);                         /* extern */
s32 func_009A6D40();                                /* extern */
s32 func_00B29BD0();                                /* extern */
extern char D_00591DD6[];

s32 func_008F7A20(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s1_2;
    u8 temp_s1;

    temp_s1 = (*(u8 *)D_00591DD6);
    temp_s1_2 = temp_s1 & func_008FF3F0();
    if (temp_s1_2 & (func_00B29BD0() == 0)) {
        func_0026E840(0x84028400);
        func_009A3510(func_009A6D40() + 8);
        func_008FB320(arg3);
        return 2;
    }
    func_0026E840(0x8C008005);
    return 0;
}
