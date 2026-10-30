/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern char D_009C2758[];
extern char D_00A79CC0[];

M2C_UNK *func_0095C4D0(s32 arg0) {
    sprintf(((void *)D_00A79CC0), ((void *)D_009C2758), arg0);
    return ((void *)D_00A79CC0);
}
