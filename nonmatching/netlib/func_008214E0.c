/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DC8A0(void *);
s32 func_00821080();                                /* extern */
extern void *D_008A4350;
extern void *D_008A4358;
extern void *D_008A4360;

void func_008214E0(void) {
    s32 temp_v0;

    temp_v0 = func_00821080();
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_002DC8A0(D_008A4350);
        return;
    case 1:
        func_002DC8A0(D_008A4358);
        return;
    case 2:
        func_002DC8A0(D_008A4360);
        return;
    default:
        func_002DC8A0(*(void **)0x8A4350);
        return;
    }
}
