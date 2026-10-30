/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00118D0C();                                /* extern */
M2C_UNK func_00119174(M2C_UNK);                     /* extern */
s32 func_0011DE30(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00199DD0(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_00602000;
extern s32 D_00602004;
extern M2C_UNK *D_00602008;
extern s32 D_0060200C;
extern s32 D_00602010;
extern s32 D_00602580;
extern char D_00602680[];
extern char D_00602700[];

void func_00100030(void) {
    s32 temp_v0;

    D_0060200C = 0;
    D_00602010 = 0;
    D_00602580 = 0;
    temp_v0 = func_00118D0C();
    D_00602008 = ((void *)D_00602700);
    D_00602000 = temp_v0;
    D_00602004 = 0;
    func_00199DD0(((void *)D_00602680), ((void *)D_00602700));
    D_00602580 = func_0011DE30(D_00602000, 0);
    func_00119174(0);
}
