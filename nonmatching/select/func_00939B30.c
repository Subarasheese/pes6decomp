/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0013E2A0(int);
extern int func_0013E280(void);
s32 func_001B68B0();                                /* extern */
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_00939730(s32);                             /* extern */
s32 func_00939830(M2C_UNK);                         /* extern */
M2C_UNK func_00939A10();                            /* extern */
extern s32 D_003EAADC;
extern s32 D_003EAAE4;
extern s32 D_003EAAE8;

void func_00939B30(void) {
    switch (D_003EAADC) {                           /* irregular */
    case 2:
        if (func_00939830(1) != 0) {
            D_003EAADC += 1;
            return;
        }
        return;
    case 1:
        if (D_003EAAE4 != 0) {
            func_002F2ED0(D_003EAAE4);
        }
        if (func_001B68B0() == 1) {
            D_003EAADC += 1;
            return;
        }
        break;
    case 0:
        D_003EAAE8 = func_0013E280();
        func_0013E2A0(1);
        func_00939A10();
        func_00939830(0);
        D_003EAADC += 1;
        return;
    case 3:
        if (func_00939730(D_003EAADC) == 1) {
            func_0013E2A0(D_003EAAE8);
            D_003EAADC = 0;
        }
        break;
    }
}
