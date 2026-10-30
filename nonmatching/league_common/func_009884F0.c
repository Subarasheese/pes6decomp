/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001F2810(void *);
extern u32 func_00989410(void);
extern void func_001B9C60(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971470(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_009884F0(void) {
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            func_00973460(M2C_FIELD(var_s1, s32 *, 0x1D0));
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x10);
        func_00971470(M2C_FIELD(temp_v0, s32 *, 0x490));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 4));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x250));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x254));
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s2_2, s32 *, 0x210));
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 0x10);
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
