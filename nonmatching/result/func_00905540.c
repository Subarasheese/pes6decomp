/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_001B9C60(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FC8;

void func_00905540(s32 arg0) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    void *temp_s1;

    var_s0 = 0;
    do {
        temp_s1 = D_00923FC8 + ((var_s0 % 6) << 5) + 0x94C;
        func_00C75330(temp_s1);
        func_001C48E8(temp_s1, 0, 0x20);
        var_s0 += 1;
    } while (var_s0 < 6);
    func_00910060();
    func_001EDD90(M2C_FIELD(D_00923FC8, s32 *, 0x818));
    func_001B9C60(M2C_FIELD(D_00923FC8, void **, 0xA0C));
    func_00C75330(D_00923FC8 + 0x914);
    func_00C75330(D_00923FC8 + 0x64C);
    var_s0_2 = 0;
    var_s1 = 0;
    do {
        func_0026B580(D_00923FC8 + var_s1 + 0xA18, 0xB, arg0);
        var_s0_2 += 1;
        var_s1 += 0x2C;
    } while (var_s0_2 < 8);
}
