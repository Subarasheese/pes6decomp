/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
s32 func_001BE4D0(M2C_UNK);                         /* extern */
s32 func_002DCA30();                                /* extern */
s32 func_00815100(M2C_UNK *);                       /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
s32 func_00825610();                                /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern s8 D_003EA494;
extern char D_00510FD0[];
extern char D_008DA9A0[];
extern M2C_UNK func_008C4F10;
extern M2C_UNK func_008C4F20;

s32 func_008C90D0(void) {
    if (func_002DCA30() != 0) {
        if (func_00825610() == 6) {
            if (func_001BE4D0(0) == 0) {
                goto block_20;
            }
            goto block_8;
        }
        if (func_001B68B0() == 0) {
            goto block_20;
        }
        goto block_8;
    }
    if (func_001B68B0() == 0) {
        goto block_20;
    }
block_8:
    if ((*(s32 *)D_00510FD0) != 0xF) {
        return 2;
    }
    switch (D_003EA494) {                           /* irregular */
    case 0:
        if (func_00825610() == 6) {
            func_00815B70(0);
            func_00D10140(9);
            func_008157A0(&func_008C4F20, &func_008C4F10, ((void *)D_008DA9A0));
        } else {
            func_008157A0(&func_008C4F20, &func_008C4F10, ((void *)D_008DA9A0));
        }
        func_00D0FBE0(1);
        D_003EA494 = 1;
block_20:
        return 0;
    case 1:
        if (func_00815100(((void *)D_008DA9A0)) != 0) {
            D_003EA494 = 0;
            return 2;
        }
        goto block_20;
    }
}
