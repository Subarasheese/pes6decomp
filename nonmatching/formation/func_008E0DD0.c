/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D80C0(void *);                      /* extern */
M2C_UNK func_008E1660(void *);                      /* extern */
M2C_UNK func_008E1E50(void *, s32);                 /* extern */
extern char D_008EC410[];

void func_008E0DD0(void *arg0) {
    s32 var_a1;
    void *temp_v1;

    var_a1 = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = ((void *)D_008EC410);
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 2;
    do {
        temp_v1 = arg0 + var_a1;
        M2C_FIELD(temp_v1, s8 *, 9) = 0;
        var_a1 += 7;
        M2C_FIELD(temp_v1, s8 *, 0xA) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xB) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xC) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xD) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xE) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xF) = 0;
    } while (var_a1 < 0xE);
    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    func_008E1E50(arg0 + 0x18, var_a1);
    func_008D80C0(arg0 + 0x13C);
    func_008E1660(arg0 + 0xD4);
}
