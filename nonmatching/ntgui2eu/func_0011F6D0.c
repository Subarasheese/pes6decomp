/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011EFF0(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_0018F738(s32);                         /* extern */
M2C_UNK func_0018F818();                            /* extern */
extern char D_005B3718[];
extern char D_011D4040[];

void func_0011F6D0(s32 arg0) {
    func_0018F738((*(s32 *)D_005B3718));
    func_0018F818();
    func_0011EFF0((*(s32 *)D_005B3718), arg0, ((void *)D_011D4040));
}
