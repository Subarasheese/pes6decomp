/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BE5B0(M2C_UNK);                     /* extern */
s32 func_00237BD0();                                /* extern */
M2C_UNK func_0027CAD0();                            /* extern */
M2C_UNK func_0027CB00();                            /* extern */
M2C_UNK func_0027CB30();                            /* extern */
M2C_UNK func_002A96D0();                            /* extern */
s32 func_002D6300();                                /* extern */
M2C_UNK func_0090D4E0(M2C_UNK);                     /* extern */
s32 func_0090D5F0();                                /* extern */
M2C_UNK func_0090D630();                            /* extern */
M2C_UNK func_0090D640();                            /* extern */
extern char D_00591F2E[];

s32 func_0090EA20(void) {
    switch ((*(u8 *)D_00591F2E)) {                           /* irregular */
    case 0:
        if (func_00237BD0() == 0) {
            func_002A96D0();
        }
        func_0027CAD0();
        func_0090D630();
        if (func_0090D5F0() != 0) {
            func_001BE5B0(0);
        }
        (*(u8 *)D_00591F2E) += 1;
        /* fallthrough */
    case 1:
        func_0090D640();
        if (func_0090D5F0() == 0) {
            func_0090D4E0(0x1000);
            func_0090D4E0(0x2000);
            func_0090D4E0(0x10000);
            func_0027CB30();
            func_0027CB00();
            (*(u8 *)D_00591F2E) += 1;
        case 2:
            if (func_002D6300() != 0) {
                (*(u8 *)D_00591F2E) = 0;
                return 1;
            }
            goto block_13;
        }
block_13:
    default:
        return 0;
    }
}
