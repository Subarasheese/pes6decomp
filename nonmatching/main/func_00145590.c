/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern void func_00149DB0(s32);
M2C_UNK func_00145CF0(s32);                         /* extern */
M2C_UNK func_00146C70(M2C_UNK *, void *);           /* extern */
extern char D_003C69D0[];
extern s32 D_003E7448;
extern M2C_UNK *D_00507880;
extern char D_00507884[];
extern char D_00507A88[];
extern char D_00507A8C[];

s32 func_00145590(void *arg0) {
    M2C_UNK **temp_v1;
    M2C_UNK *var_a0;
    M2C_UNK *var_s1;
    s32 temp_s2;

    var_s1 = NULL;
    temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_s2 != 0) {
        if (D_003E7448 != 0) {
            func_0012AD50((*(s32 *)D_00507A8C));
        }
        func_00149DB0(temp_s2);
        if (D_003E7448 != 0) {
            func_0012ADE0((*(s32 *)D_00507A8C));
        }
        if (D_003E7448 != 0) {
            func_0012AD50((*(s32 *)D_00507A8C));
        }
        func_00145CF0(temp_s2);
        if (D_003E7448 != 0) {
            func_0012ADE0((*(s32 *)D_00507A8C));
        }
        if (D_003E7448 != 0) {
            func_0012AD50((*(s32 *)D_00507A88));
        }
        temp_v1 = ((void *)D_00507884) + ((temp_s2 & 0x7F) * 4);
        var_a0 = *temp_v1;
        if (var_a0 != NULL) {
loop_9:
            if (M2C_FIELD(var_a0, s32 *, 8) != arg0) {
                var_s1 = var_a0;
                var_a0 = M2C_FIELD(var_a0, M2C_UNK **, 0);
                if (var_a0 != NULL) {
                    goto loop_9;
                }
            }
        }
        if (var_a0 == NULL) {
            if (D_003E7448 != 0) {
                func_0012ADE0((*(s32 *)D_00507A88));
            }
            return 1;
        }
        if (var_s1 == NULL) {
            *temp_v1 = *var_a0;
        } else {
            *var_s1 = *var_a0;
        }
        *var_a0 = D_00507880;
        D_00507880 = var_a0;
        if (D_003E7448 != 0) {
            func_0012ADE0((*(s32 *)D_00507A88));
        }
        return 0;
    }
    func_00146C70(((void *)D_003C69D0), arg0);
    return 1;
}
