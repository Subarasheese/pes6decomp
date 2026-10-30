/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E7100(s32);
extern s32 func_0021E000(u32);
extern void func_0093D470(void);
extern s32 func_0022FCC0(u8);
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
extern char D_00591C09[];
extern char D_009BF3A8[];

s32 func_0093D5A0(void) {
    u32 temp_v0;

    temp_v0 = func_0022FCC0((*(u8 *)D_00591C09));
    if (func_001E7100(func_0021E000(temp_v0)) == NULL) {
        func_001E75A0(func_0021E000(temp_v0), ((void *)D_009BF3A8));
    }
    func_0093D470();
    return 1;
}
