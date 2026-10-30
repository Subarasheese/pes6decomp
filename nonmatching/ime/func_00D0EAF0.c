/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D12C80(s32);                         /* extern */
extern char D_00D376D0[];
extern char D_00D376E0[];
extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37720[];
extern char D_00D3776C[];
extern char D_00D3776D[];

s32 func_00D0EAF0(void) {
    (*(s32 *)D_00D376E0) = 0;
    (*(s32 *)D_00D376E8) = 0;
    (*(s32 *)D_00D376D0) = 0;
    (*(s32 *)D_00D37720) = 0;
    (*(s8 *)D_00D3776C) = 0;
    (*(s8 *)D_00D3776D) = 0;
    func_00D12C80((*(s32 *)D_00D376F0));
    (*(s32 *)D_00D376F0) = 0;
    func_00D0C980();
    func_001D5C40(0x103A1);
    return 1;
}
