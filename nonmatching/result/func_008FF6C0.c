/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001540B0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00182AE0(M2C_UNK);                     /* extern */
M2C_UNK func_0022DA50();                            /* extern */
s32 func_0026C760();                                /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
s32 func_00366290();                                /* extern */
s32 func_00814FC0(M2C_UNK *);                       /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_0084A750();                            /* extern */
s32 func_00884030();                                /* extern */
M2C_UNK func_008F6080();                            /* extern */
M2C_UNK func_008F63D0();                            /* extern */
M2C_UNK func_008FF570();                            /* extern */
M2C_UNK func_009112B0();                            /* extern */
M2C_UNK func_0091D4D0();                            /* extern */
M2C_UNK func_00C913F0(M2C_UNK);                     /* extern */
extern char D_0058D7A8[];
extern char D_0058D7AA[];
extern char D_00591BB7[];
extern char D_0091ED80[];
extern char D_00920F38[];
extern char D_00921DC4[];

s32 func_008FF6C0(void) {
    func_001540B0((*(s32 *)D_0091ED80), 0);
    if ((*(s8 *)D_0058D7AA) != 0) {
        if (((*(s8 *)D_0058D7A8) == 0) && (func_00884030() == 0)) {
            func_0084A750();
        }
        if (func_0026C760() != 0) {
            func_0091D4D0();
        }
        if (func_00814FC0(((void *)D_00920F38)) != 0) {
            func_0081D240(0);
            goto block_11;
        }
        return 0;
    }
block_11:
    if (func_0026C760() != 0) {
        func_0022DA50();
        func_00C913F0(0);
    }
    func_008F6080();
    if (func_00366290() == 0) {
        func_008F63D0();
    } else if ((func_0026C760() == 0) || ((*(s32 *)D_00921DC4) == 1)) {
        func_008F63D0();
    }
    func_009112B0();
    if ((*(u8 *)D_00591BB7) == 1) {
        func_00182AE0(1);
    }
    func_008FF570();
    func_002CBA60(0xB);
    return 1;
}
