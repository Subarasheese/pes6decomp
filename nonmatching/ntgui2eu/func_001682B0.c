/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165180(void *);                      /* extern */
M2C_UNK func_00167C38(void *, s32);                 /* extern */
M2C_UNK func_001683F8();                            /* extern */
M2C_UNK func_0016A1B0(s32, void *, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_0016A870(s32);                         /* extern */
void *func_0016A948(s32);                           /* extern */

void func_001682B0(void *arg0) {
    s32 temp_s3;
    u16 temp_s1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;

    temp_s3 = arg0 + 0x9D0;
    func_001683F8();
    func_0016A870(temp_s3);
    if (M2C_FIELD(arg0, s32 *, 0x5F8) == 0) {
        func_00165180(arg0);
        return;
    }
loop_14:
    temp_v0 = func_0016A948(temp_s3);
    if (temp_v0 != NULL) {
        temp_s1 = M2C_FIELD(temp_v0, u16 *, 0);
        switch (temp_s1) {                          /* irregular */
        case 0:
            break;
        case 15:
            func_00167C38(arg0, M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), s32 *, 0xC8));
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), s32 *, 0xC8) = 0;
            temp_a1 = M2C_FIELD(temp_v0, void **, 0x20);
            func_0016A1B0(M2C_FIELD(temp_a1, s32 *, 0x57C), temp_a1, 0, (s32) temp_s1, M2C_FIELD(temp_v0, void **, 0x20));
            break;
        case 14:
            temp_a1_2 = M2C_FIELD(temp_v0, void **, 0x20);
            func_0016A1B0(M2C_FIELD(temp_a1_2, s32 *, 0x578), temp_a1_2, 0, (s32) temp_s1, M2C_FIELD(temp_v0, void **, 0x20));
            break;
        default:
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 (**)(void *, void *, s32, s32), 0xBC)(arg0, temp_v0, -(M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x5D4)), -(M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0x5D4))) == 0) {
                func_00165180(arg0);
            }
            break;
        }
        goto loop_14;
    }
}
