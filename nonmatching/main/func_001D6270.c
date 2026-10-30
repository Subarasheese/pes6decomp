/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D67B0(void *);
extern void func_001D6600(void *);
extern void func_001D6E40(void *);
s32 func_001D61A0(void *, M2C_UNK, s32);            /* extern */

void func_001D6270(void *arg0) {
    s32 temp_a0;
    void *temp_s0;
    void *var_s1;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        var_s1 = M2C_FIELD(arg0, void **, 0x14);
        do {
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0);
            temp_s0 = M2C_FIELD(var_s1, void **, 0x20);
            switch (temp_a0) {                      /* irregular */
            case 0:
                M2C_FIELD(var_s1, s32 *, 8) = func_001D61A0(arg0, 1, M2C_FIELD(var_s1, s32 *, 4));
                if (M2C_FIELD(var_s1, s32 *, 8) == 0) {
                    func_001D6E40(var_s1);
                }
                break;
            case 1:
                M2C_FIELD(var_s1, s32 *, 8) = func_001D61A0(arg0, 2, M2C_FIELD(var_s1, s32 *, 4));
                if (M2C_FIELD(var_s1, s32 *, 8) == 0) {
                    func_001D67B0(var_s1);
                }
                break;
            case 2:
                M2C_FIELD(var_s1, s32 *, 8) = func_001D61A0(arg0, 2, M2C_FIELD(var_s1, s32 *, 4));
                if (M2C_FIELD(var_s1, s32 *, 8) == 0) {
                    func_001D6600(var_s1);
                }
                break;
            }
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}
