/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278C20(int);
extern void func_001AAF40(void *, signed char);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BA97D0();                            /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern void *D_0058E5B4;
extern char D_0058E5C6[];
extern char D_0058E5C8[];

void func_00B3C7D0(void) {
    s32 var_a0;
    s32 var_s0;
    void *temp_s1;

    (*(s8 *)D_0058E5C6) = 0xE0;
    (*(s16 *)D_0058E5C8) = 0;
    func_00209A00(D_0058E5B4, 0x1BF, 0);
    var_s0 = 1;
    M2C_FIELD(D_0058E5B4, s8 *, 0x50) = 0;
    do {
        if (var_s0 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s0 % 23;
        }
        temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00BDB8B0(temp_s1) != 0) {
            M2C_FIELD(temp_s1, s8 *, 0x16) = 0xFD;
            M2C_FIELD(temp_s1, s16 *, 0x18) = 0;
            M2C_FIELD(temp_s1, s8 *, 0x66) = 0;
            func_001AAF40(M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), void **, 0), 0);
            func_00209A00(M2C_FIELD(temp_s1, void **, 4), 0x1BF, 0);
        }
        var_s0 += 1;
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s8 *, 0x50) = 0;
    } while (var_s0 < 0x17);
    func_00BA97D0();
    func_00278C20(0);
}
