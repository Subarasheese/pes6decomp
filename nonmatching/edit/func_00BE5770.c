/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BF4260(M2C_UNK);                         /* extern */
s32 func_00BF70A0();                                /* extern */
extern M2C_UNK func_00BE4F20;
extern M2C_UNK func_00BE55D0;
extern M2C_UNK func_00BE5910;

s32 func_00BE5770(void *arg0) {
    s32 temp_v0;

    if (func_00BCF3A0(0x08000000) == 0) {
        if (func_00BF4260(0) != 0) {

        } else {
            temp_v0 = func_00BF70A0();
            switch (temp_v0) {                      /* irregular */
            case 1:
                M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE55D0;
                break;
            case 2:
                M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5910;
                break;
            }
        }
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE4F20;
        func_0026E840(0x84028400);
    }
    return 0;
}
