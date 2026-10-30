/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
extern void func_001D67A0(int);
extern void func_001D67B0(void *);
M2C_UNK func_0063A580(M2C_UNK);                     /* extern */

void func_0062EFB0(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s0, void **, 0x150);
        if (temp_a0 != NULL) {
            func_001D6E40(temp_a0);
            M2C_FIELD(var_s0, void **, 0x150) = NULL;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xF);
    func_0063A580(0x7346);
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x18C);
    if ((temp_a0_2 != 0) && (M2C_FIELD(arg0, s32 *, 0x190) != 0)) {
        func_001D67A0(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x190) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x18C);
    if (temp_a0_3 != 0) {
        func_001D67B0((void *) temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    }
}
