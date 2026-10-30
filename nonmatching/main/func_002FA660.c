/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_001D6C80(s32, s32);
extern void func_001DF820(void *, s32);
extern void func_001DEF30(void *, s8);
extern void func_001DF4F0(void *, s8);
extern s32 func_001D6D30(s32, s32);
extern void * func_002F96F0(void *, u32);
M2C_UNK func_001B6E40(void *, s32);                 /* extern */
M2C_UNK func_001B6EE0(void *);                      /* extern */

void func_002FA660(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 (*temp_v1)(s32);
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s2;
    s32 var_s4;
    void *temp_s1;
    void *temp_v0;
    void *var_s0;

    var_s4 = 0;
    if (arg3 > 0) {
        var_s0 = arg2;
        do {
            temp_v0 = func_002F96F0(arg0, M2C_FIELD(var_s0, u32 *, 0));
            if (temp_v0 != NULL) {
                temp_s3 = M2C_FIELD(var_s0, s32 *, 8);
                temp_v1 = M2C_FIELD(var_s0, s32 (**)(s32), 4);
                var_s2 = func_001F08B0(func_001D6D30(arg1, temp_s3));
                if (temp_v1 == NULL) {

                } else {
                    var_s2 = temp_v1(var_s2);
                }
                if (temp_v0 != NULL) {
                    temp_s1 = M2C_FIELD(temp_v0, void **, 0xC);
                    temp_s3_2 = func_001D6C80(arg1, temp_s3);
                    if (var_s2 != 0) {
                        func_001DF820(temp_s1, var_s2);
                    }
                    func_001B6EE0(temp_s1);
                    func_001B6E40(temp_s1, temp_s3_2);
                    func_001DEF30(temp_s1, 3);
                    func_001DF4F0(temp_s1, 1);
                }
            }
            var_s4 += 1;
            var_s0 += 0xC;
        } while (var_s4 < arg3);
    }
}
