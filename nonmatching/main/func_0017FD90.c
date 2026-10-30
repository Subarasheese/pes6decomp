/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AFA0(s32);
extern void func_0017FFE0(void);
extern s32 func_0012AD80(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E986C;
extern char D_00519E48[];
extern char D_00519E60[];

void func_0017FD90(void) {
    M2C_UNK *var_s0_2;
    s32 *var_s0;
    s32 var_s1;
    s32 var_s1_2;

    func_0017FFE0();
    var_s1 = 0;
    var_s0 = ((void *)D_00519E48);
    do {
        func_0012AD80(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s1_2 = 0;
    var_s0_2 = ((void *)D_00519E60);
    do {
        func_0012AFA0(M2C_FIELD(var_s0_2, s32 *, 0x2004));
        var_s1_2 += 1;
        var_s0_2 += 0x2010;
    } while (var_s1_2 < 3);
    D_003E986C = 0;
    func_001C48E8(((void *)D_00519E60), 0, 0x6030);
}
