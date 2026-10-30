/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0012D4F0(s32, s32);
extern s32 func_0012D380(s32);
extern int func_0012D640(void);
extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern s32 func_0012D540(s32, u32);
s32 func_0012C200(s32, s32, u32);                   /* extern */
extern s32 D_003E7410;
extern s32 D_003E9794;

s32 func_0012D7A0(s32 arg0, u32 arg1) {
    s32 temp_s0;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s1;

    var_s1 = func_0012D640();
    var_s0 = 1;
    if (D_003E9794 >= 2) {
loop_1:
        if (var_s0 != var_s1) {
            if (func_0012D540(var_s0, arg1) != 0) {
                func_0012AD50(D_003E7410);
                temp_s4 = func_0012C200(var_s0, arg0, arg1);
                func_0012ADE0(D_003E7410);
                if (temp_s4 != 0) {
                    func_0012D4F0(var_s0, temp_s4);
                    return temp_s4;
                }
            }
            goto block_5;
        }
block_5:
        var_s0 += 1;
        if (var_s0 >= D_003E9794) {
            goto block_12;
        }
        goto loop_1;
    }
block_12:
    func_0012AD50(D_003E7410);
    if (func_0012D380(var_s1) == 0) {
        var_s1 = func_0012D640();
    }
    temp_s0 = func_0012C200(var_s1, arg0, arg1);
    func_0012ADE0(D_003E7410);
    func_0012D4F0(var_s1, temp_s0);
    return temp_s0;
}
