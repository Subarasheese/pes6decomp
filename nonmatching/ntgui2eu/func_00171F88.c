/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_00163FE8(s32, s32);                    /* extern */
s32 func_00165B00(void *);                          /* extern */
M2C_UNK func_00167C38(s32, s32);                    /* extern */
M2C_UNK func_0016A158(void *, M2C_UNK);             /* extern */
M2C_UNK func_0016B860();                            /* extern */

void func_00171F88(void *arg0, s32 arg1) {
    s32 temp_a0;

    func_0016B860();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC9C);
    if (temp_a0 != 0) {
        func_00135018(temp_a0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC90) != 0) {
        func_00167C38(func_00165B00(arg0), M2C_FIELD(arg0, s32 *, 0xC90));
    }
    if (M2C_FIELD(arg0, s32 *, 0xC8C) != 0) {
        func_00167C38(func_00165B00(arg0), M2C_FIELD(arg0, s32 *, 0xC8C));
    }
    func_0016A158(arg0 + 0xD1C, 3);
    func_00135018(M2C_FIELD(arg0, s32 *, 0xB80));
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x910), arg1);
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x914), arg1);
}
