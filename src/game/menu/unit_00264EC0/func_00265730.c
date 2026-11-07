/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(void *);                      /* extern */
void *func_001BB370(s32);                           /* extern */
s32 func_001BB3E0(s32);                             /* extern */
s32 func_001BB4D0(s32);                             /* extern */
s32 func_00256DC0(s32);                             /* extern */
M2C_UNK func_00256DE0(s32, void *);                 /* extern */
M2C_UNK func_00256E90(s32);                         /* extern */
M2C_UNK func_00265AC0(s32);                         /* extern */

void func_00265730(void *arg0) {
    s32 var_s1;
    void *temp_s0;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            var_s1 = func_001BB4D0(func_00256DC0(M2C_FIELD(arg0, s32 *, 0)));
            if (var_s1 != 0) {
                do {
                    temp_s0 = func_001BB370(var_s1);
                    var_s1 = func_001BB3E0(var_s1);
                    func_00265AC0(M2C_FIELD(temp_s0, s32 *, 0x18));
                    if (temp_s0 != NULL) {
                        func_00256DE0(M2C_FIELD(arg0, s32 *, 0), temp_s0);
                    }
                } while (var_s1 != 0);
            }
        }
        func_00256E90(M2C_FIELD(arg0, s32 *, 0));
        func_00153FA0(M2C_FIELD(arg0, void **, 4));
        func_00153FA0(arg0);
    }
}
