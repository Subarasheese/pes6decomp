/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E4D[];
extern char D_005926FF[];
extern char D_00592800[];
extern char D_00592942[];

void func_009981A0(void) {
    M2C_UNK *var_a2;
    s8 var_a3;

    if (((*(u8 *)D_005926FF) != 5) && ((*(u8 *)D_005926FF) != 2) && ((*(u8 *)D_005926FF) != 3) && ((*(u8 *)D_005926FF) != 4) && ((*(u8 *)D_005926FF) != 1)) {
        return;
    }
    (*(s8 *)D_00592942) = 0xFF;
    var_a3 = 0;
    var_a2 = ((void *)D_00592800);
    do {
        M2C_FIELD(var_a2, u8 *, 0x11) = (u8) M2C_FIELD(var_a2, u8 *, 0x10);
        if ((*(u8 *)D_00591E4D) == M2C_FIELD(var_a2, u8 *, 0x10)) {
            *(s8 *)0x592942 = var_a3;
        }
        var_a3 += 1;
        var_a2 += 0x28;
    } while (var_a3 < 8);
}
