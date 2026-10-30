/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F1F10();                                /* extern */
s32 func_001F2050(s32);                             /* extern */
M2C_UNK func_001F3C40(s32, M2C_UNK);                /* extern */
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */
M2C_UNK func_001F3D80(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern char D_003AE9DC[];
extern char D_003AE9FC[];

void func_0026AC20(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_001F1F10();
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    func_001F3D10(temp_v0, 1);
    func_001F3C40(M2C_FIELD(arg0, s32 *, 0), 3);
    temp_v0_2 = func_001F2050(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
    func_001F3D10(temp_v0_2, 1);
    func_001F3D80(M2C_FIELD(arg0, s32 *, 4), ((void *)D_003AE9DC), 0);
    func_001F3C40(M2C_FIELD(arg0, s32 *, 4), 3);
    func_001F3D80(M2C_FIELD(arg0, s32 *, 4), ((void *)D_003AE9FC), 0);
}
