/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009832C0(void *, M2C_UNK);             /* extern */
s32 func_00BEEA30(void *);                          /* extern */
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591F24[];

s32 func_00BA1BB0(void *arg0) {
    s32 var_v0;
    u16 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;

    switch ((*(u8 *)D_00591F24)) {                           /* irregular */
    case 0:
        if ((M2C_FIELD(arg0, u8 *, 0x16) == 0xFD) && (temp_v1 = M2C_FIELD(arg0, u16 *, 0x18), (temp_v1 != 0x1E)) && (temp_v1 != 0x13) && (temp_v1 != 0x14)) {
            if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
                M2C_FIELD(arg0, u8 *, 0x16) = 7U;
            } else {
                M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x6C);
                M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x70);
                M2C_FIELD(arg0, u8 *, 0x16) = 0xA3U;
            }
            M2C_FIELD(arg0, u16 *, 0x18) = 0U;
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            return 1;
        }
        if ((*(u8 *)D_00591F24) == 2) {
        case 2:
            if (func_00BEEA30(arg0) != 0) {
                M2C_FIELD(arg0, u8 *, 0x16) = 0x18U;
                M2C_FIELD(arg0, u16 *, 0x18) = 0U;
                return 1;
            }
            goto block_16;
        }
    default:
block_16:
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_v1_2 != (*(u8 *)D_00591E4D)) && (temp_v1_2 != (*(u8 *)D_00591E4E))) {
            if ((*(u8 *)D_00591F24) != 6) {
                temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x1D5);
                if (temp_v1_3 != 0) {
                    if (M2C_FIELD(arg0, u8 *, 0x1DD) != 0x27) {
                        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (temp_v1_3 & 0xFF);
                        func_009832C0(arg0, 0x27);
                        M2C_FIELD(arg0, u8 *, 0x16) = 7U;
                        M2C_FIELD(arg0, u16 *, 0x18) = 0U;
                        return 1;
                    }
                    M2C_FIELD(arg0, u8 *, 0x16) = 7U;
                    M2C_FIELD(arg0, u16 *, 0x18) = 0U;
                    return 1;
                }
            }
            goto block_29;
        }
block_29:
        return 0;
    }
}
