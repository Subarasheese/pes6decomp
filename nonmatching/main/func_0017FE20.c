/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AF40(s32, s32, u32);
extern s32 func_00180220(void);
extern void func_0017FFF0(void);
s32 func_0012AE10(s32, M2C_UNK *, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00181350();                            /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E986C;
extern char D_00519E48[];
extern char D_00519E60[];

void func_0017FE20(void) {
    M2C_UNK *var_s0_2;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;

    func_001C48E8(((void *)D_00519E60), 0, 0x6030);
    func_00181350();
    func_0017FFF0();
    func_00180220();
    var_s1 = 0;
    var_s0 = ((void *)D_00519E48);
    do {
        *var_s0 = func_0012AF40(1, 0, 0U);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s1_2 = 0;
    var_s0_2 = ((void *)D_00519E60);
    do {
        temp_v0 = func_0012AE10(M2C_FIELD(var_s0_2, s32 *, 0x2000), var_s0_2, 0x2000, var_s1_2 + 0x1C, 0, 0);
        var_s1_2 += 1;
        M2C_FIELD(var_s0_2, s32 *, 0x2004) = temp_v0;
        var_s0_2 += 0x2010;
    } while (var_s1_2 < 3);
    D_003E986C = 1;
}
