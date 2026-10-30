/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern void func_001EF860(void *, void *);
extern void func_001DEF30(void *, s8);
extern void func_001EEE60(void *, void *);
s32 func_001DFA30(M2C_UNK, s8 *, M2C_UNK *);        /* extern */
M2C_UNK func_001EF370(void *, s32 *);               /* extern */
M2C_UNK func_00CED4E0(void ***, M2C_UNK, M2C_UNK);  /* extern */
extern s32 D_003E7E28;
extern u8 D_003E7E30;
extern u8 D_003E7E31;
extern u8 D_003E7E32;
extern u8 D_003E7E33;
extern char D_00CFE2E0[];

void func_00CE92C0(void) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s8 sp70;
    u8 sp7C;
    u8 sp7D;
    u8 sp7E;
    u8 sp7F;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s8 *var_v1;
    u32 var_s2;
    void ***temp_s1;
    void **var_s1;
    void *temp_s3;

    var_v0 = 0xC;
    var_v1 = &sp70;
    temp_s1 = D_003E7E28 + 0x168;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s2 = 0;
    var_s0 = 0;
    sp7E = D_003E7E32;
    sp7C = D_003E7E30;
    sp7D = D_003E7E31;
    sp7F = D_003E7E33;
    do {
        M2C_FIELD((D_003E7E28 + var_s0), s32 *, 0x1A0) = func_001DFA30(0x21, &sp70, ((void *)D_00CFE2E0));
        temp_s3 = M2C_FIELD((D_003E7E28 + var_s0), void **, 0x1A0);
        func_001DF4F0(temp_s3, 0);
        func_001DEF30(temp_s3, 0);
        var_s2 += 1;
        var_s0 += 4;
    } while (var_s2 < 0xCU);
    func_00CED4E0(temp_s1, 0xC, 0);
    var_s1 = *temp_s1;
    var_s0_2 = 0;
    do {
        sp60 = 0;
        sp64 = 0;
        sp68 = 0;
        sp6C = 0;
        func_001EF860(*var_s1, &sp60);
        sp50 = 0;
        sp54 = 0;
        sp58 = 0x40800000;
        sp5C = 0x40800000;
        func_001EF370(*var_s1, &sp50);
        func_001EEE60(*var_s1, &sp7C);
        var_s0_2 += 1;
        var_s1 += 4;
    } while (var_s0_2 < 0xC);
}
