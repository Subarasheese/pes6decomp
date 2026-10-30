/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011FA98(void *);                      /* extern */
extern char D_011D40C0[];
extern char D_011D40E8[];

void func_00120298(s32 arg0) {
    func_0011FA98((arg0 * 0x14) + ((void *)D_011D40C0));
    (*(s32 *)D_011D40E8) = 0;
}
