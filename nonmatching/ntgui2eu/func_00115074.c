/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011598C();                            /* extern */
M2C_UNK func_001AE624(M2C_UNK *, s32, s32);         /* extern */
extern char D_005F8B00[];
extern void *D_006024A8;
extern char D_011C7BB8[];

void func_00115074(s32 arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = arg1 * 4;
    if (arg1 >= 0xA) {
        M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK *, s32), 0xF4)(((void *)D_005F8B00), temp_a2);
        return;
    }
    func_001AE624(((void *)D_011C7BB8), arg0, temp_a2);
    M2C_FIELD(((void *)D_011C7BB8), s32 *, -0x208) = arg1;
    func_0011598C();
}
