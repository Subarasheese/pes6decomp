/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BBC20(s32);
M2C_UNK func_00C75330(M2C_UNK *);                   /* extern */
extern char D_009242E0[];
extern char D_009242E4[];
extern char D_00924334[];
extern char D_00924374[];

void func_0091D4D0(void) {
    if ((*(s32 *)D_009242E0) != 0) {
        (*(s8 *)D_00924334) = 0;
        (*(s8 *)D_00924374) = 0;
        func_00C75330(((void *)D_009242E4));
        func_001BBC20((*(s32 *)D_009242E0));
        (*(s32 *)D_009242E0) = 0;
    }
}
