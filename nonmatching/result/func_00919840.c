/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B4C0(s32);
extern void func_001BC360(void);
extern void func_00153FA0(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_00919840(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;

    func_0026B4C0(M2C_FIELD(D_00923FCC, s32 *, 0x4C0));
    func_001D7F10(M2C_FIELD(D_00923FCC, void **, 0x148));
    func_001D7F10(M2C_FIELD(D_00923FCC, void **, 0x14C));
    var_s1 = 0;
    var_s0 = 0;
    do {
        func_001D7F10(M2C_FIELD((D_00923FCC + var_s0), void **, 0x13C));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s0_2 = 0;
    do {
        var_s3 = 0;
loop_4:
        func_001BC360();
        var_s3 += 1;
        if (var_s3 < 4) {
            goto loop_4;
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 8);
    func_001EDD90(M2C_FIELD(D_00923FCC, s32 *, 0x150));
    func_00910060();
    var_s0_3 = 0;
    var_s2 = 0;
    do {
        var_s3_2 = 0;
        var_s1_2 = 0;
loop_8:
        func_00C75330(D_00923FCC + var_s1_2 + var_s2 + 0x1A0);
        var_s3_2 += 1;
        var_s1_2 += 0x140;
        if (var_s3_2 < 2) {
            goto loop_8;
        }
        var_s0_3 += 1;
        var_s2 += 0x50;
    } while (var_s0_3 < 4);
    func_00C75330(D_00923FCC + 0x34);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
