/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016C660(void);
extern int func_001795E0(void);
extern int func_00179658(void);
M2C_UNK printf(M2C_UNK *, void *, M2C_UNK *); /* extern */
extern char D_00385098[];
extern char D_003850FC[];
extern char D_003C9F90[];
extern char D_003C9FD0[];

void func_0016C718(void *arg0) {
    s8 temp_a0;

    func_001795E0();
    if (arg0 != ((void *)D_00385098)) {
        printf(((void *)D_003C9F90), arg0, ((void *)D_00385098));
    } else {
        temp_a0 = M2C_FIELD(arg0, s8 *, 2);
        if ((temp_a0 != 0) && (temp_a0 != 3) && (temp_a0 != 9)) {
            printf(((void *)D_003C9FD0), arg0, ((void *)D_00385098));
        }
        func_0016C660();
        M2C_FIELD(((void *)D_00385098), s8 *, 0x5098) = 0;
        (*(s32 *)D_003850FC) += 1;
    }
    func_00179658();
}
