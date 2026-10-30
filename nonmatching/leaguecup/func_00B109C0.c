/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern s32 func_0021E000(u32);
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
extern void *D_003E77B0;
extern void *D_003EAD6C;
extern char D_00591C09[];
extern char D_00B32B90[];

void func_00B109C0(void) {
    s32 temp_a0;
    s32 var_v1;
    u32 var_s1;
    void *temp_s0;

    temp_s0 = D_003EAD6C;
    var_s1 = -1U;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
            if ((*(u8 *)D_00591C09) != 2) {
                M2C_FIELD(temp_s0, s32 *, 0xCC) = -1;
                M2C_FIELD(temp_s0, s32 *, 0xC8) = -1;
                return;
            }
            if (!(func_00226710() & 0xFF) || ((func_00226710() & 0xFF) == 1) || ((func_00226710() & 0xFF) == 7)) {
                M2C_FIELD(temp_s0, s32 *, 0xCC) = -1;
                M2C_FIELD(temp_s0, u32 *, 0xC8) = -1U;
                return;
            }
            temp_a0 = func_00226710() & 0xFF;
            switch (temp_a0) {                      /* irregular */
            case 0x3A:
                var_v1 = 0x4FD3;
                var_s1 = 0x14A;
block_37:
                M2C_FIELD(temp_s0, s32 *, 0xCC) = var_v1;
                break;
            case 0x4:
                var_v1 = 0x4FCF;
                var_s1 = 0x145;
                goto block_37;
            case 0x3:
                var_v1 = 0x4FCE;
                var_s1 = 0x144;
                goto block_37;
            case 0x2:
                var_v1 = 0x4FD2;
                var_s1 = 0x143;
                goto block_37;
            case 0xA:
                var_v1 = 0x4FD0;
                var_s1 = 0x146;
                goto block_37;
            case 0x9:
                var_v1 = 0x4FD1;
                var_s1 = 0x147;
                goto block_37;
            case 0x8:
            case 0x6:
            case 0x5:
                var_v1 = 0x4FCD;
                var_s1 = 0x148;
                goto block_37;
            }
            goto block_38;
        }
block_38:
        M2C_FIELD(temp_s0, u32 *, 0xC8) = var_s1;
        if (var_s1 != -1U) {
            func_001E75A0(func_0021E000(var_s1), ((void *)D_00B32B90));
        }
    }
}
