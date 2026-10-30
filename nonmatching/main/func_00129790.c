/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001296B0(void *);
extern char D_00375AA0[];
extern char D_00375AC0[];
extern char D_00375AE0[];

void func_00129790(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB28) = (s32) (arg0 + 0xA4);
    M2C_FIELD(arg0, M2C_UNK **, 0xB30) = ((void *)D_00375AA0);
    M2C_FIELD(arg0, void **, 0xB34) = (void *) (arg0 + 0x998);
    M2C_FIELD(arg0, M2C_UNK **, 0xB3C) = ((void *)D_00375AC0);
    M2C_FIELD(arg0, void **, 0xB40) = (void *) (arg0 + 0xA8C);
    M2C_FIELD(arg0, M2C_UNK **, 0xB48) = ((void *)D_00375AE0);
    M2C_FIELD(arg0, s16 *, 0x16D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x16D4) = 0;
    func_001296B0(arg0);
}
