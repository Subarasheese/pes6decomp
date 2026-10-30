/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F18D0(void *, void *);
extern void func_001DF460(void *, void *);
void *func_008C5050(M2C_UNK, s8);                   /* extern */

void func_008D31A0(void *arg0, s32 arg1, s8 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s8 var_a2;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0;

    var_a2 = arg2;
    if (arg0 != NULL) {
        temp_s1 = arg1 & 0xFF;
        if (temp_s1 < (s32) M2C_FIELD(arg0, u8 *, 2)) {
            if (var_a2 != 0) {
                var_a2 = 1;
            }
            temp_s0 = arg1 & 0xFF;
            M2C_FIELD((temp_s0 + arg0), s8 *, 3) = var_a2;
            if (var_a2 != 0) {
                if (temp_s1 != M2C_FIELD(arg0, u8 *, 1)) {
                    var_v0 = func_008C5050(1, var_a2);
                } else {
                    var_v0 = func_008C5050(0, var_a2);
                }
            } else {
                var_v0 = func_008C5050(2, var_a2);
            }
            temp_s4 = temp_s0 * 4;
            temp_v1 = M2C_FIELD((temp_s4 + arg0), void **, 0x5C);
            if (temp_v1 != NULL) {
                func_001DF460(M2C_FIELD(temp_v1, void **, 0xC), var_v0);
            }
            temp_a0 = M2C_FIELD((temp_s4 + arg0), void **, 0x20);
            if (temp_a0 != NULL) {
                func_001F18D0(temp_a0, var_v0);
            }
            if (temp_s1 < 4) {
                temp_v1_2 = M2C_FIELD(((temp_s0 * 0xC) + arg0), void **, 0x8C);
                if (temp_v1_2 != NULL) {
                    func_001DF460(M2C_FIELD(temp_v1_2, void **, 0xC), var_v0);
                }
            }
        }
    }
}
