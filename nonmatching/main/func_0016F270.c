/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016E9E0(void *, void *);
extern void func_0016EB80(void);
extern void func_0016D138(void);
M2C_UNK func_001610B0(M2C_UNK);                     /* extern */
M2C_UNK func_0016CBB8(s32);                         /* extern */
M2C_UNK func_0016F358(void *);                      /* extern */
extern char D_003CA6F8[];

void func_0016F270(void *arg0) {
    s32 temp_a0;
    s32 var_s2;

    var_s2 = 0;
    if (arg0 == NULL) {
        func_0016E9E0(arg0, ((void *)D_003CA6F8));
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 2) >= 2U) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a0 != 0) {
            func_0016CBB8(temp_a0);
        }
loop_7:
        func_0016D138();
        func_0016EB80();
        func_0016F358(arg0);
        if ((s8) M2C_FIELD(arg0, u8 *, 2) == 2) {
            var_s2 += 1;
            if (var_s2 > 0x9FFFF) {
                func_001610B0(0x3CA758);
            } else {
                goto loop_7;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
}
