/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00BD6D70(s32);                           /* extern */
extern void *D_00CE56A0;
extern char D_00CE56AC[];

void func_00BD6A00(void) {
    if (M2C_FIELD(D_00CE56A0, s32 *, 0) != 0) {
        M2C_FIELD(D_00CE56A0, s32 *, 0x20) = 0;
        (*(s32 *)D_00CE56AC) = M2C_FIELD(D_00CE56A0, s32 *, 0x1C);
        D_00CE56A0 = func_00BD6D70(M2C_FIELD(D_00CE56A0, s32 *, 0x18));
    }
}
