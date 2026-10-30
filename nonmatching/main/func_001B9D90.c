/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005247AB[];
extern char D_005247B0[];
extern char D_005247B4[];
extern char D_005247B8[];
extern char D_005247BC[];

void func_001B9D90(void *arg0) {
    (*(f32 *)D_005247B0) = M2C_FIELD(arg0, f32 *, 0);
    (*(s8 *)D_005247AB) = 1;
    (*(f32 *)D_005247B4) = M2C_FIELD(arg0, f32 *, 4);
    (*(f32 *)D_005247B8) = M2C_FIELD(arg0, f32 *, 8);
    (*(f32 *)D_005247BC) = M2C_FIELD(arg0, f32 *, 0xC);
}
