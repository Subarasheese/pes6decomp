/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0015F0B8(void);
extern int func_0017A088(void);
extern int func_0017A070(void);
extern int func_0017A0A0(void);
s32 func_0015F1D0(s32);                             /* extern */
extern char D_0037B928[];

s32 func_0015EF90(void) {
    s32 temp_v0;

    temp_v0 = func_0015F1D0((*(s32 *)D_0037B928));
    if (temp_v0 != 1) {
        switch (temp_v0) {                          /* irregular */
        case 2:
            func_0017A070();
            goto block_9;
        case 3:
            func_0017A088();
            func_0017A0A0();
            goto block_9;
        default:
            return 0;
        }
    } else {
        func_0015F0B8();
block_9:
        return 0;
    }
}
