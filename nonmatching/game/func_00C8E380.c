/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001D4E00(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
extern char D_00CCD570[];
extern void *D_00CCD888;
extern void *D_00CCD898;
extern void *D_00CCD89C;

void func_00C8E380(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    var_s1 = ((void *)D_00CCD570);
    do {
        func_002DF960(M2C_FIELD(var_s1, s32 *, 0xB4));
        func_002DF960(M2C_FIELD(var_s1, s32 *, 0xB8));
        func_002DC1D0(M2C_FIELD(var_s1, s32 *, 0x174));
        var_s2 = 0;
        var_s0 = var_s1;
loop_2:
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x180));
        var_s2 += 1;
        var_s0 += 4;
        if (var_s2 < 3) {
            goto loop_2;
        }
        func_001C48E8(var_s1, 0, 0x18C);
        var_s3 += 1;
        var_s1 += 0x18C;
    } while (var_s3 < 2);
    func_001D7F10(D_00CCD89C);
    D_00CCD89C = NULL;
    func_001D4E00(D_00CCD898);
    D_00CCD898 = NULL;
    func_001F1EA0(D_00CCD888);
    D_00CCD888 = NULL;
}
