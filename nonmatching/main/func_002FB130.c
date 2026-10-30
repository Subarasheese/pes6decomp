/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002FB350(void);
extern void func_002FBB80(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, s32);              /* extern */
s32 func_002FAAA0(M2C_UNK *);                       /* extern */
extern char D_005E9A50[];
extern char D_005E9A94[];
extern char D_005E9A9A[];
extern char D_005E9A9B[];
extern M2C_UNK func_002FB1E0;

void func_002FB130(s32 arg0) {
    s32 var_v0;

    func_001C48E8(((void *)D_005E9A50), 0, 0x4C);
    func_001C7F58(((void *)D_005E9A50), arg0);
    var_v0 = func_002FAAA0(&func_002FB1E0);
    if (var_v0 < 0) {
        do {
            (*(s32 *)D_005E9A94) = var_v0;
            var_v0 = func_002FAAA0(&func_002FB1E0);
        } while (var_v0 < 0);
    }
    (*(s32 *)D_005E9A94) = 0;
    func_002FB350();
    func_002FBB80();
    (*(s8 *)D_005E9A9A) = 0;
    (*(s8 *)D_005E9A9B) = 1;
}
