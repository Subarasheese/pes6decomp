/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001540B0(void);
extern void func_001540D0(void);
extern void func_00153FA0(void *);
extern char D_005E3C9C[];
extern void *D_005E3CA0;

void func_002CB780(void) {
    s32 var_s2;
    void *temp_s1;

    temp_s1 = D_005E3CA0;
    if ((*(s32 *)D_005E3C9C) != 0) {
        var_s2 = 1;
        do {
            func_001540B0();
            var_s2 += 1;
        } while (var_s2 < 0x1C);
        func_001540D0();
        D_005E3CA0 = M2C_FIELD(temp_s1, void **, 0x74);
        func_00153FA0(temp_s1);
        (*(s32 *)D_005E3C9C) -= 1;
    }
}
