/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012A780(M2C_UNK *);                   /* extern */
M2C_UNK func_001463E0(s32 *, s32 *, s32);           /* extern */
M2C_UNK func_00146790(s32 *, s32 *, s32);           /* extern */
M2C_UNK func_00158148(s32);                         /* extern */
extern char D_005B59BC[];
extern char D_005B59C0[];
extern char D_005B59C8[];
extern char D_005BEDB4[];
extern char D_011DFADC[];

void func_001467F0(s32 arg0) {
    func_0012A780(((void *)D_005B59C8));
    (*(s32 *)D_005B59BC) = -1;
    (*(s32 *)D_005B59C0) = 0;
    (*(s32 *)D_011DFADC) = 0;
    if ((*(s32 *)D_005BEDB4) > 0) {
        func_00146790(((void *)D_011DFADC), ((void *)D_005B59BC), (*(s32 *)D_005BEDB4));
    } else {
        func_001463E0(((void *)D_011DFADC), ((void *)D_005B59BC), (*(s32 *)D_005BEDB4));
    }
    func_00158148(arg0);
}
