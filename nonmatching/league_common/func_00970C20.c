/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, M2C_UNK, void *);    /* extern */
extern void *D_003EA94C;
extern u8 D_003EA950;
extern s32 D_003EA954;

s32 func_00970C20(void) {
    s32 var_v0;
    u8 temp_v1;

    var_v0 = 0;
    if (D_003EA954 != 1) {
        if (D_003EA954 != 0) {
            D_003EA954 = 0;
        }
        D_003EA950 = 0;
        D_003EA954 += 1;
        return 0;
    }
    if ((s32) D_003EA950 >= 0x1E) {
        if (M2C_FIELD(D_003EA94C, u8 *, 0x406) != 0) {
            if ((s32) D_003EA950 >= 0xB4) {
                D_003EA950 = 0;
                D_003EA954 = 0;
                return 1;
            }
            goto block_12;
        }
block_12:
        if (D_003EA94C != NULL) {
            temp_v1 = M2C_FIELD(D_003EA94C, u8 *, 0x405);
            switch (temp_v1) {                      /* irregular */
            case 2:
                func_0026E840(0x84028400, 1, D_003EA94C);
                D_003EA950 = 0;
                var_v0 = 1;
block_22:
                D_003EA954 = 0;
                break;
            case 1:
                func_0026E840(0x84008401, 1, D_003EA94C);
                D_003EA950 = 0;
                var_v0 = 1;
                goto block_22;
            default:
                var_v0 = 0;
                break;
            }
        }
        D_003EA950 += 1;
        return var_v0;
    }
    D_003EA950 += 1;
    return 0;
}
