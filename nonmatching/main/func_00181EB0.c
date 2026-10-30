/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00142020(int, int, int);
extern u8 func_00142030(s32, s32);
extern char D_0051FF38[];

void func_00181EB0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = (*(s32 *)D_0051FF38) + (arg0 * 0x60);
    if (M2C_FIELD(temp_s1, s32 *, 0) != 0) {
        func_00142020(M2C_FIELD(temp_s1, s32 *, 4), arg1, func_00142030(M2C_FIELD(temp_s1, s32 *, 4), arg2) == 0);
    }
}
