/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DAE0(s32);                         /* extern */
M2C_UNK func_00141788();                            /* extern */
extern char D_005BD2BC[];
extern char D_005BD2C0[];

void func_00140618(void) {
    func_0012DAE0((*(s32 *)D_005BD2C0));
    if ((*(s32 *)D_005BD2C0) == -1) {
        (*(s32 *)D_005BD2BC) = (*(s32 *)D_005BD2C0);
    }
    func_00141788();
}
