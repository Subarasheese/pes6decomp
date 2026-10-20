/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00313950(M2C_UNK *);                   /* extern */
M2C_UNK func_0031A3D0(M2C_UNK *);                   /* extern */
M2C_UNK func_0031A750(M2C_UNK *);                   /* extern */
M2C_UNK func_0031A980(M2C_UNK *);                   /* extern */
M2C_UNK func_0031AFB0(M2C_UNK *);                   /* extern */
M2C_UNK func_0031B510(M2C_UNK *);                   /* extern */
M2C_UNK func_0031B830(M2C_UNK *);                   /* extern */
M2C_UNK func_0032E260(M2C_UNK *);                   /* extern */
M2C_UNK func_0032E880(M2C_UNK *);                   /* extern */
M2C_UNK func_00338490(M2C_UNK *);                   /* extern */
M2C_UNK func_00344D60();                            /* extern */
M2C_UNK func_00344DA0(M2C_UNK *);                   /* extern */
M2C_UNK func_00344DF0(M2C_UNK *);                   /* extern */
M2C_UNK func_0034A8D0(M2C_UNK *);                   /* extern */
M2C_UNK func_0034FFF0(M2C_UNK *);                   /* extern */
M2C_UNK func_00357040(M2C_UNK *);                   /* extern */
extern char D_003B7590[];
extern char D_003B75B0[];
extern char D_003B75C0[];
extern char D_003B75C8[];
extern char D_003B75D0[];
extern char D_003B75E8[];
extern char D_003B7600[];
extern char D_003B7610[];
extern char D_003B7630[];
extern char D_003B76D0[];
extern char D_003B76E0[];
extern u8 D_003E9F54;
extern char D_005F1E14[];
extern char D_005F2A84[];

s32 func_00342250(void) {
    if (D_003E9F54 == 0) {
        func_00344DF0(((void *)D_003B7600));
        func_0032E880(((void *)D_003B75D0));
        func_0031B510(((void *)D_003B75B0));
        func_0031A980(((void *)D_003B75C0));
        func_0032E260(((void *)D_005F2A84));
        func_0031B830(((void *)D_005F2A84));
        func_00338490(((void *)D_003B7590));
        func_00344DA0(((void *)D_003B75C8));
        func_00313950(((void *)D_003B75E8));
        func_0031A3D0(((void *)D_003B7630));
        func_0031A750(((void *)D_005F1E14));
        func_00344D60();
        func_00357040(((void *)D_003B76D0));
        func_0034A8D0(((void *)D_003B7610));
        func_0034FFF0(((void *)D_003B76E0));
        func_0031AFB0(((void *)D_003B75B0));
        D_003E9F54 = 1;
    }
    return 1;
}
