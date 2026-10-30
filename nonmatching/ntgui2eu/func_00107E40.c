/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00107318();                            /* extern */
M2C_UNK func_001073A8();                            /* extern */
M2C_UNK func_001190E8(s32, s32);                    /* extern */
M2C_UNK func_00119180(M2C_UNK);                     /* extern */
M2C_UNK func_00119364(M2C_UNK);                     /* extern */
extern char D_002B9F00[];

void func_00107E40(s32 arg0, s32 arg1) {
    func_00119180(0x3F266665);
    func_001190E8(arg0, arg1 - (*(s32 *)D_002B9F00));
    func_00119364(1);
    func_00107318();
    func_001073A8();
}
