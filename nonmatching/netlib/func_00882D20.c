/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001BC350(int);
extern void func_001B7920(void);
extern void func_002F0160(void *);
extern void func_002F4E10(void *);
extern void func_001BC2B0(void);
extern void func_00153FA0(void *);
M2C_UNK func_001DC980(s32);                         /* extern */
extern s32 D_003EA3A0;
extern s32 D_003EA3A4;
extern void *D_003EA3A8;
extern void *D_003EA3AC;
extern s32 D_003EA3B0;
extern s32 D_003EA3B4;
extern u8 D_003EA3B8;
extern u8 D_003EA3BC;

void func_00882D20(s32 arg0) {
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    if (D_003EA3BC == 1) {
        D_003EA3BC = 0;
        func_001BC350(arg0);
        func_001BC2B0();
    }
    temp_s0 = D_003EA3A8;
    if (temp_s0 != NULL) {
        temp_a0 = M2C_FIELD(temp_s0, void **, 0xA4);
        if (temp_a0 != NULL) {
            func_001B9C60(temp_a0);
        }
        func_002F0160(temp_s0);
        var_s1 = 0;
        do {
            func_001DC980(M2C_FIELD((temp_s0 + (var_s1 * 4)), s32 *, 0xE4));
            var_s1 += 1;
        } while (var_s1 < 0xF);
        temp_a0_2 = M2C_FIELD(temp_s0, void **, 0x120);
        if (temp_a0_2 != NULL) {
            func_00153FA0(temp_a0_2);
        }
        func_00153FA0(temp_s0);
    }
    D_003EA3A8 = NULL;
    func_002F4E10(D_003EA3AC);
    D_003EA3AC = NULL;
    D_003EA3A0 = 0;
    D_003EA3A4 = 0;
    D_003EA3B0 = 0;
    D_003EA3B4 = 0;
loop_12:
    if (D_003EA3B8 != 0) {
        func_001B7920();
        D_003EA3B8 -= 1;
        goto loop_12;
    }
}
