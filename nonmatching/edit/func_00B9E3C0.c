/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B9C490();                              /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4400(s32, M2C_UNK);                /* extern */
M2C_UNK func_00BF58F0();                            /* extern */
M2C_UNK func_00BF7990(M2C_UNK);                     /* extern */
extern char D_00CE40D8[];
extern char D_00CE40DC[];

void func_00B9E3C0(void) {
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_00B9C490();
    (*(s32 *)D_00CE40DC) = 0;
    (*(s32 *)D_00CE40D8) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x51;
    M2C_FIELD(temp_v0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
    func_00BF7990(0x51);
    func_00BF58F0();
    var_s0 = 0;
    do {
        func_00BF4400(var_s0, 0xC);
        var_s0 += 1;
    } while (var_s0 < 2);
    func_00BC7390(0xF);
}
