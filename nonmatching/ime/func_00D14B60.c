/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_001D6E70(s32, s32, s32);
extern void func_001DEF30(void *, s8);
extern void func_001D6E40(void *);
extern void *D_00D393D4;
extern char D_00D3957C[];

s32 func_00D14B60(s32 arg0) {
    s32 temp_v0;

    if (arg0 == 0) {
        if (D_00D393D4 != NULL) {
            func_001D6E40(D_00D393D4);
        }
        D_00D393D4 = NULL;
        return 0;
    }
    temp_v0 = func_001F08B0(arg0);
    if (temp_v0 != 0) {
        if (D_00D393D4 != NULL) {
            func_001D6E40(D_00D393D4);
        }
        D_00D393D4 = func_001D6E70((*(s32 *)D_00D3957C), 0x62, temp_v0);
    }
    func_001DEF30(M2C_FIELD(D_00D393D4, void **, 0xC), 3);
    return 0;
}
