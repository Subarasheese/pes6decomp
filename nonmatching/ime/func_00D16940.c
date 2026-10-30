/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F8760(void *);
M2C_UNK func_00D1AA70();                            /* extern */
s32 func_00D1C7E0(M2C_UNK *);                       /* extern */
extern s32 D_003EB368;
extern char D_00D395D0[];
extern char D_00D395F0[];
extern char D_00D39640[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D16940(void) {
    s32 temp_v0;
    s32 var_v0;

    if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
        var_v0 = func_001F8760((void *)0xD39640);
        goto block_9;
    }
    temp_v0 = ((s32) (*(s32 *)D_00D39AAC) >> 3) & 3;
    switch (temp_v0) {                              /* irregular */
    case 0:
        var_v0 = func_001F8760(((void *)D_00D39640));
block_9:
        (*(s32 *)D_00D395D0) = var_v0;
        break;
    case 1:
        D_003EB368 = func_00D1C7E0(((void *)D_00D395F0));
        break;
    }
    func_00D1AA70();
    return 0;
}
