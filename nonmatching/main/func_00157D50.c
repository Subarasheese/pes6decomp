/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00157B58(void);
M2C_UNK func_00157B98(M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern char D_00377004[];
extern char D_003C7C38[];

s32 func_00157D50(s32 arg0, s32 arg1, s32 arg2) {
    if ((*(s32 *)D_00377004) == 0) {
        func_00157B58();
    }
    func_00157B98(((void *)D_003C7C38), 6, arg0, arg1, arg2);
    return 0;
}
