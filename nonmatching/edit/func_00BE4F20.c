/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC5150(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00BE4A80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE5BD8[];
extern M2C_UNK func_00BE5770;

s32 func_00BE4F20(void *arg0) {
    s32 temp_v0;
    u16 temp_s1;

    temp_v0 = func_00BC5150(0xED0000, 0x6C001A);
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_00BE4A80(0, 0x38);
        func_00C04330();
        func_00C1B380(7);
        temp_s1 = M2C_FIELD(arg0, u16 *, 8);
        (*(u16 *)D_00CE5BD8) = temp_s1;
        func_00C1B440(0, temp_s1);
        func_00C1B440(1, temp_s1);
        func_00BF45D0(0, temp_s1, 0, 0, 0);
        func_00BE6F80();
        func_00B91590(0x1E, 1);
        /* fallthrough */
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5770;
        break;
    }
    return 0;
}
