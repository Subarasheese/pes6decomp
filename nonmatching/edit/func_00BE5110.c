/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC40A0();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BE5410(void *);                          /* extern */
s32 func_00BF3B70(M2C_UNK);                         /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s32 func_00BF5800(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE4D40;
extern M2C_UNK func_00BE4FF0;
extern M2C_UNK func_00BE5040;
extern M2C_UNK func_00BE50C0;
extern M2C_UNK func_00BE55D0;

s32 func_00BE5110(void *arg0) {
    s32 temp_v0;

    if (func_00BCF3A0(0x08000000) == 0) {
        if (func_00BCF3A0(0x02000000) != 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE50C0;
            M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE4FF0;
            func_0026E840(0x84028400);
        } else if (func_00BC40A0() == 0) {
            if (func_00BE5410(arg0) == 0) {
                temp_v0 = func_00BF3B70(1);
                switch (temp_v0) {                  /* irregular */
                case 0:
                    if (func_00BF5800(1) != 0) {
                        func_00BF4370(1);
                        func_00C1B420(1);
                        func_00B91590(0x19, 1);
                    }
                    break;
                case 1:
                    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE4D40;
                    break;
                case 2:
                    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE55D0;
                    break;
                }
            }
        }
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE50C0;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5040;
        func_0026E840(0x84028400);
    }
    return 0;
}
