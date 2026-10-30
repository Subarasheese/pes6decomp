/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B32D0(u16, u16, M2C_UNK);               /* extern */
extern char D_00591F24[];
extern char D_00CBBE41[];

void func_00BF0CE0(void *arg0) {
    s32 temp_v1;
    s32 var_v0;

    if (((*(u8 *)D_00591F24) == 1) && (M2C_FIELD(arg0, u8 *, 0x24) == 0)) {
        if ((*(u8 *)D_00CBBE41) != 2) {
            if ((*(u8 *)D_00CBBE41) != 1) {
                temp_v1 = M2C_FIELD(arg0, s32 *, 0xB4);
                if (!(temp_v1 & 0x800)) {
                    if (temp_v1 & 0x400) {
                        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + 0x40);
                        (*(u8 *)D_00CBBE41) = 2;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) - 0x40);
                    (*(u8 *)D_00CBBE41) = 1;
                }
            } else {
                if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x800) {
                    var_v0 = M2C_FIELD(arg0, s32 *, 0xA0) - 0x40;
                    goto block_11;
                }
                (*(u8 *)D_00CBBE41) = 0;
            }
        } else if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x400) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0xA0) + 0x40;
block_11:
            M2C_FIELD(arg0, s32 *, 0xA0) = var_v0;
        } else {
            (*(u8 *)D_00CBBE41) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (func_009B32D0((u16) M2C_FIELD(arg0, s32 *, 0xA0), M2C_FIELD(arg0, u16 *, 0x2C), 0x1800) & 0xFFFF);
    }
}
