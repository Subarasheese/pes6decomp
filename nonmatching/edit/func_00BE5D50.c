/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC5150(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00BE4A80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BE6A70(u16);                         /* extern */
M2C_UNK func_00BF72C0();                            /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE6B70;

s32 func_00BE5D50(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00BC5150(0xED0000, 0x6C001A);
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_00BE4A80(0x40, 0xCB);
        func_00C04330();
        func_00C1B380(7);
        func_00BE6A70(M2C_FIELD(arg0, u16 *, 8));
        /* fallthrough */
    case 2:
        func_00BF72C0();
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE6B70;
        break;
    }
    return 0;
}
