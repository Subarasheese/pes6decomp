/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D16370(s32, s32);
M2C_UNK func_00D1AA70();                            /* extern */
M2C_UNK func_00D1B290();                            /* extern */
extern s32 D_003EB368;
extern s32 D_003EB36C;
extern char D_00D395F0[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D16A70(void) {
    s32 temp_v1;

    if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
        D_003EB36C = 2;
        return 0;
    }
    temp_v1 = ((s32) (*(s32 *)D_00D39AAC) >> 3) & 3;
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_003EB36C = 2;
        break;
    case 1:
        D_003EB368 = 0;
        (*(s8 *)D_00D395F0) = 0;
        func_00D1AA70();
        func_00D1B290();
        (*(s32 *)D_00D39AAC) &= ~0x18;
        break;
    }
    func_00D16370((*(s32 *)D_00D39AA4), (*(s32 *)D_00D39AAC));
    return 0;
}
