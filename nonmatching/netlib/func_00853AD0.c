/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(s32, M2C_UNK);                /* extern */
extern char D_008B1DF0[];
extern char D_008B1DF5[];
extern char D_008B1DF6[];
extern char D_008B1DF7[];

s32 func_00853AD0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_008B1DF0);
    if (temp_s0 != 0) {
        (*(s8 *)D_008B1DF7) = 1;
        if (arg0 != 0) {
            func_001C47E0(temp_s0 + 0xC, 0x10);
        }
        return temp_s0 + 0xC;
    }
    if ((*(s8 *)D_008B1DF5) == 0) {
        (*(s8 *)D_008B1DF6) = 0;
    }
    (*(s8 *)D_008B1DF7) = 0;
    return 0;
}
