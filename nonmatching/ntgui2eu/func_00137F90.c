/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_00131560(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00131580(M2C_UNK *);                       /* extern */
s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_001515B8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001555D8();                            /* extern */
M2C_UNK func_00155608(M2C_UNK *);                   /* extern */
extern char D_005BC20C[];
extern char D_005BC6C4[];
extern char D_005BDA80[];
extern char D_011D78AC[];
extern char D_011D78B8[];
extern char D_011D78D8[];
extern M2C_UNK func_00137F20;
extern M2C_UNK func_00155618;
extern M2C_UNK func_00155640;
extern M2C_UNK func_001557D8;

s32 func_00137F90(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00135D48() & (*(s32 *)D_005BC20C)) {
        var_v0 = 0;
        if (!(func_00135D70() & (*(s32 *)D_005BC20C))) {
            func_001515B8(0xA, 0xA);
            func_001555D8();
            func_001566A8();
            func_00155608(((void *)D_005BDA80));
            func_00131560(((void *)D_011D78B8), 1, &func_00155618, &func_00155640, &func_001557D8);
            M2C_FIELD(((void *)D_011D78B8), M2C_UNK **, 8) = &func_00137F20;
            (*(s32 *)D_011D78D8) = func_00131580(((void *)D_011D78B8));
            var_v0 = 1;
            (*(s32 *)D_005BC6C4) = 1;
            (*(s32 *)D_011D78AC) = 0;
        }
    }
    return var_v0;
}
