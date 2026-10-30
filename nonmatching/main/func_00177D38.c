/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_003CC418[];
extern char D_003CC428[];
extern char D_003CC448[];
extern char D_003CC458[];

void func_00177D38(void *arg0) {
    if (arg0 == NULL) {
        func_00177A80(((void *)D_003CC418), (s32) ((void *)D_003CC428));
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 4) == 0) {
        func_00177A80(((void *)D_003CC448), (s32) ((void *)D_003CC458));
        return;
    }
    func_001C48E8(0, 0x30);
    M2C_FIELD(arg0, s8 *, 4) = 0;
}
