/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_009DDAF0(M2C_UNK);                     /* extern */
M2C_UNK func_009F30E0();                            /* extern */
M2C_UNK func_009F3100();                            /* extern */
s32 func_009F3140();                                /* extern */
extern s8 *D_00A7DD78;

s32 func_009C8300(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DD78, u8 *, 2) != 0) {
        func_009F30E0();
    }
    temp_v0 = func_009F3140();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_009F3100();
        M2C_FIELD(D_00A7DD78, s8 *, 4) = 2;
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 0xF;
        return 0;
    case 1:
        func_009F3100();
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDAF0(1);
block_10:
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 1;
    case 0:
    default:
        return 0;
    case 3:
        func_009F3100();
        goto block_10;
    }
}
