/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF6B50(void);
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */
s32 func_00BF6680();                                /* extern */
s32 func_00BF6790(s32);                             /* extern */
extern char D_00CE3670[];

s32 func_00B9E870(void) {
    s32 temp_v0;
    s32 var_v1;
    void *temp_s1;
    void *temp_v0_2;

    temp_v0 = func_00BF6680();
    switch (temp_v0) {                              /* irregular */
    case 1:
        temp_s1 = func_00B9C490();
        (*(s32 *)D_00CE3670) = func_00BF6790(func_00BF6B50());
        M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x18) = 4;
        M2C_FIELD(temp_s1, s32 *, 8) = 5;
        M2C_FIELD(temp_s1, s32 *, 0x28) = 0x10;
        break;
    case 2:
        temp_v0_2 = func_00B9C490();
        var_v1 = 2;
        if (M2C_FIELD(temp_v0_2, s32 *, 0x20) == 2) {
            var_v1 = 5;
        }
        M2C_FIELD(temp_v0_2, s32 *, 8) = var_v1;
        M2C_FIELD(temp_v0_2, s32 *, 0x28) = 0x10;
        func_00B91440(0x1B);
        break;
    }
    return temp_v0;
}
