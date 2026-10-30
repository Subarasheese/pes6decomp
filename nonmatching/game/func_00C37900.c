/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00B2A420(u8);                            /* extern */
extern char D_00CCB690[];

void func_00C37900(s32 arg0) {
    s32 var_s0;
    u8 temp_a0;
    void *temp_s1;

    var_s0 = 0;
    temp_s1 = ((void *)D_00CCB690) + ((arg0 - 1) * 0x94);
    do {
        temp_a0 = M2C_FIELD((temp_s1 + var_s0), u8 *, 0x70);
        if ((s32) temp_a0 >= 0x17) {

        } else {
            M2C_FIELD(M2C_FIELD(func_00B2A420(temp_a0), void **, 4), s8 *, 0x54) = 0;
        }
        var_s0 += 1;
    } while (var_s0 < 8);
    func_001C48E8(temp_s1, 0, 0x94);
}
