/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001DF4F0(s32, s32);                    /* extern */
M2C_UNK func_00AEAB90(M2C_UNK *);                   /* extern */
M2C_UNK func_00AEB530();                            /* extern */
extern void *D_00B02A90;
extern char D_00B02AA4[];
extern char D_00B02AA6[];

s32 func_00AEA9A0(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_v1;
    u8 temp_v1;
    void *temp_v0;

    if (arg1 & 0x4000) {
        M2C_FIELD(arg0, u8 *, 8) = (u8) ((M2C_FIELD(arg0, u8 *, 8) & ~4) | 4);
        M2C_FIELD(arg0, s16 *, 6) = 0;
    } else if (arg1 & 0xA0) {
        temp_v1 = (arg1 & 0x80) == 0;
        if (temp_v1 != M2C_FIELD(((void *)D_00B02AA4), u8 *, 2)) {
            M2C_FIELD(((void *)D_00B02AA4), u8 *, 2) = temp_v1;
            func_00AEAB90(((void *)D_00B02AA4));
            if ((*(u8 *)D_00B02AA6) != 0) {
                var_s0 = 0;
                var_v1 = 0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0x20) = 0;
            } else {
                var_s0 = 1;
                var_v1 = 1;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0x20) = 1;
            }
            if (D_00B02A90 != NULL) {
                temp_v0 = M2C_FIELD(D_00B02A90, void **, 0x18);
                if (temp_v0 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v0, s32 *, 0xC), var_v1 & 0xFF);
                }
            }
            if (D_00B02A90 != NULL) {
                M2C_FIELD(D_00B02A90, s32 *, 0x64) = var_s0;
                func_00AEB530();
            }
            if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 0x84008401)) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0x8400F803;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
    return 0;
}
