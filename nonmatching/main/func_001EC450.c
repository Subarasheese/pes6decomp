/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052B170[];

s32 func_001EC450(void *arg0, f32 fparg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0) = fparg0;
    if (M2C_FIELD(((void *)D_0052B170), void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(((void *)D_0052B170), void **, 8), void **, 0x10) = arg0;
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(((void *)D_0052B170), void **, 8);
    } else {
        M2C_FIELD(((void *)D_0052B170), void **, 4) = arg0;
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    M2C_FIELD(((void *)D_0052B170), void **, 8) = arg0;
    M2C_FIELD(((void *)D_0052B170), s32 *, 0) = (s32) (M2C_FIELD(((void *)D_0052B170), s32 *, 0) + 1);
    M2C_FIELD(((void *)D_0052B170), s32 *, 0x1C) = (s32) (M2C_FIELD(((void *)D_0052B170), s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    return 1;
}
