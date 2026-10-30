/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0029A0A0(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_00591C09[];

s32 func_00BCC4E0(void) {
    s32 temp_v0;

    if ((*(u8 *)D_00591C09) == 5) {
        return 1;
    }
    temp_v0 = func_0029A0A0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        if ((func_009E1C90(1) & 0xFF) == 8) {
            return 1;
        }
    case 2:
        return 0;
    case 4:
        return 1;
    default:
        return 1;
    }
}
