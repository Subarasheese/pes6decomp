/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0084E960(void);
extern void func_0084E450(void);
extern int func_002DCA50(void);
M2C_UNK func_0084A5A0();                            /* extern */
s32 func_0084CD20(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0084D4F0();                                /* extern */
M2C_UNK func_0084F8A0(M2C_UNK);                     /* extern */
M2C_UNK func_00852750(s64);                         /* extern */
extern s32 D_003EA2E0;
extern char D_008B144D[];
extern char D_008B14E2[];
extern char D_008B14E3[];

void func_0084E330(void) {
    s32 temp_s0;
    s64 var_a0;
    s64 var_a0_2;

    temp_s0 = func_0084CD20(-1, ((void *)D_008B14E2));
    func_0084F8A0(0);
    if (D_003EA2E0 != 0) {
        D_003EA2E0 = 0;
        func_0084A5A0();
    }
    if (func_002DCA50() != 0) {
        if (temp_s0 != 0) {
            if (func_0084CD20(-1, ((void *)D_008B14E3)) != 0) {
                func_0084E960();
            }
        }
        if ((*(s8 *)D_008B144D) == 4) {
            var_a0 = 7;
        } else {
            var_a0 = (s64) (4 << 0x38) >> 0x38;
            (*(s8 *)D_008B144D) = 4;
        }
        func_00852750(var_a0);
    } else if (func_0084D4F0() != 0) {
        if ((*(s8 *)D_008B144D) == 4) {
            var_a0_2 = 7;
        } else {
            var_a0_2 = (s64) (4 << 0x38) >> 0x38;
            (*(s8 *)D_008B144D) = 4;
        }
        func_00852750(var_a0_2);
        if (temp_s0 != 0) {
            func_0084E960();
        }
    }
    func_0084E450();
}
