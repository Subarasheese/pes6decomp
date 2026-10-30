/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBAA1C[];
extern char D_00CBAA20[];
extern char D_00CBAA24[];

void func_009B4010(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (*(f32 *)D_00CBAA1C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (*(f32 *)D_00CBAA20);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (*(f32 *)D_00CBAA24);
}
