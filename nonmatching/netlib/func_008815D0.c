/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_00882040();                            /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_0088A7C0[];
extern char D_008B2470[];
extern void *D_008B2494;
extern char D_008B24D0[];
extern char D_008B24D2[];
extern char D_008B24D4[];
extern M2C_UNK func_00814FB0;

s32 func_008815D0(void) {
    if ((*(s32 *)D_008B2470) != 0) {
        if ((*(u8 *)D_008B24D2) != 0) {
            return 0;
        }
        func_00882040();
        (*(s8 *)D_008B24D0) = 0;
        if ((*(s8 *)D_008B24D4) != 0) {
            func_00815B70(0);
            func_00D10140(0xE);
            func_008157A0(&func_00814FB0, &func_00814FB0, ((void *)D_0088A7C0));
            func_001D7D60(D_008B2494, 1);
        }
        (*(u8 *)D_008B24D2) = 1;
        goto block_6;
    }
block_6:
    return 0;
}
