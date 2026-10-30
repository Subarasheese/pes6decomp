/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
extern int func_002DCA30(void);
s32 func_001B68B0();                                /* extern */
s32 func_00815100(M2C_UNK *);                       /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern s8 D_003EABF0;
extern char D_00510FD0[];
extern char D_00966850[];
extern M2C_UNK func_00941EE0;
extern M2C_UNK func_00941EF0;

s32 func_00943150(void) {
    if (func_002DCA30() != 0) {
        if (func_001BE4D0(0) == 0) {
            goto block_16;
        }
        goto block_5;
    }
    if (func_001B68B0() == 0) {
        goto block_16;
    }
block_5:
    if ((*(s32 *)D_00510FD0) != 0xF) {
        return 1;
    }
    switch (D_003EABF0) {                           /* irregular */
    case 0:
        func_00815B70(0);
        func_00D10140(8);
        func_008157A0(&func_00941EF0, &func_00941EE0, ((void *)D_00966850));
        func_00D0FBE0(1);
        D_003EABF0 = 1;
block_16:
        return 0;
    case 1:
        if (func_00815100(((void *)D_00966850)) != 0) {
            D_003EABF0 = 0;
            return 1;
        }
        goto block_16;
    }
}
