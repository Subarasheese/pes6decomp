/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B177C0(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00955FB0();                            /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_0095A980();                            /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B194A0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_s1;
    s32 var_s1_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    void *temp_a0_7;
    void *temp_s2;

    temp_v0 = func_00B177C0();
    if (temp_v0 != 0) {
        temp_v0_2 = func_00B177C0();
        if (temp_v0_2 != 0) {
            temp_a0 = M2C_FIELD(temp_v0_2, s32 *, 0x128);
            if (temp_a0 != 0) {
                func_001EDD90(temp_a0);
            }
        }
        temp_v0_3 = func_00B177C0();
        if (temp_v0_3 != 0) {
            temp_a0_2 = M2C_FIELD(temp_v0_3, s32 *, 0x178);
            if (temp_a0_2 != 0) {
                func_001EDD90(temp_a0_2);
            }
        }
        temp_v0_4 = func_00B177C0();
        if (temp_v0_4 != 0) {
            temp_a0_3 = M2C_FIELD(temp_v0_4, s32 *, 0x3A8);
            if (temp_a0_3 != 0) {
                func_00973460(temp_a0_3);
            }
        }
        var_s1 = 0;
        do {
            temp_s2 = temp_v0 + ((var_s1 & 0xFF) * 0x104);
            temp_a0_4 = M2C_FIELD(temp_s2, s32 *, 0x4D4);
            if (temp_a0_4 != 0) {
                func_001EDD90(temp_a0_4);
                M2C_FIELD(temp_s2, s32 *, 0x4D4) = 0;
            }
            temp_a0_5 = M2C_FIELD(temp_s2, s32 *, 0x4D8);
            if (temp_a0_5 != 0) {
                func_001EDD90(temp_a0_5);
                M2C_FIELD(temp_s2, s32 *, 0x4D8) = 0;
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0xA);
        var_s1_2 = 0;
        do {
            temp_a0_6 = M2C_FIELD((temp_v0 + ((var_s1_2 & 0xFF) * 4)), s32 *, 0x15C);
            if (temp_a0_6 != 0) {
                func_00957070(temp_a0_6);
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFF;
        } while (var_s1_2 < 2);
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0x68);
        if (temp_a0_7 != NULL) {
            func_001D4E00(temp_a0_7);
            M2C_FIELD(temp_v0, void **, 0x68) = NULL;
        }
        func_0095A980();
        func_00955FB0();
    }
}
