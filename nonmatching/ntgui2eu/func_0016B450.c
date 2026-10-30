/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C928(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0018CB00(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_005BFF9C[];
extern char D_005BFFA0[];
extern char D_005BFFA4[];
extern char D_005BFFA8[];
extern char D_005BFFAC[];

void func_0016B450(void) {
    func_0018CB00(((void *)D_005BFF9C), ((void *)D_005BFFA0), ((void *)D_005BFFA4));
    func_0018C928(((void *)D_005BFFA8), ((void *)D_005BFFAC));
}
