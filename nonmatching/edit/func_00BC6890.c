/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
M2C_UNK func_001B8EA0(M2C_UNK *, s32);              /* extern */
extern char D_00CE4EB0[];
extern char D_00CE4EC0[];

void func_00BC6890(void) {
    switch ((*(s32 *)D_00CE4EC0)) {                           /* irregular */
    case 1:
        func_001B8EA0(((void *)D_00CE4EB0), (*(s32 *)D_00CE4EC0));
        break;
    case 2:
        func_001B8DC0();
        break;
    }
    M2C_FIELD(((void *)D_00CE4EB0), s32 *, 0x10) = 0;
}
