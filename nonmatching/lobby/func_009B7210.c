/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009B50D0(void *);
extern void func_001D4E00(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
extern char D_00A7DC08[];

s32 func_009B7210(void **arg0) {
    s32 temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = *arg0;
    func_009B50D0(temp_s0);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x2CC);
    if (temp_a0 != 0) {
        func_002DF960(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 0x2CC) = 0;
    }
    temp_a0_2 = M2C_FIELD(temp_s0, void **, 0x30);
    if (temp_a0_2 != NULL) {
        func_001D4E00(temp_a0_2);
        M2C_FIELD(temp_s0, void **, 0x30) = NULL;
    }
    if ((*(s32 *)D_00A7DC08) != 0) {
        func_0099C7C0((*(s32 *)D_00A7DC08));
        (*(s32 *)D_00A7DC08) = 0;
    }
    return 1;
}
