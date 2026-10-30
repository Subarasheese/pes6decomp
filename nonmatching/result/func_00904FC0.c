/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001D7D60(void *, s8);
extern void func_001B7920(void);
extern void func_001B77F0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00905540(s32);                         /* extern */
M2C_UNK func_00909780();                            /* extern */
M2C_UNK func_009100B0(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_00923FC8;

s32 func_00904FC0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_s0;
    s32 var_s1;

    func_0026E840(0x84008401);
    if (M2C_FIELD(D_00923FC8, s32 *, 0x648) == 1) {
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x918), 0);
        var_s1 = 0;
        var_s0 = 0;
        do {
            func_001D7D60(M2C_FIELD((D_00923FC8 + var_s0), void **, 0x950), 0);
            var_s1 += 1;
            var_s0 += 0x20;
        } while (var_s1 < 6);
        func_001EDAE0(M2C_FIELD(D_00923FC8, void **, 0x818), 1);
        M2C_FIELD(D_00923FC8, s32 *, 0x648) = 0;
        func_009100B0(0, 1);
        if (M2C_FIELD(D_00923FC8, s32 *, 0x8E8) < 2) {

        }
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x91C), 0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x920), 0 & 0xFF);
        func_001B7920();
        func_001B77F0(3);
        return 0;
    }
    func_00905540(arg3);
    func_00909780();
    return 2;
}
