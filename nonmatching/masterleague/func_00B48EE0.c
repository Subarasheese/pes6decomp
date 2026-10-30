/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B48EE0(void) {
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u32 temp_v0;
    u32 var_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_s0;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        var_s4 = 0;
        var_s2 = temp_v0;
        var_s1 = 0;
        do {
            func_00957070(M2C_FIELD(var_s2, s32 *, 0x314));
            var_s3 = 0;
            var_s0 = temp_v0 + var_s1;
loop_3:
            func_00973460(M2C_FIELD(var_s0, s32 *, 0x114));
            var_s3 += 1;
            var_s0 += 0x80;
            if (var_s3 < 2) {
                goto loop_3;
            }
            var_s4 += 1;
            var_s2 += 4;
            var_s1 += 4;
        } while (var_s4 < 0x20);
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x3A4));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x3A8));
        temp_a0 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0 != NULL) {
            func_001D4E00(temp_a0);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x7E4));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x7E8));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x7EC));
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x7F0));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x7D8));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x7DC));
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3B9) >= 2) {
            func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x3AC));
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x7D4);
        if (temp_a0_2 != NULL) {
            func_001D4E00(temp_a0_2);
            M2C_FIELD(temp_v0, void **, 0x7D4) = NULL;
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x3B0));
    }
}
