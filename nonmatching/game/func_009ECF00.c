/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099EAE0();                            /* extern */
extern void *Pes6Ball_Current;
extern char D_00591F24[];

s32 func_009ECF00(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    u8 temp_a0;

    var_s0 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x4D) < 0x81) {
        func_0099EAE0();
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
        switch (temp_v1) {                          /* irregular */
        case 1:
            temp_a0 = M2C_FIELD(arg0, u8 *, 0x4C);
            if (temp_a0 == 0xD) {
                var_s0 = 1;
            } else if (((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 1)) {

            } else if (temp_a0 != 1) {
                if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x4000) {
                    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 4);
                } else {
                    goto block_38;
                }
            } else if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x1000) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 4);
            } else {
block_38:
                var_s0 = 1;
            }
            break;
        case 4:
            if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x8000)) {
                var_s0 = 1;
            } else if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) <= 0) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 4);
            } else {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
            }
            break;
        case 3:
        case 2:
            if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x2000) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 4);
            } else {
                var_s0 = 1;
            }
            break;
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 0x4D) >= 0x80) {
            var_s0 = 1;
            M2C_FIELD(arg0, u8 *, 0x4D) = 0x80U;
        }
    }
    return var_s0;
}
