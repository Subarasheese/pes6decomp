/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A58E0(void *, M2C_UNK);             /* extern */
M2C_UNK func_001AAF30(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_001AAF40(void *, M2C_UNK);             /* extern */
M2C_UNK func_001AFD20();                            /* extern */
M2C_UNK func_00209670(void *, void *);              /* extern */
M2C_UNK func_0027A600(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0027A770();                            /* extern */
M2C_UNK func_00908FC0();                            /* extern */
extern char D_00397C20[];
extern void *D_0058E5B4;
extern char D_0058E7F0[];

void func_00917A30(void) {
    M2C_UNK *var_s0;
    u32 var_s1;
    void *temp_a0;

    var_s1 = 1;
    var_s0 = ((void *)D_0058E7F0);
    M2C_FIELD(D_0058E5B4, s8 *, 0x2C) = 0;
    do {
        M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s8 *, 0x2C) = 0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), s8 *, 4) = 0;
        func_001A58E0(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), 0);
        func_001AAF40(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), 0);
        func_001AAF30(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), ((void *)D_00397C20), 5);
        func_0027A600(var_s0, 0);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), s8 *, 0x209) = 0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), s8 *, 0x20B) = 0;
        M2C_FIELD(var_s0, s32 *, 0x90) = 0;
        M2C_FIELD(var_s0, s32 *, 0x94) = 0;
        M2C_FIELD(var_s0, s32 *, 0x98) = 0;
        M2C_FIELD(var_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(var_s0, s32 *, 0xE4) = 0;
        if (M2C_FIELD(var_s0, u8 *, 0x66) == 0xFF) {
            M2C_FIELD(var_s0, u8 *, 0x66) = 0U;
        }
        temp_a0 = M2C_FIELD(var_s0, void **, 4);
        func_00209670(temp_a0, M2C_FIELD(temp_a0, void **, 0));
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17U);
    func_0027A770();
    func_00908FC0();
    func_001AFD20();
}
