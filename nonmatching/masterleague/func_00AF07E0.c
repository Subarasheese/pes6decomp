/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00226EF0(s32);
extern void func_00226BC0(s32);
extern void func_00226DE0(s32);
extern void func_00228030(s32);
extern void func_002279F0(s32);
extern void func_00226CD0(s32);
extern void func_00227AF0(s32);
extern void func_00227110(s32);
extern void func_00226AC0(s32);
extern void func_002278F0(s32);
extern void func_00227750(s32);
extern void func_002269C0(s32);
extern u8 func_00226E70(void);
extern void func_00227D10(s32);
extern void func_00228120(u8);
extern void func_00227220(s32);
M2C_UNK func_0095C700(u8);                          /* extern */
extern void *D_003EADC8;
extern char D_00B79890[];

void func_00AF07E0(void) {
    M2C_UNK *var_a1;
    s32 var_a2;
    void *var_s0;

    var_s0 = D_003EADC8;
    if (var_s0 != NULL) {
        func_00227220((s32) M2C_FIELD(var_s0, s16 *, 0x1B0));
        func_00228120((u8) M2C_FIELD(var_s0, s16 *, 0x1B2));
        func_00228030((s32) M2C_FIELD(var_s0, s16 *, 0x1B4));
        func_002269C0((s32) M2C_FIELD(var_s0, s16 *, 0x1B6));
        func_0095C700(M2C_FIELD(var_s0, u8 *, 0x1B8));
        func_00227D10((s32) M2C_FIELD(var_s0, s16 *, 0x1C2));
        func_002279F0((s32) M2C_FIELD(var_s0, s16 *, 0x1C6));
        func_00226EF0((s32) M2C_FIELD(var_s0, s16 *, 0x1BA));
        func_00226DE0((s32) M2C_FIELD(var_s0, s16 *, 0x1C0));
        func_00227AF0((s32) M2C_FIELD(var_s0, s16 *, 0x1C4));
        func_00227110((s32) M2C_FIELD(var_s0, s16 *, 0x1C8));
        func_00226CD0((s32) M2C_FIELD(var_s0, s16 *, 0x1CA));
        if (func_00226E70() == 0) {
            M2C_FIELD(var_s0, s16 *, 0x1BC) = 0;
        }
        func_00226BC0((s32) M2C_FIELD(var_s0, s16 *, 0x1BC));
        func_00226AC0((s32) M2C_FIELD(var_s0, s16 *, 0x1BE));
        func_002278F0((s32) M2C_FIELD(((M2C_FIELD(var_s0, s16 *, 0x1CC) * 2) + var_s0), s16 *, 0x186));
        func_00227750((s32) M2C_FIELD(var_s0, s16 *, 0x1CE));
        var_a2 = 0;
        var_a1 = ((void *)D_00B79890);
        do {
            var_a2 += 8;
            M2C_FIELD(var_a1, s16 *, 0) = (s16) M2C_FIELD(var_s0, s16 *, 0x1B0);
            M2C_FIELD(var_a1, s16 *, 2) = (s16) M2C_FIELD(var_s0, s16 *, 0x1B2);
            M2C_FIELD(var_a1, s16 *, 4) = (s16) M2C_FIELD(var_s0, s16 *, 0x1B4);
            M2C_FIELD(var_a1, s16 *, 6) = (s16) M2C_FIELD(var_s0, s16 *, 0x1B6);
            M2C_FIELD(var_a1, s16 *, 8) = (s16) M2C_FIELD(var_s0, s16 *, 0x1B8);
            M2C_FIELD(var_a1, s16 *, 0xA) = (s16) M2C_FIELD(var_s0, s16 *, 0x1BA);
            M2C_FIELD(var_a1, s16 *, 0xC) = (s16) M2C_FIELD(var_s0, s16 *, 0x1BC);
            M2C_FIELD(var_a1, s16 *, 0xE) = (s16) M2C_FIELD(var_s0, s16 *, 0x1BE);
            var_s0 += 0x10;
            var_a1 += 0x10;
        } while (var_a2 < 0x10);
    }
}
