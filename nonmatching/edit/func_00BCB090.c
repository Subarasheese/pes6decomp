/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_00207D10(void *);
extern s32 func_00207D80(void *, s32);
M2C_UNK func_002075B0(void *, u16, u16, u8);        /* extern */
M2C_UNK func_00207780(void *, u16, u16, u8);        /* extern */
M2C_UNK func_00209A00(void *, u16, u16);            /* extern */
extern char D_00CBA8B0[];
extern char D_00CBA8B1[];

void func_00BCB090(void *arg0) {
    u32 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_s1;

    if ((*(u8 *)D_00CBA8B1) != 0) {
        temp_s1 = M2C_FIELD(((void *)D_00CBA8B0), void **, 4);
        temp_s0 = func_00208310((s32) M2C_FIELD(arg0, u16 *, 0x30));
        temp_v0 = M2C_FIELD(temp_s1, u8 *, 9);
        if ((temp_v0 != 0) && ((s32) M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) < (temp_v0 & 0xFF))) {
            if (!(M2C_FIELD(temp_s0, u8 *, 0) & 1)) {
                temp_v0_2 = M2C_FIELD(temp_s0, u8 *, 2);
                if ((temp_v0_2 != 0) && (func_00207D80(arg0, (temp_v0_2 & 0xFF) * 2) != 0)) {
                    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(temp_s0, u8 *, 1) * 2);
                    M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) + 1);
                    return;
                }
                goto block_11;
            }
            if (func_00207D10(arg0) != 0) {
                M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) + 1);
                return;
            }
            goto block_11;
        }
block_11:
        if ((func_00207D80(arg0, (s32) M2C_FIELD(temp_s1, u16 *, 4)) != 0) || (func_00207D10(arg0) != 0)) {
            if (M2C_FIELD(temp_s1, u8 *, 8) != 2) {
                M2C_FIELD(((void *)D_00CBA8B0), void **, 4) = (void *) (temp_s1 + 0xA);
                temp_v1 = M2C_FIELD(temp_s1, u8 *, 0x11);
                switch (temp_v1) {                  /* irregular */
                case 1:
                    func_00207780(arg0, M2C_FIELD(temp_s1, u16 *, 0xA), M2C_FIELD(temp_s1, u16 *, 0xC), M2C_FIELD(temp_s1, u8 *, 0x10));
                    break;
                default:
                    func_00209A00(arg0, M2C_FIELD(temp_s1, u16 *, 0xA), M2C_FIELD(temp_s1, u16 *, 0xC));
                    break;
                case 2:
                    func_002075B0(arg0, M2C_FIELD(temp_s1, u16 *, 0xA), M2C_FIELD(temp_s1, u16 *, 0xC), M2C_FIELD(temp_s1, u8 *, 0x10));
                    break;
                }
                M2C_FIELD(((void *)D_00CBA8B0), u8 *, 2) = 0U;
            } else {
                M2C_FIELD(arg0, s8 *, 0x2D) = 0;
                func_00207780(arg0, 0x5EBU, 0x41CU, 0x10U);
                M2C_FIELD(((void *)D_00CBA8B0), s8 *, 1) = 0;
                M2C_FIELD(((void *)D_00CBA8B0), s8 *, 0) = 0xFF;
                M2C_FIELD(((void *)D_00CBA8B0), void **, 4) = NULL;
            }
        }
    }
}
