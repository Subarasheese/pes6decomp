/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_001B9C60(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;
extern char D_00923FF0[];

void func_0091CEF0(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    (*(s32 *)D_00923FF0) = M2C_FIELD(D_00923FCC, s32 *, 8);
    func_00910060();
    func_001EDD90(M2C_FIELD(D_00923FCC, s32 *, 0x194));
    func_001EDD90(M2C_FIELD(D_00923FCC, s32 *, 0x260));
    func_001B9C60(M2C_FIELD(D_00923FCC, void **, 0x258));
    func_00C75330(D_00923FCC + 0x1C);
    var_s1 = 0;
    var_s0 = 0;
    do {
        func_0026B580(D_00923FCC + var_s0 + 0x2CC, 0xB, arg0);
        var_s1 += 1;
        var_s0 += 0x2C;
    } while (var_s1 < 8);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
