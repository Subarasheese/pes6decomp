/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001115C8(void *);                      /* extern */
M2C_UNK func_00111850(void *);                      /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */
extern char D_005F8648[];
extern char D_005F8658[];

void func_00111798(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;

    if (arg1 >= M2C_FIELD(arg0, s32 *, 0xC)) {
        func_001AD620(((void *)D_005F8648), 0x56, ((void *)D_005F8658));
    }
    temp_a0 = (arg1 * 8) + M2C_FIELD(arg0, s32 *, 0);
    func_001AE624(temp_a0, temp_a0 + 8, ((M2C_FIELD(arg0, s32 *, 0xC) - arg1) * 8) - 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    if (temp_v0 == 0) {
        func_00111850(arg0);
        return;
    }
    func_001115C8(arg0);
}
