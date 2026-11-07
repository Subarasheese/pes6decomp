/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_001888A0(void);
extern void func_001873A0(int);
extern void func_0019E9C0(void);
extern void func_0019EB50(s32);
s32 func_001454C0(u16);                             /* extern */
M2C_UNK func_00145750(s32);                         /* extern */
s32 func_0014AEE0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00182FC0();                            /* extern */
extern s32 D_003E9888;
extern char D_0051FF54[];
extern void *D_0051FFAC;

void func_001A1650(void) {
    s32 temp_a0;
    s32 temp_v0;

    func_00182FC0();
    func_001873A0(1);
    if (func_001888A0() != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(D_0051FFAC, void **, 4), s32 *, 0x10);
        if (temp_a0 != 0) {
            func_0019EB50(temp_a0);
        }
        if (((*(u16 *)D_0051FF54) != 0) && (func_001454C0((*(u16 *)D_0051FF54)) != 0)) {
            temp_v0 = func_0014AEE0((*(u16 *)D_0051FF54), 0x2752);
            D_003E9888 = temp_v0;
            func_00145750(temp_v0);
            func_0019E9C0();
        }
    }
}
