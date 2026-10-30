/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00815450(void **, void **, void *);        /* extern */
s32 func_008156F0();                                /* extern */
s32 func_0093D4B0(void **);                         /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
extern void *D_00A68CA8;

void func_00969A00(void) {
    void *temp_v0;

    if (D_00A68CA8 == NULL) {
        temp_v0 = func_0099C7F0(0x194);
        D_00A68CA8 = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x168) = 0;
        M2C_FIELD(D_00A68CA8, s32 *, 0x16C) = 0;
        M2C_FIELD(D_00A68CA8, s32 *, 0x170) = 0;
        M2C_FIELD(D_00A68CA8, s32 *, 0x178) = func_0093D4B0(&D_00A68CA8);
        M2C_FIELD(D_00A68CA8, s32 *, 0x174) = 0;
        M2C_FIELD(D_00A68CA8, s32 *, 0x180) = 0;
        M2C_FIELD(D_00A68CA8, s32 *, 0x190) = 0;
        if (func_00815450(&D_00A68CA8, &D_00A68CA8, D_00A68CA8) != 0) {
            M2C_FIELD(D_00A68CA8, s32 *, 0x18C) = 1;
        } else {
            M2C_FIELD(D_00A68CA8, s32 *, 0x18C) = 0;
        }
    }
    if ((M2C_FIELD(D_00A68CA8, s32 *, 0x18C) == 0) || (func_008156F0() == 1)) {
        func_009717C0(1);
    }
}
