/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00853220(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00B29110();                                /* extern */
s32 func_00BC44F0();                                /* extern */
s32 func_00C00390(M2C_UNK);                         /* extern */
M2C_UNK func_00C00440(M2C_UNK, s32);                /* extern */
extern char D_00591C09[];
extern char D_008524E0[];
extern char D_00855180[];

s32 func_00BC54E0(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(u8 *)D_00591C09) != 5) {
        if (func_00BC44F0() != 0) {
            func_00C00440(1, func_00C00390(1));
            if (func_002DCA30() != 0) {
                func_00853220(-9, ((void *)D_008524E0), ((void *)D_00855180), 7);
            }
            goto block_5;
        }
    } else if (func_00B29110() != 0) {
block_5:
        var_s0 = 1;
    }
    return var_s0;
}
