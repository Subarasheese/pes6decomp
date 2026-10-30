/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182AD0(void);
extern void func_001864B0(s32);
extern void func_00181C00(void);
M2C_UNK func_00181C90();                            /* extern */
s32 *func_0019F170(s32 *);                          /* extern */
M2C_UNK func_0019F7E0(u32 *, s16);                  /* extern */
extern s32 *D_0051FF7C;
extern char D_00520338[];
extern char D_0052033A[];
extern char D_0052033C[];
extern char D_0052033E[];

s32 func_0019F4D0(void) {
    s32 *temp_s0;
    s32 *var_s1;
    void *temp_v1;

    temp_s0 = D_0051FF7C;
    temp_v1 = M2C_FIELD(&temp_s0[(*(s16 *)D_00520338)], void **, 4);
    if (!((*(s16 *)D_0052033C) & 1)) {
        var_s1 = temp_v1 + 0x48;
        func_00181C90();
        func_001864B0(0x21CDE);
        func_00182AD0();
        func_00181C00();
loop_2:
        if (*var_s1 != 0xFF000001) {
            var_s1 = func_0019F170(var_s1);
            goto loop_2;
        }
        (*(s16 *)D_0052033E) = 0;
        (*(s16 *)D_0052033C) += 1;
    }
    func_0019F7E0(temp_v1 + 4, (*(s16 *)D_0052033E));
    (*(s16 *)D_0052033E) += 1;
    if ((u32) M2C_FIELD(temp_v1, u32 *, 4) < (u32) (*(s16 *)D_0052033E)) {
        (*(s16 *)D_0052033C) = 0;
        (*(s16 *)D_00520338) += 1;
        if ((*(s16 *)D_00520338) >= *temp_s0) {
            (*(s16 *)D_00520338) = 0;
        }
        if ((*(s16 *)D_00520338) == (*(s16 *)D_0052033A)) {
            (*(s16 *)D_0052033A) = -1;
        }
    }
    return ~(*(s16 *)D_0052033A) == 0;
}
