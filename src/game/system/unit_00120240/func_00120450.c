/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s16 func_001404F0();                                /* extern */
s16 func_00140500();                                /* extern */
extern char D_003F7790[];
extern char D_003F7794[];
extern char D_003F7796[];
extern char D_003F7798[];
extern char D_003F779C[];
extern char D_003FB10C[];
extern char D_003FB110[];

void func_00120450(void) {
    (*(s16 *)D_003F7794) = func_00140500();
    (*(s16 *)D_003F7796) = func_001404F0();
    (*(f32 *)D_003F7798) = (*(f32 *)D_003FB10C);
    (*(f32 *)D_003F779C) = (*(f32 *)D_003FB110);
    (*(s32 *)D_003F7790) += 1;
}
