/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC50(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0082C0A0(s32);                         /* extern */
M2C_UNK func_0085F240(s32 *);                       /* extern */
M2C_UNK func_00866740(s32 **, M2C_UNK *, M2C_UNK *); /* extern */
s32 *func_00D0BAF0();                               /* extern */
extern char D_008886E0[];
extern s32 *D_008A4398;
extern char D_008A43B8[];
extern char D_008A43C0[];
extern char D_008A43C8[];
extern char D_008A43D0[];
extern char D_008A4BC0[];
extern char D_008A5F70[];
extern M2C_UNK func_00824C30;
extern M2C_UNK func_00824C90;
extern M2C_UNK func_00824DD0;
extern M2C_UNK func_0082CA90;
extern M2C_UNK func_0082CE10;

s32 func_0082C130(void) {
    s32 *temp_v0_2;
    s32 temp_v0;
    s32 var_a0;
    void *temp_v0_3;

    if ((*(s32 *)D_008A43C8) != 1) {
        if (((*(s32 *)D_008A43B8) != 0) || ((*(s32 *)D_008A43C0) == 1)) {
            return 4;
        }
        temp_v0 = func_001BBEC0(&func_00824DD0, &func_00824C90, &func_00824C30, 0, 0, ((void *)D_008886E0));
        (*(s32 *)D_008A43B8) = temp_v0;
        if (temp_v0 == 0) {
            return 1;
        }
        func_001BBC50(temp_v0);
        (*(s32 *)D_008A43C8) = 1;
        (*(s32 *)D_008A43C0) = 1;
        (*(s32 *)D_008A43D0) = 0;
        D_008A4398 = NULL;
        temp_v0_2 = func_00D0BAF0();
        func_001C48E8(temp_v0_2, 0, 0x16248);
        var_a0 = 0;
        do {
            temp_v0_3 = ((void *)D_008A5F70) + (var_a0 * 4);
            var_a0 += 1;
            M2C_FIELD(temp_v0_3, s32 *, 0x3744) = 0;
        } while (var_a0 < 0x64);
        func_0082C0A0(var_a0);
        func_001C48E8(((void *)D_008A4BC0), 0, 0x410);
        (*(s32 *)D_008A4BC0) = 1;
        D_008A4398 = temp_v0_2;
        func_00866740(&D_008A4398, &func_0082CE10, &func_0082CA90);
        func_0085F240(D_008A4398);
        goto block_9;
    }
block_9:
    return 4;
}
