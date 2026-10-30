/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AF60();                            /* extern */
s32 func_001A1E58(M2C_UNK *, s32);                  /* extern */
extern char D_005BD300[];
extern char D_005BD310[];
extern char D_005FC110[];
extern char D_005FC120[];
extern char D_011DD7F8[];

void func_001424F8(void) {
    M2C_UNK *var_a0;

    if ((*(s32 *)D_005BD300) == 1) {
        var_a0 = ((void *)D_005FC110);
    } else {
        var_a0 = ((void *)D_005FC120);
    }
    (*(s32 *)D_011DD7F8) = func_001A1E58(var_a0, 0x011DD7B8);
    (*(s32 *)D_005BD310) = 1;
    func_0019AF60();
}
