/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D1AA70();                            /* extern */
extern s32 D_003EB368;
extern char D_00D395D0[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D169F0(void) {
    s32 temp_v0;

    if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
        *(s32 *)0xD395D0 = 0;
    } else {
        temp_v0 = ((s32) (*(s32 *)D_00D39AAC) >> 3) & 3;
        switch (temp_v0) {                          /* irregular */
        case 1:
            D_003EB368 = 0;
            break;
        case 0:
            (*(s32 *)D_00D395D0) = 0;
            break;
        }
    }
    func_00D1AA70();
    return 0;
}
