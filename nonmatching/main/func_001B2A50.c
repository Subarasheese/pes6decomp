/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00150DC0(s32, s32);                    /* extern */
M2C_UNK func_00153FA0(void *);                      /* extern */
M2C_UNK func_001ADA40(u8);                          /* extern */
M2C_UNK func_001B3320(void *);                      /* extern */
M2C_UNK func_001CDAD0(void *);                      /* extern */

void func_001B2A50(void *arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0);
    temp_s0 = M2C_FIELD(arg0, void **, 0x44);
    func_001CDAD0(temp_s0);
    if (*M2C_FIELD(temp_s0, s32 **, 4) != 0) {
        func_00150DC0(func_001454C0(M2C_FIELD(temp_s1, u8 *, 0x66) + 0xFB4), *M2C_FIELD(temp_s0, s32 **, 4));
    }
    func_001B3320(temp_s1);
    func_001ADA40(M2C_FIELD(temp_s1, u8 *, 0x66));
    func_00153FA0(temp_s0);
}
