/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
extern int func_00309420(void);
extern u32 func_0017A670(s32);
M2C_UNK func_001EDD90(void *);                      /* extern */
M2C_UNK func_002CE4B0(u16);                         /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern void *D_008E7880;
extern void *D_008E78A0;

void func_008C59B0(void) {
    s32 var_s4;
    s32 var_s5;
    void **var_s0;
    void **var_s1;
    void **var_s2;
    void **var_s3;

    var_s5 = 0;
    var_s3 = &D_008E7880;
    var_s2 = &D_008E78A0;
    do {
        var_s4 = 0;
        var_s1 = var_s3;
        var_s0 = var_s2;
loop_2:
        func_001EDBA0(*var_s0, *var_s1);
        *var_s1 = NULL;
        func_001EDD90(*var_s0);
        var_s4 += 1;
        *var_s0 = NULL;
        var_s1 += 4;
        var_s0 += 4;
        if (var_s4 < 4) {
            goto loop_2;
        }
        var_s5 += 1;
        var_s3 += 0x10;
        var_s2 += 0x10;
    } while (var_s5 < 2);
    if ((func_00309420() == 1) || (func_0017A670(0) == 4)) {
        func_002CE4B0((*(u16 *)D_00591BB0));
        func_002CE4B0((*(u16 *)D_00591BB2));
    }
}
