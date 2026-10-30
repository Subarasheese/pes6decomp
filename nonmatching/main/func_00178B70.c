/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK DTX_CallUrpc(M2C_UNK, M2C_UNK *, M2C_UNK, s32 *, M2C_UNK); /* extern */
extern char D_00510B00[];
extern char D_00510C00[];

s32 func_00178B70(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((void *)D_00510B00), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_00510B00), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_00510B00), s32 *, 8) = arg2;
    DTX_CallUrpc(0x20, ((void *)D_00510B00), 3, ((void *)D_00510C00), 1);
    return (*(s32 *)D_00510C00);
}
