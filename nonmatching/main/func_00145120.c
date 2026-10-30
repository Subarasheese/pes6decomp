/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00139150(void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_00145200(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_00502F8C[];
extern M2C_UNK *D_00503028;
extern char D_0050303C[];
extern char D_00503040[];
extern char D_00503044[];

void func_00145120(void) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_v0;
    void *var_s0;

loop_1:
    var_s0 = NULL;
    WaitSema((*(s32 *)D_00503040));
    WaitSema((*(s32 *)D_0050303C));
    temp_a1 = M2C_FIELD(((void *)D_00502F8C), M2C_UNK **, 0);
    (*(s32 *)D_00503044) += 1;
    if (temp_a1 != NULL) {
        if (M2C_FIELD(temp_a1, u8 *, 7) != 0) {
            var_s0 = M2C_FIELD(temp_a1, void **, 8);
            M2C_FIELD(temp_a1, u8 *, 7) = 0U;
        }
        temp_v0 = M2C_FIELD(M2C_FIELD(((void *)D_00502F8C), M2C_UNK **, 0), M2C_UNK **, 0);
        M2C_FIELD(((void *)D_00502F8C), M2C_UNK **, 0) = temp_v0;
        if (temp_v0 == NULL) {
            M2C_FIELD(((void *)D_00502F8C), s32 *, 4) = 0;
        }
        M2C_FIELD(temp_a1, M2C_UNK **, 0) = D_00503028;
        D_00503028 = temp_a1;
        if (M2C_FIELD(((void *)D_00502F8C), M2C_UNK **, 0) != NULL) {
            func_00145200(((void *)D_00502F8C), temp_a1);
        }
    }
    func_00105380((*(s32 *)D_0050303C));
    if (var_s0 == NULL) {
        goto loop_1;
    }
    func_00139150(var_s0);
    goto loop_1;
}
