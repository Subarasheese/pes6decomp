/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BF4260(M2C_UNK);                         /* extern */
s32 func_00BF70A0();                                /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF7670(M2C_UNK);                     /* extern */
s32 func_00BF76E0(u16);                             /* extern */
extern M2C_UNK func_00BE5D50;
extern M2C_UNK func_00BE68F0;
extern M2C_UNK func_00BE6A30;
extern M2C_UNK func_00BE6EB0;

s32 func_00BE6B70(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00BF73D0();
    if (func_00BCF3A0(0x08000000) == 0) {
        if (func_00BCF3A0(0x4000) != 0) {
            func_00BF7670(0);
        }
        if (temp_s1 == 1) {
            if ((func_00BCF3A0(0x1000) != 0) && (func_00BF76E0(M2C_FIELD(arg0, u16 *, 8)) != 0)) {
                func_0026E840(0x8C008005);
                M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE6A30;
                return 0;
            }
            if (func_00BF4260(0) != 0) {

            } else {
                goto block_12;
            }
            goto block_17;
        }
block_12:
        temp_v0 = func_00BF70A0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE68F0;
            break;
        case 2:
            M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE6EB0;
            break;
        }
        goto block_17;
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5D50;
    func_0026E840(0x84028400);
block_17:
    return 0;
}
