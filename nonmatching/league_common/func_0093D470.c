/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
s32 func_0021E000(s32);                             /* extern */
s32 func_0022F940(u8);                              /* extern */
extern s32 D_003E7AE8;
extern char D_00591C09[];
extern char D_009BF3A8[];

void func_0093D470(void) {
    s32 temp_s0;

    temp_s0 = D_003E7AE8;
    if (temp_s0 != func_0021E000(func_0022F940((*(u8 *)D_00591C09)))) {
        switch ((*(u8 *)D_00591C09)) {                       /* irregular */
        case 1:
            func_001E75A0(func_0021E000(func_0022F940((*(u8 *)D_00591C09))), ((void *)D_009BF3A8));
            break;
        case 2:
            func_001E75A0(func_0021E000(func_0022F940((*(u8 *)D_00591C09))), ((void *)D_009BF3A8));
            break;
        case 4:
            func_001E75A0(func_0021E000(func_0022F940((*(u8 *)D_00591C09))), ((void *)D_009BF3A8));
            break;
        case 14:
            func_001E75A0(func_0021E000(func_0022F940((*(u8 *)D_00591C09))), ((void *)D_009BF3A8));
            break;
        }
        D_003E7AE8 = func_0021E000(func_0022F940((*(u8 *)D_00591C09)));
    }
}
