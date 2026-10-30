/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK DTX_CallUrpc(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00510B00[];
extern char D_00510C00[];

void func_00178D40(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(((void *)D_00510B00), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_00510B00), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_00510B00), s32 *, 8) = arg2;
    DTX_CallUrpc(0x26, ((void *)D_00510B00), 3, ((void *)D_00510C00), 2);
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(((void *)D_00510C00), s32 *, 4);
}
