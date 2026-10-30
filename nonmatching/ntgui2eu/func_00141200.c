/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00140F78();                            /* extern */
M2C_UNK func_00141788();                            /* extern */
M2C_UNK func_00154510();                            /* extern */
extern char D_005BD2BC[];
extern char D_005BD2C8[];

void func_00141200(s32 arg0) {
    (*(s32 *)D_005BD2BC) = arg0;
    if (arg0 != -1) {
        if (M2C_FIELD(((void *)D_005BD2C8), s32 *, 0) == 0) {
            func_00154510();
        }
        M2C_FIELD(((void *)D_005BD2C8), s32 *, -0x2D38) = 0;
        *(s32 *)0x5BD2C4 = 0;
        func_00140F78();
    }
    func_00141788();
}
