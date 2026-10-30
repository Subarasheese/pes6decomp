/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002211C0(u16 *, u16);                    /* extern */
u8 *func_00821780();                                /* extern */
extern char D_00591DEE[];
extern char D_00592743[];
extern char D_00592744[];

s32 func_00931190(s32 arg0) {
    s32 temp_v1;
    u16 *var_a0;
    u16 var_a1;
    u8 *temp_v0;
    u8 temp_s0;
    u8 var_s1;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00821780();
    if (temp_v0 != NULL) {
        if (*temp_v0 == 5) {
            var_a1 = (arg0 != 0) * 2;
            var_a0 = (u16 *)0xC;
            temp_v0_2 = var_a1 + temp_v0;
            var_s1 = M2C_FIELD(temp_v0_2, u8 *, 0x460);
            temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 0x461);
            (*(u16 *)D_00591DEE) = M2C_FIELD(temp_v0_2, u16 *, 0x464);
            if ((var_s1 == 0xC) || ((s32) var_s1 >= 0xD)) {
                var_s1 = 2;
            }
            if (arg0 == 0) {
                temp_v1 = var_s1 & 0xFF;
                if ((temp_v1 != 4) && (temp_v1 != 7)) {

                } else {
                    var_s1 = 2;
                }
            } else {
                var_a0 = ((void *)D_00591DEE);
                var_a1 = (*(u16 *)D_00591DEE) | 0x200;
                (*(u16 *)D_00591DEE) = var_a1;
                (*(u16 *)D_00591DEE) ^= 0x200;
            }
            temp_v0_3 = func_002211C0(var_a0, var_a1);
            if (temp_v0_3 != NULL) {
                M2C_FIELD(temp_v0_3, u8 *, 5) = var_s1;
                (*(u8 *)D_00592743) = var_s1;
                M2C_FIELD(temp_v0_3, u8 *, 6) = temp_s0;
                (*(u8 *)D_00592744) = temp_s0;
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
