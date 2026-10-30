/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
extern void func_0016EC10(void *);
s32 func_001C7E10(void *, M2C_UNK *);               /* extern */
M2C_UNK func_001C7F58(void *, M2C_UNK *);           /* extern */
s32 func_001C80F0(void *);                          /* extern */
extern char D_00387260[];
extern char D_003CA788[];

void func_0016F5E8(s8 *arg0, void *arg1) {
    s8 temp_v1;

    func_001C7F58(arg1, ((void *)D_00387260));
    temp_v1 = *arg0;
    if ((temp_v1 != 0x2F) && (temp_v1 != 0x5C)) {
        func_00121430(arg1);
    }
    func_00121430(arg1);
    if (func_001C7E10((arg1 + func_001C80F0(arg1)) - 2, ((void *)D_003CA788)) != 0) {
        func_00121430(arg1);
    }
    func_0016EC10(arg1);
}
