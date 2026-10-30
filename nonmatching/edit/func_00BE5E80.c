/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BF70A0();                                /* extern */
M2C_UNK func_00BF7670(M2C_UNK);                     /* extern */
s32 func_00BF76E0(u16);                             /* extern */
M2C_UNK func_00BF7810();                            /* extern */
extern M2C_UNK func_00BE5BF0;
extern M2C_UNK func_00BE5DE0;
extern M2C_UNK func_00BE68F0;

s32 func_00BE5E80(void *arg0) {
    s32 temp_v0;

    if ((func_00BCF3A0(0x1000) != 0) && (func_00BF76E0(M2C_FIELD(arg0, u16 *, 0xA)) != 0)) {
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5DE0;
        return 0;
    }
    if (func_00BCF3A0(0x4000) != 0) {
        func_00BF7670(0);
    }
    temp_v0 = func_00BF70A0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5BF0;
        func_00BF7810();
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00BE68F0;
        func_00BF7810();
        break;
    }
    return 0;
}
