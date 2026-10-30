/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001DF820(void *, s32);
void *func_001D6E70(s32, M2C_UNK, s32);             /* extern */
extern char D_00398400[];
extern char D_00398434[];

void func_001B8600(s32 arg0) {
    s32 temp_v0;

    if ((*(s32 *)D_00398434) != 0) {
        temp_v0 = func_001F08B0(arg0);
        if (temp_v0 != 0) {
            if (M2C_FIELD(((void *)D_00398400), void **, 0x10) != NULL) {
                if (arg0 != M2C_FIELD(((void *)D_00398400), s32 *, 0x24)) {
                    func_001DF820(M2C_FIELD(M2C_FIELD(((void *)D_00398400), void **, 0x10), void **, 0xC), temp_v0);
                }
            } else if (M2C_FIELD(((void *)D_00398400), s32 *, 0x14) == 0) {
                M2C_FIELD(((void *)D_00398400), void **, 0x10) = func_001D6E70(M2C_FIELD(((void *)D_00398400), s32 *, 4), 0, temp_v0);
            } else {
                M2C_FIELD(((void *)D_00398400), void **, 0x10) = func_001D6E70(M2C_FIELD(((void *)D_00398400), s32 *, 0x18), 0, temp_v0);
            }
            M2C_FIELD(((void *)D_00398400), s32 *, 0x24) = arg0;
            M2C_FIELD(((void *)D_00398400), s32 *, 0x28) = 0;
        }
    }
}
