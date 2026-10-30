/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
extern void func_001D67B0(void *);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_002E4F00(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B520F0(void) {
    s32 temp_a0;
    s32 temp_a0_5;
    s32 var_s2;
    s32 var_s2_2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s1_2;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0x284);
            if (temp_a0 != 0) {
                func_00973460(temp_a0);
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x20);
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x404);
        if (temp_a0_2 != NULL) {
            func_001B9C60(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0xBC4);
        if (temp_a0_3 != NULL) {
            func_001B9C60(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0x40C);
        if (temp_a0_4 != NULL) {
            func_001F2810(temp_a0_4);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0xD74));
        func_002E4F00(M2C_FIELD(temp_v0, s32 *, 0xD78));
        temp_a0_5 = M2C_FIELD(temp_v0, s32 *, 0x5E0);
        if (temp_a0_5 != 0) {
            func_00973460(temp_a0_5);
        }
        var_s2_2 = 0;
        var_s1_2 = temp_v0;
        do {
            temp_a0_6 = M2C_FIELD(var_s1_2, void **, 0x62C);
            if (temp_a0_6 != NULL) {
                func_001D67B0(temp_a0_6);
            }
            var_s2_2 += 1;
            var_s1_2 += 4;
        } while (var_s2_2 < 2);
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0xD0C));
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0xBD8);
        if (temp_a0_7 != NULL) {
            func_001D7F10(temp_a0_7);
        }
        temp_a0_8 = M2C_FIELD(temp_v0, void **, 0xBDC);
        if (temp_a0_8 != NULL) {
            func_001D7F10(temp_a0_8);
        }
        temp_a0_9 = M2C_FIELD(temp_v0, void **, 0xBD0);
        if (temp_a0_9 != NULL) {
            func_001D7F10(temp_a0_9);
        }
        temp_a0_10 = M2C_FIELD(temp_v0, void **, 0xBD4);
        if (temp_a0_10 != NULL) {
            func_001D7F10(temp_a0_10);
        }
        temp_a0_11 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_11 != NULL) {
            func_001D4E00(temp_a0_11);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
