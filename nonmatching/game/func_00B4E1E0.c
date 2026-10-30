/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
s16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00A0C040(void *);                          /* extern */
s32 func_00A0C990(void *);                          /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B619E0(void *);                      /* extern */
extern char D_00CBCDE8[];

void func_00B4E1E0(void *arg0) {
    u8 temp_v1;
    void *temp_a0;

    func_00B2ACF0();
    if (((*(u16 *)D_00CBCDE8) != 0) || (func_00A0C990(M2C_FIELD(arg0, void **, 0)) == 0) || (func_00A0C040(M2C_FIELD(arg0, void **, 0)) == 0)) {
        if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) == 0) {
            goto block_4;
        }
        if ((func_009E1C90(1) & 0xFF) != 0xC) {
            if ((func_009E1C90(1) & 0xFF) == 0xA) {
                goto block_15;
            }
block_4:
            if ((func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) && ((func_009E1C90(1) & 0xFF) != 0xC) && ((func_009E1C90(1) & 0xFF) != 0xA)) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x16) = 0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
            }
        } else {
block_15:
            func_00B619E0(arg0);
            temp_a0 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x39U;
            temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
            switch (temp_v1) {                      /* irregular */
            case 0x55:
            case 0x54:
            case 0x53:
            case 0x50:
            case 0x4F:
            case 0x4E:
            case 0x2F:
            case 0x2E:
            case 0x1B:
            case 0x29:
            case 0x28:
            case 0x27:
            case 0x26:
            case 0x25:
            case 0x24:
            case 0x23:
            case 0x22:
            case 0x1A:
            case 0x19:
            case 0x17:
            case 0x38:
            case 0x1D:
            case 0x15:
            case 0x14:
            case 0x11:
            case 0x10:
            case 0xF:
            case 0xE:
            case 0xC:
            case 0xB:
            case 0xA:
            case 0x9:
            case 0x8:
            case 0x6:
            case 0x3:
            case 0x2:
            case 0x1:
            case 0x0:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xF;
                break;
            case 0x3A:
            case 0x39:
            case 0x30:
            case 0x12:
            case 0xD:
            case 0x5:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x11;
                break;
            case 0x13:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x14;
                break;
            }
        }
    }
}
