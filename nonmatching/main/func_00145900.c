/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0014A6A0(void);
extern void func_0014A540(void);
extern void func_00146280(void);
extern void func_00146BD0(void);
M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00146650();                            /* extern */
M2C_UNK func_00146C70(M2C_UNK *, s32, s32);         /* extern */
extern char D_003C6A40[];
extern char D_00503080[];

void func_00145900(void) {
    M2C_UNK *var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = ((void *)D_00503080);
loop_5:
    if (var_s2 < 0x80) {
        if (M2C_FIELD(var_s1, void **, 0x4804) != NULL) {
            do {
                func_00146C70(((void *)D_003C6A40), M2C_FIELD(M2C_FIELD(var_s1, void **, 0x4804), s32 *, 4), M2C_FIELD(M2C_FIELD(var_s1, void **, 0x4804), s32 *, 8));
                func_00145590(M2C_FIELD(M2C_FIELD(var_s1, void **, 0x4804), s32 *, 8));
            } while (M2C_FIELD(var_s1, void **, 0x4804) != NULL);
        }
        var_s1 += 4;
        var_s2 += 1;
        goto loop_5;
    }
    func_00146BD0();
    func_0014A6A0();
    func_0014A540();
    func_00146280();
    func_00146650();
}
