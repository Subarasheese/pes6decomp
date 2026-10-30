/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00822940();                            /* extern */
M2C_UNK func_00822B10();                            /* extern */
M2C_UNK func_00824FD0();                            /* extern */
M2C_UNK func_00827510();                            /* extern */
M2C_UNK func_00827690();                            /* extern */
M2C_UNK func_00827880();                            /* extern */
M2C_UNK func_00836F40();                            /* extern */
void *func_00841140();                              /* extern */
M2C_UNK func_00843320();                            /* extern */
u32 func_00843730(M2C_UNK);                         /* extern */
s32 func_008438F0(M2C_UNK);                         /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00843AC0();                            /* extern */
M2C_UNK func_00862420(s32);                         /* extern */
M2C_UNK func_00866040(s32);                         /* extern */
extern char D_008A4398[];
extern char D_008A43A0[];
extern char D_008A43A8[];
extern char D_008A43C0[];
extern char D_008A5F7A[];
extern char D_008A5F7C[];
extern char D_008A5F80[];

s32 func_00824C90(void) {
    void *temp_v0;

    if ((*(s32 *)D_008A43C0) == 0) {
        return 1;
    }
    temp_v0 = func_00841140();
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x8D6) == 0xB)) {
        M2C_FIELD(temp_v0, s8 *, 0x8D6) = 1;
    }
    func_00843AC0();
    if ((*(s8 *)D_008A5F7A) == 1) {
        (*(s32 *)D_008A5F80) = (func_00843730(0) / 1000U) + (*(s32 *)D_008A5F7C);
    }
    func_00843320();
    if (func_008438F0(1) < 0) {
        func_00862420((*(s32 *)D_008A4398));
        func_008439C0(1, 0x3E8);
    }
    func_00824FD0();
    (*(s32 *)D_008A43A0) = -0x96;
    (*(s32 *)D_008A43A8) = -0x96;
    if ((*(s32 *)D_008A4398) != 0) {
        func_00866040((*(s32 *)D_008A4398));
    }
    func_00822940();
    func_00822B10();
    func_00827880();
    func_00827690();
    func_00827510();
    func_00836F40();
    return 0;
}
