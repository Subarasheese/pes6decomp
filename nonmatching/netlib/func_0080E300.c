/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00270E10(void);
M2C_UNK func_0080CA80(void *, M2C_UNK *, s32);      /* extern */
extern char D_00591A90[];
extern char D_00591EF6[];
extern char D_00591EF7[];
extern char D_00591EFA[];
extern char D_00591EFB[];
extern char D_00591EFC[];

void func_0080E300(void) {
    s32 var_a2;
    void *temp_a0;

    var_a2 = 0;
    (*(s8 *)D_00591EFC) = 0;
    (*(s8 *)D_00591EF6) = 0;
    (*(s8 *)D_00591EF7) = 0;
    (*(s8 *)D_00591EFA) = 0;
    (*(s8 *)D_00591EFB) = 0;
    do {
        temp_a0 = ((void *)D_00591A90) + (var_a2 * 8);
        var_a2 += 1;
        M2C_FIELD(temp_a0, s8 *, 0xDF) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0x54) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0xDD) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0x52) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0xDE) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0x53) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0xE0) = 0xFF;
        M2C_FIELD(temp_a0, s8 *, 0x55) = 0xFF;
    } while (var_a2 < 7);
    func_0080CA80(temp_a0, ((void *)D_00591A90), var_a2);
    func_00270E10();
}
