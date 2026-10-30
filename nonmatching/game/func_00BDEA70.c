/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern int func_002727B0(void);
u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00B9E5D0(void **);                     /* extern */
M2C_UNK func_00BA9800(s32, void **);                /* extern */
M2C_UNK func_00BA9850(s32, M2C_UNK, void **);       /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern char D_00CBCB1C[];

void func_00BDEA70(void **arg0) {
    u32 temp_s0;
    u8 temp_a0_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = *arg0;
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = *arg0;
    temp_a0_2 = M2C_FIELD(*arg0, u8 *, 0x4E);
    temp_s0 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    switch (temp_a0_2) {                            /* irregular */
    case 2:
        break;
    case 0:
        if ((func_002727B0() & 0xFF) == 0x13) {
            temp_v1 = *arg0;
            M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4E) + 1);
        case 1:
            if (func_0017F900() == 0) {
                M2C_FIELD(*arg0, u8 *, 0x4E) = 2U;
            } else {
                func_00BA9850((*(s32 *)D_00CBCB1C), 0, arg0);
                M2C_FIELD(*arg0, u8 *, 0x4E) = 3U;
            }
        }
        break;
    case 3:
        func_00BA9800((*(s32 *)D_00CBCB1C), arg0);
        break;
    }
    if (temp_s0 < 0x10000U) {
        func_00B9E5D0(arg0);
    }
}
