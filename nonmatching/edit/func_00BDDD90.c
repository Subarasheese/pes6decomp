/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00BC55C0(s32);                         /* extern */
M2C_UNK func_00BC87E0(s32);                         /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BDDF60(M2C_UNK);                     /* extern */
M2C_UNK func_00BF3E50(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4260(M2C_UNK);                     /* extern */
s32 func_00BF70A0();                                /* extern */
s32 func_00BF73D0();                                /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE5900[];

s32 func_00BDDD90(s32 arg0) {
    s32 temp_s0;

    if (func_00BCF3A0(0x08000000) != 0) {
        func_00BF3E50(1);
        func_0026E840(0x84028400);
        return 3;
    }
    if (func_00BF73D0() != 0) {
        func_00BF4260(0);
    }
    temp_s0 = func_00BF70A0();
    if (((*(s32 *)D_00CE5900) != 0) && (func_00B9FBB0() != 0)) {
        func_00BC87E0(func_00C1B460(0) & 0xFFFF);
        (*(s32 *)D_00CE5900) = 0;
    }
    if (temp_s0 == 2) {
        func_00BC55C0(arg0);
    }
    func_00BDDF60(0);
    return temp_s0;
}
