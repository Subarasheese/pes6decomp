/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002E33D0(s32);                         /* extern */

void func_009A1E90(void *arg0) {
    s32 temp_a0_6;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_7;
    void *var_s0;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_a0_2 != NULL) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(arg0, void **, 0x20) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    temp_a0_3 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_a0_3 != NULL) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD(arg0, void **, 0x44) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    temp_a0_4 = M2C_FIELD(arg0, void **, 0x64);
    if (temp_a0_4 != NULL) {
        func_001D7F10(temp_a0_4);
        M2C_FIELD(arg0, void **, 0x64) = NULL;
    }
    temp_a0_5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_a0_5 != NULL) {
        func_001D7F10(temp_a0_5);
        M2C_FIELD(arg0, void **, 0x80) = NULL;
    }
    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a0_6 = M2C_FIELD(var_s0, s32 *, 0x74);
        if (temp_a0_6 != 0) {
            func_002E33D0(temp_a0_6);
            M2C_FIELD(var_s0, s32 *, 0x74) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    temp_a0_7 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0_7 != NULL) {
        func_001D4E00(temp_a0_7);
        M2C_FIELD(arg0, void **, 0) = NULL;
    }
}
