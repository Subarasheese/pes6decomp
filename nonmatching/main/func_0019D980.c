/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEBD0(int);
extern void func_001CEA60(s32);
extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEBF0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
extern void *D_005202E0;

void func_0019D980(void) {
    s32 *var_s0;
    u32 var_s1;

    if ((D_005202E0 != NULL) && (M2C_FIELD(D_005202E0, u8 *, 0) != 0)) {
        if (M2C_FIELD(D_005202E0, u8 *, 0x13) == 0) {
            return;
        }
        func_001CECC0((M2C_FIELD(D_005202E0, u8 *, 0) * (func_001D3090(D_005202E0 + 0xC) + 0x128)) + 0x60);
        func_001CEB90();
        func_001CEBF0();
        func_001CEBD0(2);
        func_001CEAB0();
        var_s0 = D_005202E0 + 0x1C;
        var_s1 = 0;
        if (M2C_FIELD(D_005202E0, u8 *, 0) != 0) {
            do {
                func_001CEA60(*var_s0);
                M2C_FIELD(D_005202E0, void **, 0x14) = (void *) (var_s0 + 4);
                func_001D3260(D_005202E0 + 0xC);
                var_s1 += 1;
                var_s0 += 0x64;
            } while (var_s1 < (u8) M2C_FIELD(D_005202E0, u8 *, 0));
        }
        func_001CEC70();
    }
}
