/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002B9780(s64, M2C_UNK, M2C_UNK, u8 *, u8 *, s8 *, s8 *, M2C_UNK *); /* extern */
extern char D_00C9A710[];

void func_00B7DAC0(void) {
    u8 sp18;
    s8 sp19;
    u8 sp1A;
    s8 sp1B;
    u8 sp1C;
    s8 sp1D;
    M2C_UNK *var_a7;
    M2C_UNK *var_t0;
    M2C_UNK *var_t1;
    s32 var_t2;
    u8 temp_v0;
    u8 temp_v1;

    sp1B = 2;
    var_t1 = ((void *)D_00C9A710);
    sp19 = 0;
    var_t2 = 0;
    sp1A = 0;
    var_t0 = ((void *)D_00C9A710);
    sp1C = 0xFF;
    var_a7 = ((void *)D_00C9A710);
    sp1D = -1;
    do {
        temp_v1 = M2C_FIELD(var_t1, u8 *, 0x12);
        if (temp_v1 != 0xFF) {
            temp_v0 = M2C_FIELD(var_t0, u8 *, 0x24);
            switch (temp_v0) {                      /* irregular */
            case 0:
                sp1A = temp_v1;
                sp18 = M2C_FIELD(var_t1, u8 *, 0x13);
                sp19 = (s8) M2C_FIELD(var_a7, s32 *, 8);
                sp1B = (s8) M2C_FIELD(var_t0, s32 *, 0x2C);
                break;
            case 1:
                sp1C = temp_v1;
                break;
            }
        }
        var_t2 += 1;
        var_t1 += 8;
        var_t0 += 0xC;
        var_a7 += 4;
    } while (var_t2 < 2);
    func_002B9780((s64) sp18, 1, 0xFF, &sp1C, &sp1A, &sp1B, &sp19, var_a7);
}
