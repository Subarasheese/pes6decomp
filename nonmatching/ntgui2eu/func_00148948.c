/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001514E8(s32);                         /* extern */
M2C_UNK func_001540B0(M2C_UNK *);                   /* extern */
extern char D_005B3744[];
extern char D_005FC3B8[];

void func_00148948(void) {
    func_001540B0(((void *)D_005FC3B8));
    func_001514E8((*(s32 *)D_005B3744));
}
