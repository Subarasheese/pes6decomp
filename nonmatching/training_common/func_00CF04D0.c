/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A60(s32);
extern int func_002646D0(int);
extern s32 func_001BE4D0(s32);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE42B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CE4470();                            /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CEE910(s32, M2C_UNK);                /* extern */
M2C_UNK func_00CEE980(s32, M2C_UNK);                /* extern */
M2C_UNK func_00CEEAD0(s32);                         /* extern */
extern s32 *D_003E7E1C;
extern char D_00CF9F70[];

s32 func_00CF04D0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00CEE910(arg0, 3);
        func_001B6460(0);
        func_001B7A60(0);
        if (*D_003E7E1C != 1) {
            func_00CE44F0(arg0);
        } else {
            func_00CE4470();
            func_00CE4540(arg0);
        }
        break;
    case 2:
        func_00CEE980(arg0, 3);
        if (*D_003E7E1C != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_001BE4D0(0) != 0) {
            *D_003E7E1C = 0;
            func_002646E0(arg0);
        }
        break;
    case 0:
        func_00CE42B0(((void *)D_00CF9F70), 3);
        func_001B6460(1);
        func_001B7A60(1);
        func_00CEEAD0(arg0);
        func_002646E0(arg0);
        break;
    }
    return 0;
}
