/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s16 *func_008472D0();                               /* extern */
extern char D_003AE98C[];
extern char D_0088A710[];
extern char D_008B14E0[];
extern M2C_UNK func_0087D610;
extern M2C_UNK func_0087D6F0;
extern M2C_UNK func_0087D870;

s32 func_0087F000(void) {
    s32 temp_v0;
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_008B14E0);
    if ((temp_s0 == *func_008472D0()) && ((*(s32 *)D_003AE98C) == 0)) {
        temp_v0 = func_001BBEC0(&func_0087D870, &func_0087D6F0, &func_0087D610, 0, 0, ((void *)D_0088A710));
        (*(s32 *)D_003AE98C) = temp_v0;
        func_001BBC60(temp_v0);
    }
    return (*(s32 *)D_003AE98C);
}
