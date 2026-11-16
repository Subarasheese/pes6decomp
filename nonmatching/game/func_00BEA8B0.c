/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009EE720(u8, u8, u8);                  /* extern */
M2C_UNK func_009EFC40(u8, u8, u8);                  /* extern */
M2C_UNK func_009F1390(u8, u8, u8);                  /* extern */
s32 func_00B79490();                                /* extern */
M2C_UNK func_00B79620(s32);                         /* extern */
s32 func_00B79670(u8);                              /* extern */
M2C_UNK func_00B94660(u8 *, u8, u8);                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];
extern char D_005926FF[];
extern char D_00CBCC62[];
extern char D_00CBCC63[];

void func_00BEA8B0(void) {
    s32 temp_v0;
    s32 var_v1;
    u8 *p;
    u8 first;
    u8 mode;

    if ((*(u8 *)D_00CBCC62) == 0) {
        if (func_00B79490() != 0) {
            return;
        }
    }
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    p = (u8 *)(Pes6MatchPlayers + var_v1 * 0x240);
    first = *p;
    mode = *(u8 *)D_005926FF;
    (*(u8 *)D_00CBCC63) = first;
    switch (mode) {
    case 2:
        func_009F1390(*p, mode, first);
        break;
    case 3:
        func_009EFC40(*p, mode, first);
        break;
    case 4:
        func_009EE720(*p, mode, first);
        break;
    case 5:
        func_00B94660(p, mode, first);
        break;
    }
    temp_v0 = func_00B79670((*(u8 *)D_00591E4D));
    if (temp_v0 != 0) {
        func_00B79620(temp_v0);
    }
    func_009E1D30(2, 0xA);
}
