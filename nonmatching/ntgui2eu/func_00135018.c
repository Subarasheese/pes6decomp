/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011D6F1C)(M2C_UNK, s32 *);
extern char D_011D6F24[];

void func_00135018(void) {
    (*(s32 *)D_011D6F24) -= 1;
    D_011D6F1C(D_011D6F1C, ((void *)D_011D6F24));
}
