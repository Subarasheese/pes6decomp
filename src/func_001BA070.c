/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B7920();                            /* extern */
M2C_UNK func_001BC1E0();                            /* extern */
M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC350();                            /* extern */
M2C_UNK func_002F62E0(s32);                         /* extern */
extern char D_005247A0[];
extern char D_005247A8[];
extern char D_005247A9[];
extern char D_005247AA[];
extern char D_005247AB[];
extern char D_005247AC[];
extern char D_005247C4[];

s32 func_001BA070(void) {
    func_001BC350();
    func_001BC1E0();
    func_001BC2B0();
    func_002F62E0((*(s32 *)D_005247A0));
    (*(s32 *)D_005247A0) = 0;
    (*(s8 *)D_005247A9) = 0;
    (*(s8 *)D_005247A8) = 0;
    (*(s8 *)D_005247AB) = 0;
    (*(s8 *)D_005247AC) = 0;
    (*(s32 *)D_005247C4) = 0;
    if ((*(u8 *)D_005247AA) != 0) {
        func_001B7920();
    }
    (*(u8 *)D_005247AA) = 0;
    return 1;
}
