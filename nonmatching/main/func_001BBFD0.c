/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern void func_00153FA0(void *);
M2C_UNK func_00146C70(M2C_UNK *);                   /* extern */
extern char D_003D16B0[];

void func_001BBFD0(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        if (func_001BB430(arg0 + 0x18) == 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_a0 != NULL) {
                func_00153FA0(temp_a0);
            }
            func_00153FA0(arg0);
        } else {
            func_00146C70(((void *)D_003D16B0));
        }
    }
}
