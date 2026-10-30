/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017A040(void);
extern int func_0017A070(void);
extern int func_0017A028(void);
extern int func_0017A010(void);
extern int func_00179FF8(void);
s32 func_0015F1D0(s32);                             /* extern */
extern char D_0037B928[];

s32 func_0015F020(void) {
    s32 temp_v0;

    temp_v0 = func_0015F1D0((*(s32 *)D_0037B928));
    if (temp_v0 != 1) {
        switch (temp_v0) {                          /* irregular */
        case 2:
            func_00179FF8();
            goto block_8;
        case 3:
            func_00179FF8();
            func_0017A010();
            func_0017A028();
            func_0017A040();
            func_0017A070();
            goto block_8;
        default:
            return 0;
        }
    } else {
block_8:
        return 0;
    }
}
