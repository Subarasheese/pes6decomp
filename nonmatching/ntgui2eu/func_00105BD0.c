/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001059F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00105BA8();                            /* extern */
M2C_UNK func_00193068(M2C_UNK);                     /* extern */
extern s32 D_006025EC;
extern s32 D_006025F0;

s32 func_00105BD0(void) {
    s32 temp_v0;

    D_006025EC = 0;
    func_00105BA8();
loop_1:
    func_00193068(0);
    temp_v0 = func_001059F8(0x22000027, 0, 0, 0);
    D_006025F0 = temp_v0;
    if (temp_v0 != 7) {
        D_006025EC += 1;
        goto loop_1;
    }
    return 1;
}
