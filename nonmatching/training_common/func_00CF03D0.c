/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE42B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CF1DD0(s32);                         /* extern */
M2C_UNK func_00CF1E10(s32);                         /* extern */
M2C_UNK func_00CF1E20(s32);                         /* extern */
extern s32 *D_003E7E1C;
extern char D_00CF9F80[];

s32 func_00CF03D0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00CF1DD0(arg0);
        if (*D_003E7E1C != 1) {
            func_00CE44F0(arg0);
        } else {
            func_00CE4540(arg0);
        }
        break;
    case 2:
        func_00CF1E10(arg0);
        if (*D_003E7E1C != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        *D_003E7E1C = 0;
        func_002646E0(arg0);
        break;
    case 0:
        func_00CE42B0(((void *)D_00CF9F80), 5);
        func_00CF1E20(arg0);
        func_002646E0(arg0);
        break;
    }
    return 0;
}
