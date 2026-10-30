/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00802910(M2C_UNK);                     /* extern */
M2C_UNK func_0087F8F0();                            /* extern */
M2C_UNK func_00C99A90(s32);                         /* extern */
extern char D_0058D7AC[];
extern char D_0058D808[];
extern char D_00921D44[];
extern char D_00924090[];
extern char D_0092423C[];

void func_00901960(void) {
    if ((*(s32 *)D_0058D808) == 1) {
        func_00C99A90((*(s32 *)D_0092423C));
        func_0087F8F0();
        (*(s32 *)D_0092423C) = 0;
        (*(s32 *)D_00921D44) = 8;
        return;
    }
    (*(s8 *)D_0058D7AC) = 0;
    (*(s32 *)D_00924090) = 0;
    func_0087F8F0();
    (*(s32 *)D_00921D44) = 8;
    func_00802910(5);
    func_00C99A90((*(s32 *)D_0092423C));
    (*(s32 *)D_0092423C) = 0;
}
