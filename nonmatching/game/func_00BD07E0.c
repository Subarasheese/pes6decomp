/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B45B0(u32);
extern int func_002DCA30(void);
M2C_UNK func_002B5A10();                            /* extern */
s32 func_00849850(M2C_UNK);                         /* extern */
s32 func_009B4700();                                /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_009B6630(M2C_UNK, M2C_UNK);            /* extern */
extern s32 D_003EA738;
extern char D_00CBAA00[];
extern char D_00CBAA02[];

s32 func_00BD07E0(void) {
    func_009B6630(0, 0x3F800000);
    func_009B5D20();
    func_002B5A10();
    if ((*(u16 *)D_00CBAA00) == (*(u16 *)D_00CBAA02)) {
        D_003EA738 = 6;
        func_009B45B0(6U);
    } else if (func_002DCA30() != 0) {
        if (func_00849850(0) != 0) {
            D_003EA738 = 7;
            func_009B45B0(6U);
        }
    } else if (func_00154490(func_009B4700(), 8) != 0) {
        D_003EA738 = 7;
        func_009B45B0(6U);
    }
    return 1;
}
