/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019C198(M2C_UNK);                     /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
s32 func_0019F030(M2C_UNK *);                       /* extern */
extern char D_005C8DD0[];
extern char D_005C8DF4[];
extern char D_005C9F90[];
extern char D_005FEAD8[];

s32 func_001915D0(s32 arg0) {
    s32 var_v0;

    if (arg0 == 0) {
        if ((*(s32 *)D_005C8DD0) > 0) {
            func_0019DBD0(((void *)D_005FEAD8));
        }
loop_5:
        if (*(s32 *)0x5C8DF4 != 0) {
block_4:
            func_0019C198(0xFA0);
            goto loop_5;
        }
        if (func_0019F030((M2C_UNK *)0x5C9F90) != 0) {
            goto block_4;
        }
        return 0;
    }
    var_v0 = 1;
    if ((*(s32 *)D_005C8DF4) == 0) {
        var_v0 = 1;
        if (func_0019F030(((void *)D_005C9F90)) == 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
