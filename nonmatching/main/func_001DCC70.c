/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052ADF0[];
extern char D_0052ADF4[];
extern char D_0052ADF8[];
extern char D_0052ADFC[];
extern char D_0052AE00[];
extern char D_0052AE04[];
extern char D_0052AE08[];

void *func_001DCC70(void *arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (arg0 == ((void *)D_0052ADF0)) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (*(f32 *)D_0052ADF0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (*(f32 *)D_0052ADF4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (*(f32 *)D_0052ADF8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (*(f32 *)D_0052ADFC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (*(f32 *)D_0052AE00);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (*(f32 *)D_0052AE04);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (*(f32 *)D_0052AE08);
    return arg0;
}
