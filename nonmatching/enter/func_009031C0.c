/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A8830(s32);
M2C_UNK func_00902E50(M2C_UNK);                     /* extern */
M2C_UNK func_0090A410(M2C_UNK, M2C_UNK, s8, f32);   /* extern */
s8 *func_009177C0(M2C_UNK);                         /* extern */
extern char D_003AFCAC[];
extern char D_0092F0FA[];
extern char D_0092F1AA[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 func_009031C0(void) {
    M2C_UNK var_a0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;

    switch ((*(s32 *)D_003AFCAC)) {                           /* irregular */
    case 0x100F5:
        var_a0 = 3;
        break;
    case 0x100F4:
        var_a0 = 2;
        break;
    default:
        var_a0 = 1;
        break;
    }
    func_00902E50(var_a0);
    if ((*(u8 *)D_0092F1AA) != 3) {
        if ((*(u8 *)D_0092F1AA) != 2) {
            temp_f20 = (f32) (*(s16 *)D_0092F0FA);
            func_0090A410(0x24, 0xFF, *func_009177C0(0), temp_f20);
        } else {
            temp_f20_2 = (f32) (*(s16 *)D_0092F0FA);
            func_0090A410(0x25, 0xFF, *func_009177C0(0), temp_f20_2);
        }
    } else {
        temp_f20_3 = (f32) (*(s16 *)D_0092F0FA);
        func_0090A410(0x26, 0xFF, *func_009177C0(0), temp_f20_3);
    }
    func_002A8830(0);
    return 1;
}
