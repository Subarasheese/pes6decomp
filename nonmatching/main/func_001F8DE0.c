/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC800(void);
extern void func_00182B30(int);
extern void func_0017E120(int);
extern s32 func_0017F900(void);
extern void func_001FC790(void);
extern void func_001FC840(void);
M2C_UNK func_003626D0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008B77A0();                            /* extern */
M2C_UNK func_008B7960(M2C_UNK, M2C_UNK);            /* extern */
s32 func_008B96D0();                                /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
extern char D_003A85B0[];
extern u8 D_003E998C;

s32 func_001F8DE0(void) {
    switch (D_003E998C) {                           /* irregular */
    case 0:
        func_0017E120(0);
        func_00182B30(0);
        func_00B27010(0);
        func_001FC840();
        func_003626D0(((void *)D_003A85B0), 1, 0);
        D_003E998C += 1;
        /* fallthrough */
    case 1:
        if (func_0017F900() != 0) {
            func_008B7960(1, -1);
            D_003E998C += 1;
        case 2:
            if (func_008B96D0() != 0) {
                func_008B77A0();
                func_001FC800();
                func_001FC790();
                func_0017E120(1);
                func_00182B30(1);
                func_00B27010(1);
                D_003E998C = 0;
                return 1;
            }
            goto block_11;
        }
block_11:
    default:
        return 0;
    }
}
