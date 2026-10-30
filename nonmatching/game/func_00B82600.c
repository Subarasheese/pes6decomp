/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern void *D_003EA764;
extern void *D_003EA768;
extern char D_00C9A710[];
extern char D_00C9A718[];
extern char D_00C9A71C[];

void func_00B82600(void) {
    func_001C48E8(((void *)D_00C9A710), 0, 0x218);
    (*(s32 *)D_00C9A718) = 0xFF;
    (*(s32 *)D_00C9A71C) = 0xFF;
    (*(s32 *)D_00C9A710) = 0;
    if (D_003EA764 != NULL) {
        func_00153FA0(D_003EA764);
        D_003EA764 = NULL;
    }
    if (D_003EA768 != NULL) {
        func_00153FA0(D_003EA768);
        D_003EA768 = NULL;
    }
}
