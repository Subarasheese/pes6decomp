/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
void *func_0016A7D8(s32);                           /* extern */
extern char D_003C92E0[];
extern char D_003C9308[];
extern char D_003C9330[];
extern M2C_UNK cvFsCallUsrErrFn;

void func_0016A748(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_v0_2)(M2C_UNK *, M2C_UNK);
    void *temp_v0;

    if (arg0 == 0) {
        func_0016A550((s32) ((void *)D_003C92E0));
        return;
    }
    if (arg1 == 0) {
        func_0016A550((s32) ((void *)D_003C9308));
        return;
    }
    temp_v0 = func_0016A7D8(arg1);
    if (temp_v0 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4);
        if (temp_v0_2 != NULL) {
            temp_v0_2(&cvFsCallUsrErrFn, 0);
        }
        return;
    }
    func_0016A550((s32) ((void *)D_003C9330));
}
