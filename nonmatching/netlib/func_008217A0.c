/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C8590(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001F86A0(s32, s32 *);                  /* extern */
M2C_UNK func_008205E0(s32, s32, s8, s8, u8 *);      /* extern */
s32 func_008262A0(s32 *);                           /* extern */
M2C_UNK func_00842950(M2C_UNK);                     /* extern */
M2C_UNK func_00D0F840(M2C_UNK *, M2C_UNK *, M2C_UNK, u8 *, s32, s8, s8); /* extern */
extern u8 D_003E77EC;
extern u8 D_003E77ED;
extern u8 D_003E77EE;
extern u8 D_003E77EF;
extern char D_008A4398[];
extern char D_008A4FD0[];
extern char D_008A5F70[];
extern char D_008A94F4[];
extern char D_008A94F8[];
extern char D_008A94FC[];
extern char D_008A952D[];
extern char D_008A952E[];
extern char D_008A952F[];
extern char D_008A95B0[];

s32 func_008217A0(void) {
    u8 sp2C;
    u8 sp2D;
    u8 sp2E;
    u8 sp2F;
    s32 temp_s0;
    s32 var_v0;

    sp2C = D_003E77EC;
    sp2D = D_003E77ED;
    sp2E = D_003E77EE;
    sp2F = D_003E77EF;
    if (((*(s32 *)D_008A4398) == 0) || (((void *)D_008A5F70) == NULL)) {
        return 1;
    }
    func_001C48E8(((void *)D_008A4FD0), 0, 0x400);
    func_001F86A0((*(s32 *)D_008A4398) + 0x139E7, ((void *)D_008A4FD0));
    temp_s0 = (*(s32 *)D_008A4398) + 0x139AC;
    if (((void *)D_008A94F4) != NULL) {
        if (temp_s0 != 0) {
            func_001C48E8(((void *)D_008A94F4), 0, 0x1C0);
            func_001C4730(((void *)D_008A94F4), temp_s0, 0xBC);
            if (func_008262A0(((void *)D_008A94F4)) == 1) {
                var_v0 = 0;
            } else {
                func_001C8590(((void *)D_008A95B0), ((void *)D_008A952F), 0x80);
                var_v0 = 1;
            }
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 1;
    }
    func_008205E0((*(s32 *)D_008A94F8), (*(s32 *)D_008A94F4), (*(s8 *)D_008A952D), (*(s8 *)D_008A952E), &sp2C);
    func_00D0F840(((void *)D_008A94FC), ((void *)D_008A95B0), 0, &sp2C, (*(s32 *)D_008A94F8), (*(s8 *)D_008A952D), (*(s8 *)D_008A952E));
    func_00842950(1);
    return 4;
}
