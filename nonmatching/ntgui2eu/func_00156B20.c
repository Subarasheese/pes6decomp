/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001560B8(void *);
extern char D_011E2440[];
extern char D_011E2444[];
extern char D_011E2448[];
extern char D_011E244C[];
extern char D_011E2480[];

void func_00156B20(void) {
    (*(s32 *)D_011E244C) = -1;
    (*(s32 *)D_011E2440) = 0;
    (*(s32 *)D_011E2444) = 0;
    (*(s32 *)D_011E2448) = 0;
    func_001560B8(((void *)D_011E2480));
}
