/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_002F4E10(void *);
extern u32 func_00B77020(void);
extern void func_001D67B0(void *);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_00B76FC0(void **);                     /* extern */

void func_00B73570(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x284);
            if (temp_a0 != 0) {
                func_00973460(temp_a0);
            }
            temp_a0_2 = *M2C_FIELD(var_s0, void ***, 0x408);
            if (temp_a0_2 != NULL) {
                func_001D67B0(temp_a0_2);
            }
            temp_a0_3 = *M2C_FIELD(var_s0, void ***, 0x488);
            if (temp_a0_3 != NULL) {
                func_001D67B0(temp_a0_3);
            }
            func_00B76FC0(M2C_FIELD(var_s0, void ***, 0x408));
            func_00B76FC0(M2C_FIELD(var_s0, void ***, 0x488));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0x384);
        if (temp_a0_4 != NULL) {
            func_001B9C60(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0x38C);
        if (temp_a0_5 != NULL) {
            func_001F2810(temp_a0_5);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x400));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x404));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x62C));
        temp_a0_6 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_6 != NULL) {
            func_001D4E00(temp_a0_6);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
