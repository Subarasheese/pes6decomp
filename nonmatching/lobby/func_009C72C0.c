/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00935E70();                                /* extern */
M2C_UNK func_00935EF0(M2C_UNK);                     /* extern */
s32 func_00950BA0();                                /* extern */
s32 func_00965300(s32);                             /* extern */
u8 func_00965310();                                 /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009D8210(u8, s32);                     /* extern */
M2C_UNK func_009D88E0(u8, M2C_UNK *, s32);          /* extern */
extern void *D_00A7DD68;
extern M2C_UNK func_009C6D90;

void func_009C72C0(void) {
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    u8 temp_a0;
    void *temp_v0;

    if (D_00A7DD68 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A7DD68 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(D_00A7DD68, u8 *, 2) = func_00965310();
            func_009D88E0(M2C_FIELD(D_00A7DD68, u8 *, 2), &func_009C6D90, func_00950BA0() & 0xFF);
            temp_v0_2 = func_00935E70();
            if (temp_v0_2 != 0) {
                var_s1 = -1;
                var_s2 = 0;
loop_7:
                temp_a0 = M2C_FIELD(D_00A7DD68, u8 *, 2);
                if (var_s2 < (s32) temp_a0) {
                    if (temp_v0_2 == func_00965300(var_s2)) {
                        var_s1 = var_s2;
                    }
                    var_s2 += 1;
                    goto loop_7;
                }
                if (var_s1 >= 0) {
                    func_009D8210(temp_a0, var_s1);
                    M2C_FIELD(D_00A7DD68, s32 *, 4) = temp_v0_2;
                    M2C_FIELD(D_00A7DD68, s8 *, 0) = 2;
                }
                func_00935EF0(0);
            }
            func_0099C730(0x01FC0000);
        }
    }
}
