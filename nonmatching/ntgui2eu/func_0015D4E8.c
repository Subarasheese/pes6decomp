/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011E6B44)(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern char D_011E6B48[];
extern char D_011E6B4C[];
extern char D_011E6B50[];
extern char D_011E6B54[];
extern char D_011E6B58[];

void func_0015D4E8(void) {
    if (((*(s32 *)D_011E6B58) != 0) && (D_011E6B44 != NULL)) {
        D_011E6B44(((void *)D_011E6B48), ((void *)D_011E6B4C), ((void *)D_011E6B50), ((void *)D_011E6B54));
    }
}
