/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001657E8(void *);
extern void func_00165900(void *);
M2C_UNK func_00151480(M2C_UNK);                     /* extern */
extern char D_005BDA30[];
extern char D_005BDA34[];
extern char D_011E0CCC[];
extern char D_011E0CD0[];

void func_00151510(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_a0;
    s32 temp_a1;

    if (arg0 == NULL) {
        func_00151480(0);
        return;
    }
    if ((*(s32 *)D_005BDA34) != 0) {
        func_00165900(arg0);
        func_001657E8(arg0);
        temp_a1 = sp0 + (sp8 >> 1);
        temp_a0 = sp4 + (spC >> 1);
        (*(s32 *)D_011E0CCC) = temp_a1;
        (*(s32 *)D_011E0CD0) = temp_a0;
        (*(s32 *)D_005BDA30) = 1;
        sp0 = temp_a1;
        sp4 = temp_a0;
    }
}
