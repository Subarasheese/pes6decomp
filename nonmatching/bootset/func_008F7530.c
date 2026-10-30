/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B20(void);
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_008F9B40[];
extern char D_008F9B48[];

void func_008F7530(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    default:
        func_001B7B20();
        return;
    case 1:
        func_001B7ED0(((void *)D_008F9B40), 2);
        return;
    case 2:
        func_001B7ED0(((void *)D_008F9B48), 2);
        return;
    case 3:
        func_001B7ED0(((void *)D_008F9B40), 1);
        return;
    }
}
