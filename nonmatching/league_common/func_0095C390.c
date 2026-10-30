/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00970650(s32);
extern void * func_001F85A0(void *, void *);
extern s32 func_001F08B0(s32);
extern void * func_002297F0(s32);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
s64 func_00229600(s32);                             /* extern */
s32 func_00956890(s32);                             /* extern */
s32 func_0096F7A0(s32);                             /* extern */
extern char D_009C2750[];
extern char D_00A79C90[];
extern char D_00A79CBD[];

M2C_UNK *func_0095C390(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    func_001C8590(((void *)D_00A79C90), func_00970650(arg0), 0x2D);
    (*(s8 *)D_00A79CBD) = 0;
    if ((func_0096F7A0(var_s0) == 1) && ((func_00956890(var_s0) & 0xFF) == 0xFF)) {
        var_s0 = 5;
        sprintf(((void *)D_00A79C90), ((void *)D_009C2750), func_001F08B0(5));
    }
    if (func_0096F7A0(var_s0) == 1) {
        func_001F85A0(func_002297F0(((s64) (func_00229600(var_s0) << 0x38) >> 0x38) & 0xFF) + 0x4C, ((void *)D_00A79C90));
    }
    return ((void *)D_00A79C90);
}
