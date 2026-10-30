/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BF83E0(u8 *);                        /* extern */
extern char D_00591F24[];

void func_00BF8A50(void *arg0) {
    u8 sp2C;
    u8 sp2D;

    sp2C = 0;
    sp2D = 0;
    if ((*(u8 *)D_00591F24) != 7) {
        func_00BF83E0(&sp2C);
    }
    M2C_FIELD(arg0, u8 *, 0) = sp2C;
    M2C_FIELD(arg0, u8 *, 1) = sp2D;
}
