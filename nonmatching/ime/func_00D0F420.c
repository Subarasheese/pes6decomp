/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
extern s32 func_0017F900(void);
M2C_UNK func_00842950(M2C_UNK);                     /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
M2C_UNK func_00D12AF0(s32, M2C_UNK);                /* extern */
s32 func_00D13000(void *);                          /* extern */
extern char D_00D376D8[];
extern char D_00D376E8[];
extern char D_00D376F0[];

s32 func_00D0F420(void) {
    s32 temp_v0_2;
    void *temp_v0;

    if (func_0017F900() != 1) {
        return 0;
    }
    temp_v0 = func_001D5A10(0x103A1);
    if (temp_v0 != NULL) {
        func_00842950(1);
        temp_v0_2 = func_00D13000(temp_v0);
        (*(s32 *)D_00D376F0) = temp_v0_2;
        if (temp_v0_2 == 0) {
            (*(s32 *)D_00D376D8) = 0;
            return 1;
        }
        (*(s32 *)D_00D376E8) = 1;
        func_00D12AF0(temp_v0_2, 1);
        func_00D0F680(0);
        return 1;
    }
    (*(s32 *)D_00D376D8) = 0;
    return 1;
}
