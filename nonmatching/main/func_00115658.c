/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115ED8(int, void *, void *);
extern void * func_001096E8(void *);
extern void * func_00109650(void *, void *);
M2C_UNK func_00105170(s32);                         /* extern */
M2C_UNK func_001051B0(s32);                         /* extern */
M2C_UNK func_00105370(s32);                         /* extern */
extern char D_00374654[];
extern char D_00374658[];
extern char D_0037465C[];
extern char D_003F4E80[];
extern char D_003F4E98[];

s32 func_00115658(void) {
    if (M2C_FIELD(((void *)D_00374654), s32 *, 0) >= 0) {
        func_00115ED8(0, NULL, NULL);
        if ((*(s32 *)D_0037465C) >= 0) {
            func_001051B0((*(s32 *)D_0037465C));
            func_00105170((*(s32 *)D_0037465C));
            (*(s32 *)D_0037465C) = -1;
            func_00109650(((void *)D_003F4E98), ((void *)D_003F4E80));
            func_001096E8(((void *)D_003F4E80));
        }
        func_00105370(M2C_FIELD(((void *)D_00374654), s32 *, 0x4654));
        M2C_FIELD(((void *)D_00374654), s32 *, 0x4654) = -1;
        func_00105370((*(s32 *)D_00374658));
    }
    return 1;
}
