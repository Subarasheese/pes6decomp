/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, void (*)(s16), M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK *D_003EA86C;
extern char D_00591C09[];
extern char D_00CCC040[];
extern char D_00CCC068[];
extern char D_00CCC06A[];
extern M2C_UNK func_00C7ED40;
extern M2C_UNK func_00C7ED50;
extern M2C_UNK func_00C7ED70;

void func_00C7EC70(s16 arg0) {
    s16 var_s0;

    var_s0 = arg0;
    if ((*(u8 *)D_00591C09) == 5) {
        var_s0 = 0;
    }
    if (var_s0 == 1) {
        if (D_003EA86C == NULL) {
            func_002D5410();
            func_001C48E8(((void *)D_00CCC040), 0, 0x30);
            D_003EA86C = ((void *)D_00CCC040);
            func_00C88EC0(0x12, &func_00C7ED70, &func_00C7ED50);
            func_00C88DD0(0x12, func_00C7EC70, &func_00C7ED40);
        }
        (*(u8 *)D_00CCC068) = ((*(u8 *)D_00CCC068) & ~1) | 1;
    }
    (*(s16 *)D_00CCC06A) = var_s0;
}
