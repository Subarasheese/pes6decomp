/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern s32 func_002F7970(void);
extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_008FAAF0();                            /* extern */
M2C_UNK func_008FAB10(M2C_UNK);                     /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern char D_003AE992[];
extern void *D_003AE9D0;

s32 func_008FE130(void) {
    s32 var_s0;
    s32 var_s1;
    void *temp_s2;

    func_00C75330(D_003AE9D0 + 0x1C);
    var_s0 = 0;
    var_s1 = 0;
    do {
        temp_s2 = M2C_FIELD((D_003AE9D0 + var_s1), void **, 0xC4);
        if (temp_s2 != NULL) {
            func_00C75330(temp_s2);
            func_001EDD90(M2C_FIELD(temp_s2, s32 *, 0x20));
            func_00153FA0(temp_s2);
        }
        var_s0 += 1;
        var_s1 += 4;
    } while (var_s0 < 0xB);
    func_00153FA0(D_003AE9D0);
    D_003AE9D0 = NULL;
    func_001BC2B0();
    if ((func_002F7970() != 0) || ((*(u8 *)D_003AE992) != 0)) {
        func_008FAAF0();
    }
    func_008FAB10(0);
    return 1;
}
