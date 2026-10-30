/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];
extern char D_005BD8F4[];

void func_0014D688(void) {
    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), 0, 0);
    }
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), ~(*(s32 *)D_005BD8F4) != 0, 0x40);
    }
}
