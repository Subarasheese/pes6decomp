/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002FBB30(void);
extern void func_002FB320(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002FACA0(M2C_UNK *);                       /* extern */
extern char D_005E9A50[];
extern char D_005E9A94[];
extern char D_005E9A9B[];
extern M2C_UNK func_002FB1E0;

void func_002FB0A0(void) {
    s32 var_v0;

    if ((*(u8 *)D_005E9A9B) != 0) {
        var_v0 = func_002FACA0(&func_002FB1E0);
        if (var_v0 < 0) {
            do {
                (*(s32 *)D_005E9A94) = var_v0;
                var_v0 = func_002FACA0(&func_002FB1E0);
            } while (var_v0 < 0);
        }
        (*(s32 *)D_005E9A94) = 0;
        func_002FB320();
        func_002FBB30();
        func_001C48E8(((void *)D_005E9A50), 0, 0x4C);
    }
}
