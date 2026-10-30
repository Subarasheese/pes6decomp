/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAA4C;
extern char D_00510FD0[];

void func_00934540(s32 arg0) {
    if (((*(s32 *)D_00510FD0) == 4) && (D_003EAA4C != NULL) && (M2C_FIELD(D_003EAA4C, s32 *, 4) != arg0)) {
loop_3:
        if (D_003EAA4C != NULL) {
            if (M2C_FIELD(D_003EAA4C, s32 *, 4) != arg0) {
                D_003EAA4C = M2C_FIELD(D_003EAA4C, void **, 0x1C);
                goto loop_3;
            }
            M2C_FIELD(M2C_FIELD(D_003EAA4C, void **, 0x18), void **, 0x1C) = (void *) M2C_FIELD(D_003EAA4C, void **, 0x1C);
        }
        if (D_003EAA4C == NULL) {
            D_003EAA4C = D_003EAA4C;
            return;
        }
        M2C_FIELD(D_003EAA4C, void **, 0x1C) = (void *) D_003EAA4C;
    }
}
