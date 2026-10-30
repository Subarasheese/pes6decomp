/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F18D0(void *, void *);
extern void func_001DF460(void *, void *);
M2C_UNK func_001D7A20(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B9B00(s32, s32, s32);               /* extern */
void *func_008C5050(M2C_UNK);                       /* extern */

void func_008D32D0(void *arg0, s8 arg1) {
    f32 sp70;
    f32 sp74;
    f32 temp_f1;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s4;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 1) = arg1;
        temp_s2 = arg1 & 0xFF;
        if (temp_s2 >= (s32) M2C_FIELD(arg0, u8 *, 2)) {
            func_008B9AB0(M2C_FIELD(arg0, s32 *, 0xB4), 0);
        } else {
            func_008B9AB0(M2C_FIELD(arg0, s32 *, 0xB4), 1);
            func_001D7A20(M2C_FIELD(arg0, s32 *, 0x54), &sp70, 0x55);
            temp_f1 = sp74 + (f32) (temp_s2 * M2C_FIELD(arg0, u8 *, 0xD));
            sp74 = temp_f1;
            func_008B9B00(M2C_FIELD(arg0, s32 *, 0xB4), (s32) sp70, (s32) temp_f1);
        }
        var_s4 = 0;
        if ((s32) M2C_FIELD(arg0, u8 *, 2) > 0) {
            do {
                if (M2C_FIELD((arg0 + var_s4), u8 *, 3) != 0) {
                    if (var_s4 == temp_s2) {
                        var_s3 = func_008C5050(0);
                    } else {
                        var_s3 = func_008C5050(1);
                    }
                } else {
                    var_s3 = func_008C5050(2);
                }
                temp_s1 = var_s4 & 0xFF;
                temp_s0 = arg0 + (temp_s1 * 4);
                temp_v1 = M2C_FIELD(temp_s0, void **, 0x5C);
                if (temp_v1 != NULL) {
                    func_001DF460(M2C_FIELD(temp_v1, void **, 0xC), var_s3);
                }
                temp_a0 = M2C_FIELD(temp_s0, void **, 0x20);
                if (temp_a0 != NULL) {
                    func_001F18D0(temp_a0, var_s3);
                }
                if ((var_s4 & 0xFF) < 4) {
                    temp_v1_2 = M2C_FIELD((arg0 + (temp_s1 * 0xC)), void **, 0x8C);
                    if (temp_v1_2 != NULL) {
                        func_001DF460(M2C_FIELD(temp_v1_2, void **, 0xC), var_s3);
                    }
                }
                var_s4 += 1;
            } while (var_s4 < (s32) M2C_FIELD(arg0, u8 *, 2));
        }
    }
}
