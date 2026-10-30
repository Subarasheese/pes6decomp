/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023EC10(void *, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern s8 D_003EAB90;
extern s8 D_003EAB94;
extern char D_0053C300[];
extern char D_008DC230[];
extern char D_00967A98[];

void func_00941A00(void) {
    s8 var_v1;

    switch ((*(s32 *)D_008DC230)) {                           /* irregular */
    case 16:
        if (((*(s8 *)D_00967A98) > 0) && ((*(s8 *)D_00967A98) < 0xF)) {
            if (D_003EAB90 != 0) {
                D_003EAB90 = D_003EAB90;
            } else if (D_003EAB94 != 0) {
                D_003EAB94 -= 1;
            }
        }
        if ((*(s8 *)D_00967A98) != 0) {
            func_0026E840(0x8400F802);
            var_v1 = (*(s8 *)D_00967A98) - 1;
block_23:
            (*(s8 *)D_00967A98) = var_v1;
        }
        break;
    case 32:
        if (((*(s8 *)D_00967A98) > 0) && ((*(s8 *)D_00967A98) < 0xF)) {
            if (D_003EAB90 != 0xA) {
                D_003EAB90 += 1;
            } else if (D_003EAB94 < 3) {
                D_003EAB94 += 1;
            }
        }
        if ((*(s8 *)D_00967A98) != 0xE) {
            func_0026E840(0x8400F802);
            var_v1 = (*(s8 *)D_00967A98) + 1;
            goto block_23;
        }
        break;
    }
    func_0023EC10(((void *)D_0053C300) + 0x10, 1);
}
