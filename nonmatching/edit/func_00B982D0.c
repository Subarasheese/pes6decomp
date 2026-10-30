/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_00629580(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AA0(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AE0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0062A1F0(M2C_UNK *, s32, M2C_UNK *);   /* extern */
s32 func_00B91390();                                /* extern */
M2C_UNK func_00B98400(M2C_UNK *);                   /* extern */
M2C_UNK func_00B988A0(M2C_UNK *);                   /* extern */
extern char D_00CE3D80[];
extern char D_00CE3EF0[];

void func_00B982D0(void) {
    if (func_00B91390() == 0) {
        if (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 1) != 0) {
            M2C_FIELD(((void *)D_00CE3EF0), u8 *, 1) = 0U;
            if (M2C_FIELD(((void *)D_00CE3D80), s32 *, 0) == 0) {
                func_00629580(((void *)D_00CE3D80));
                func_00629AA0(((void *)D_00CE3D80));
            }
            func_00629AE0(((void *)D_00CE3D80), ((void *)D_00CE3EF0));
            func_00B98400(((void *)D_00CE3D80));
            func_00B988A0(((void *)D_00CE3D80));
            func_0062A1F0(((void *)D_00CE3D80), M2C_FIELD(((void *)D_00CE3D80), s32 *, 0x144), ((void *)D_00CE3EF0));
            if (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 5) == 1) {
                M2C_FIELD(((void *)D_00CE3EF0), u8 *, 5) = 0U;
                func_001D7D60(M2C_FIELD(M2C_FIELD(((void *)D_00CE3D80), void **, 4), void **, 0x20), (s8) M2C_FIELD(((void *)D_00CE3EF0), u8 *, 0xE));
            }
        }
        return;
    }
    M2C_FIELD(((void *)D_00CE3EF0), s8 *, 0xC) = 5;
}
