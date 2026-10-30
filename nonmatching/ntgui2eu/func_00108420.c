/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_002CA1C0[];
extern char D_005F7720[];

void func_00108420(void) {
    func_0019DBD0(((void *)D_005F7720));
    M2C_FIELD(((void *)D_002CA1C0), s8 *, 1) = 0;
    M2C_FIELD(((void *)D_002CA1C0), s8 *, 0) = 0;
}
