/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern u32 func_009A0430(void);
M2C_UNK func_009A05C0(u8);                          /* extern */
extern void *D_003E7B0C;

s32 func_0099F960(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_009A0430();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 0) == 0)) {
        func_0022C140((s32) M2C_FIELD(D_003E7B0C, u8 *, 0x28));
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 4);
        switch (temp_v1) {                          /* irregular */
        case 1:
            M2C_FIELD(temp_v0, u8 *, 4) = 0U;
            break;
        case 0:
            M2C_FIELD(temp_v0, u8 *, 4) = 1U;
            break;
        }
        func_009A05C0(M2C_FIELD(temp_v0, u8 *, 4));
    }
    return 0;
}
