/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
M2C_UNK func_00165CB0(void *);                      /* extern */
M2C_UNK func_00165D68(void *);                      /* extern */
M2C_UNK func_00169918();                            /* extern */
M2C_UNK func_0016B000(void *);                      /* extern */
extern char D_005BFE2C[];

void func_00169848(void *arg0, void *arg1) {
    M2C_UNK (*temp_v0)(void *, s32, s32, s32, s32);
    void *temp_v1;

    func_00169918();
    if (func_00163C30(arg1, (*(s32 *)D_005BFE2C)) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0x128)(arg0, arg1);
    } else {
        temp_v1 = M2C_FIELD(arg1, void **, 0x4C);
        if (M2C_FIELD(temp_v1, s32 *, 0x6C) != 0) {
            temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(void *, s32, s32, s32, s32), 0xEC);
            if (temp_v0 != NULL) {
                temp_v0(arg1, M2C_FIELD(arg0, s32 *, 0x830), M2C_FIELD(arg0, s32 *, 0x834), M2C_FIELD(arg0, s32 *, 0x838), M2C_FIELD(arg0, s32 *, 0x83C));
            }
        }
    }
    func_00165D68(arg1);
    func_00165CB0(arg1);
    func_0016B000(arg0);
}
