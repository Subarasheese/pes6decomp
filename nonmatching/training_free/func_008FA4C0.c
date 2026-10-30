/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008FA100(s32);                         /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_003EA6C0;

s32 func_008FA4C0(M2C_UNK arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    void *temp_s2;

    func_0026E840(0x8400F803);
    switch (arg1) {                                 /* irregular */
    case 8:
        var_v0 = M2C_FIELD(D_003EA6C0, s32 *, 0x184) + 1;
block_9:
        M2C_FIELD(D_003EA6C0, s32 *, 0x184) = var_v0;
        break;
    case 7:
        var_v0 = M2C_FIELD(D_003EA6C0, s32 *, 0x184) - 1;
        goto block_9;
    }
    var_s1 = 0;
    var_s0 = 0;
    temp_v1 = M2C_FIELD(D_003EA6C0, s32 *, 0x18C);
    M2C_FIELD(D_003EA6C0, s32 *, 0x184) = (s32) ((s32) (M2C_FIELD(D_003EA6C0, s32 *, 0x184) + temp_v1) % temp_v1);
    do {
        temp_s2 = D_003EA6C0 + var_s0 + 0x204;
        func_00C75330(temp_s2);
        func_001EDD90(M2C_FIELD(temp_s2, s32 *, 0x18));
        func_001C48E8(temp_s2, 0, 0x1C);
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0xB);
    func_008FA100(M2C_FIELD(D_003EA6C0, s32 *, 0x184));
    return 0;
}
