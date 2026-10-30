/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00812BB0(M2C_UNK);                     /* extern */
M2C_UNK func_008FB320(s32);                         /* extern */
M2C_UNK func_00C99A90(void *);                      /* extern */
M2C_UNK func_00CCFD90(M2C_UNK);                     /* extern */
M2C_UNK func_00CD7800();                            /* extern */
M2C_UNK func_00CF6DF0(M2C_UNK);                     /* extern */
extern char D_003AE970[];
extern void **D_003AE9D0;

void func_00CF6B80(s32 arg0) {
    void *temp_a0;

    temp_a0 = *D_003AE9D0;
    if (M2C_FIELD(temp_a0, s16 *, 0x10) == 0) {
        switch ((*(s8 *)D_003AE970)) {                       /* irregular */
        case 9:
            func_00CF6DF0(2);
            break;
        case 10:
            func_00812BB0(2);
            break;
        case 7:
            func_00CCFD90(2);
            break;
        }
        func_00CD7800();
        func_00C99A90(*D_003AE9D0);
        func_00153FA0(D_003AE9D0);
        D_003AE9D0 = NULL;
        func_008FB320(arg0);
        return;
    }
    func_00C99A90(temp_a0);
    func_00153FA0(D_003AE9D0);
    D_003AE9D0 = NULL;
}
