/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
void *func_00165B00();                              /* extern */
M2C_UNK func_00167C98(void *, void *);              /* extern */
s32 func_0016AC40(void *);                          /* extern */
M2C_UNK func_0016AF10(void *);                      /* extern */
extern char D_005BFCA8[];
extern char D_005BFE2C[];

void func_00163EE0(void *arg0) {
    void *temp_s1;
    void *temp_s3;
    void *var_s0;

    temp_s3 = func_00165B00();
    if (M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
        if (func_00163C30(arg0, (*(s32 *)D_005BFE2C)) != 0) {
            temp_s1 = arg0 + 0x840;
            if (M2C_FIELD(temp_s1, void **, 8) != temp_s1) {
                var_s0 = M2C_FIELD(temp_s1, void **, 8);
loop_4:
                func_00163EE0(M2C_FIELD(var_s0, void **, 0x10));
                if (M2C_FIELD(var_s0, void **, 8) != temp_s1) {
                    var_s0 = M2C_FIELD(var_s0, void **, 8);
                    goto loop_4;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        if ((temp_s3 == NULL) || (func_00163C30(temp_s3, (*(s32 *)D_005BFCA8)) == 0)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
        } else {
            if (arg0 != temp_s3) {
                M2C_FIELD(arg0, s32 *, 0xB4) = 0;
                func_00167C98(temp_s3, arg0);
            } else {
                M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            }
            if (func_0016AC40(arg0) != 0) {
                func_0016AF10(arg0);
            }
        }
    }
}
