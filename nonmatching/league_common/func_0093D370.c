/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001E7140(s32, u8);                     /* extern */
u32 func_0022F940(u8);                              /* extern */
M2C_UNK func_0093D850();                            /* extern */
extern s32 D_003E7AE8;
extern char D_00591C09[];

void func_0093D370(void) {
    s32 temp_s0;

    temp_s0 = D_003E7AE8;
    if (temp_s0 != func_0021E000(func_0022F940((*(u8 *)D_00591C09)))) {
        func_0093D850();
        switch ((*(u8 *)D_00591C09)) {                       /* irregular */
        case 14:
            func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
            break;
        case 4:
            func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
            return;
        case 2:
            func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
            return;
        case 1:
            func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
            return;
        }
    }
}
