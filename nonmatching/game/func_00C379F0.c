/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_00B2A420(s32);                           /* extern */
extern char D_00CCB690[];

void func_00C379F0(void) {
    s32 var_s0;
    void *temp_a0;

    func_001C48E8(((void *)D_00CCB690), 0, 0x250);
    var_s0 = 0;
    do {
        temp_a0 = M2C_FIELD(func_00B2A420(var_s0), void **, 4);
        var_s0 += 1;
        M2C_FIELD(temp_a0, s8 *, 0x54) = 0;
    } while (var_s0 < 0x17);
}
