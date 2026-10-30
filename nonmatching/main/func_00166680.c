/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00161508(void);
extern void func_0015B478(void *);
extern char D_0037AC98[];
extern char D_003C8B60[];

void func_00166680(void *arg0, s16 arg1) {
    s16 var_v0;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8B60));
        return;
    }
    if (arg1 < -0xF) {
        var_v0 = -0xF;
        goto block_9;
    }
    if (arg1 < 0x10) {
        M2C_FIELD(arg0, s16 *, 0x46) = arg1;
    } else {
        var_v0 = 0xF;
block_9:
        M2C_FIELD(arg0, s16 *, 0x46) = var_v0;
    }
    if ((*(s32 *)D_0037AC98) != 0) {
        func_00161508();
        return;
    }
    func_00161508();
}
