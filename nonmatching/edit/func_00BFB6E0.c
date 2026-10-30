/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002F7EA0(s32, s32);
M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_00BC9A00(M2C_UNK *);                   /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
extern char D_00CEB790[];
extern char D_00CEB874[];
extern char D_00CEB87C[];
extern char D_00CEB880[];
extern char D_00CEB884[];
extern char D_00CEB8A4[];

void func_00BFB6E0(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_a0;

    temp_s1 = func_00C1B400(0);
    func_00BC9B60(2, 0x14);
    func_001C4730(((void *)D_00CEB790), temp_s1, 0x7C);
    func_00BC9A00(((void *)D_00CEB790));
    (*(s32 *)D_00CEB874) = 0;
    (*(s32 *)D_00CEB880) = 0;
    (*(s32 *)D_00CEB884) = 1;
    (*(s32 *)D_00CEB87C) = 0;
    (*(s32 *)D_00CEB8A4) = 0;
    temp_a0 = func_002F7EA0(0, 0) & 0xFF;
    if ((temp_a0 >= 0) && (temp_a0 < 3)) {
        goto block_9;
    }
    if ((temp_a0 >= 3) && (temp_a0 < 0xA)) {
        var_a0 = 1;
    } else if ((temp_a0 >= 0xA) && (temp_a0 < 0x11)) {
        var_a0 = 2;
    } else {
block_9:
        var_a0 = 0;
    }
    switch (var_a0) {                               /* irregular */
    case 0:
        M2C_FIELD(((void *)D_00CEB790), s32 *, 0xFC) = 0;
        return;
    case 2:
    case 1:
        M2C_FIELD(((void *)D_00CEB790), s32 *, 0xFC) = 1;
        return;
    }
}
