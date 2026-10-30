/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_0026C760();                                /* extern */
s32 func_0090F070(M2C_UNK);                         /* extern */
M2C_UNK func_0090F920();                            /* extern */
s32 func_00C75F80();                                /* extern */
s32 func_00D0F610();                                /* extern */
extern char D_0058D7A7[];
extern char D_0058D7AA[];
extern char D_0058D7FC[];
extern char D_00591C09[];
extern char D_00921DD0[];
extern char D_00921DD4[];
extern char D_00921F60[];
extern char D_00924274[];

void func_00911180(void) {
    s32 var_v0;
    s32 var_v0_2;

    if ((*(s8 *)D_00921DD4) != 0) {
        if ((func_0026C760() != 0) && ((*(s32 *)D_00921DD0) == 0) && ((*(u8 *)D_00591C09) != 7) && ((*(s8 *)D_0058D7AA) == 0) && ((*(s8 *)D_0058D7A7) == 0)) {
            (*(s32 *)D_00921DD0) = func_0090F070(0x12);
            if ((*(s32 *)D_0058D7FC) != 0) {
                func_001D7D60((*(s32 *)D_00924274), 0);
            }
        }
        if (func_00C75F80() != 0) {
            if ((*(s32 *)D_00921F60) != 0) {
                if ((*(s8 *)D_0058D7AA) == 0) {
                    var_v0 = 0;
                } else {
                    var_v0 = func_00D0F610();
                }
                if (var_v0 == 0) {
                    (*(s32 *)D_00921F60) = 0;
                }
            } else {
                if ((*(s8 *)D_0058D7AA) == 0) {
                    var_v0_2 = 0;
                } else {
                    var_v0_2 = func_00D0F610();
                }
                if (var_v0_2 != 0) {
                    (*(s32 *)D_00921F60) = 1;
                }
            }
        }
        func_0090F920();
    }
}
