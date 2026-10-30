/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
extern char D_003CC170[];
extern char D_003CC1A0[];
extern char D_003CC240[];
extern char D_003CC250[];

void func_00176B20(void *arg0, s32 arg1, void *arg2) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK);

    if (arg0 == NULL) {
        func_00176460(((void *)D_003CC240), (s32) ((void *)D_003CC170));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        if ((M2C_FIELD(arg2, s32 *, 4) > 0) && (M2C_FIELD(arg2, s32 *, 0) != 0) && (arg1 != 0) && (arg1 != 1)) {
            temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
            M2C_FIELD(arg2, s32 *, 0) = 0;
            M2C_FIELD(arg2, s32 *, 4) = 0;
            if (temp_v0 != NULL) {
                temp_v0(M2C_FIELD(arg0, s32 *, 0x20), -3);
            }
        }
        return;
    }
    func_00176460(((void *)D_003CC250), (s32) ((void *)D_003CC1A0));
}
