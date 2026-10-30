/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK DTX_CallUrpc(M2C_UNK, s32 *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00510AC0[];
extern char D_00510B00[];
extern char D_00510C00[];

M2C_UNK *func_00178CA0(s32 arg0) {
    (*(s32 *)D_00510B00) = arg0;
    DTX_CallUrpc(0x24, ((void *)D_00510B00), 1, ((void *)D_00510C00), 4);
    M2C_FIELD(((void *)D_00510AC0), s32 *, 0) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 0);
    M2C_FIELD(((void *)D_00510AC0), s32 *, 4) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 4);
    M2C_FIELD(((void *)D_00510AC0), s32 *, 8) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 8);
    M2C_FIELD(((void *)D_00510AC0), s32 *, 0xC) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 0xC);
    return ((void *)D_00510AC0);
}
