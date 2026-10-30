/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010C8F0();                                /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_002BFD10[];
extern char D_005F76B0[];

void func_00108048(void) {
    (*(s32 *)D_002BFD10) = func_0010C8F0();
    func_0019DBD0(((void *)D_005F76B0));
}
