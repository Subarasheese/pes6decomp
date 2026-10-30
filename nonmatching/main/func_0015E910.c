/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_0015B4D0(void *, void *);
s32 func_00172060(s32, M2C_UNK, s32, s32);          /* extern */
extern char D_003C84B0[];
extern char D_003C84E0[];

void func_0015E910(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C84B0));
        return;
    }
    if (func_00172060(M2C_FIELD(arg0, s32 *, 0x94), 0, arg2, arg3) < 0) {
        func_0015B4D0(((void *)D_003C84E0), arg1);
    }
}
