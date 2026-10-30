/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00254BE0(s32);
extern void * func_002FC230(s32);
extern int func_00254BD0(void);
extern char D_0058D894[];
extern char D_0058D898[];

s32 func_0026DFF0(void) {
    void *temp_v0;

    switch ((*(s32 *)D_0058D894)) {                           /* irregular */
    case 1:
        (*(s32 *)D_0058D894) += 1;
        return 1;
    case 2:
        temp_v0 = func_002FC230((*(s32 *)D_0058D898) - 0x64);
        if (temp_v0 != NULL) {
            func_00254BE0((s32) temp_v0);
            (*(s32 *)D_0058D894) += 1;
            return 1;
        }
block_18:
        (*(s32 *)D_0058D894) = 0;
        return 0;
    case 3:
        if (func_00254BD0() != 0) {
            return 1;
        }
        (*(s32 *)D_0058D894) += 1;
        return 1;
    case 4:
        goto block_18;
    default:
        return 0;
    }
}
