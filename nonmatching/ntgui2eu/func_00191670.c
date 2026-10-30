/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019C198(M2C_UNK);                     /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
s32 func_0019F030(M2C_UNK *);                       /* extern */
extern char D_005C8DD0[];
extern char D_005CA940[];
extern char D_005FEAE8[];

s32 func_00191670(s32 arg0) {
    if (arg0 == 0) {
        if ((*(s32 *)D_005C8DD0) > 0) {
            func_0019DBD0(((void *)D_005FEAE8));
        }
loop_5:
        if (func_0019F030((M2C_UNK *)0x5CA940) != 0) {
            func_0019C198(0xFA0);
            goto loop_5;
        }
        return 0;
    }
    return func_0019F030(((void *)D_005CA940));
}
