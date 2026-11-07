/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BBC20(s32);
extern void func_001BC360(void);
extern char D_003AE970[];
extern char D_003AE972[];
extern char D_003AE984[];
extern char D_003AE9A4[];
extern char D_003AE9A8[];
extern char D_00591DB4[];
extern char D_00591DB5[];

void func_0026B940(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    func_001BBC20((*(s32 *)D_003AE9A8));
    func_001BBC20((*(s32 *)D_003AE9A4));
    (*(s32 *)D_003AE9A8) = 0;
    (*(s32 *)D_003AE9A4) = 0;
    func_001BBC20((*(s32 *)D_003AE984));
    var_s1 = 0;
    (*(s32 *)D_003AE984) = 0;
    var_s0 = ((void *)D_003AE970);
    do {
        func_001BC360();
        var_s1 += 1;
        M2C_FIELD(var_s0, s32 *, 0x3C) = -1;
        var_s0 += 4;
    } while (var_s1 < 8);
    (*(s8 *)D_00591DB4) = 0;
    (*(s8 *)D_00591DB5) = 0;
    (*(s8 *)D_003AE972) = 0;
}
