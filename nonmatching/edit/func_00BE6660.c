/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00221500(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC40A0();                                /* extern */
s32 func_00BC5ED0(u16);                             /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BE67A0(void *);                          /* extern */
s32 func_00BF3B70(M2C_UNK);                         /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s32 func_00BF44B0(M2C_UNK, s32);                    /* extern */
s32 func_00BF5800(M2C_UNK);                         /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE5F50;
extern M2C_UNK func_00BE6590;
extern M2C_UNK func_00BE6CA0;

s32 func_00BE6660(void *arg0) {
    M2C_UNK *var_v0_2;
    s32 temp_v0;
    s32 var_v0;

    if ((func_00BC5ED0(M2C_FIELD(arg0, u16 *, 8)) != 0) && (func_00BCF3A0(0x02000000) != 0)) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE6590;
        func_0026E840(0x84028400);
    }
    if (func_00221500(func_00BF44B0(0, func_00BF5890(0)) & 0xFFFF) != 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_00BC40A0();
    }
    if (var_v0 == 0) {
        if (func_00BE67A0(arg0) == 0) {
            temp_v0 = func_00BF3B70(0);
            switch (temp_v0) {                      /* irregular */
            case 0:
                if (func_00BF5800(0) != 0) {
                    func_00BF4370(0);
                    func_00C1B420(0);
                    func_00B91590(0x19, 1);
                }
                break;
            case 1:
                var_v0_2 = &func_00BE5F50;
block_24:
                M2C_FIELD(arg0, M2C_UNK **, 0) = var_v0_2;
                break;
            case 2:
                var_v0_2 = &func_00BE6CA0;
                goto block_24;
            }
        }
    }
    return 0;
}
