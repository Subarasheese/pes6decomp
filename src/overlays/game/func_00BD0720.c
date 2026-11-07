/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B45B0(u32);
extern int func_002DCA30(void);
M2C_UNK func_002B6410();                            /* extern */
s32 func_00849850(M2C_UNK);                         /* extern */
s32 func_009B4700();                                /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_009B6630(s32, f32);            /* extern */
extern char D_00CBAA00[];
extern char D_00CBAA02[];

s32 func_00BD0720(void) {
    if ((*(u16 *)D_00CBAA00) == (*(u16 *)D_00CBAA02)) {
        func_009B45B0(6U);
        return 1;
    }
    if (func_002DCA30() != 0) {
        if (func_00849850(0) != 0) {
            func_009B45B0(6U);
            return 1;
        }
    } else if (func_00154490(func_009B4700(), 8) != 0) {
        func_009B45B0(6U);
        return 1;
    }
    func_009B6630(0, 1.0f);
    func_009B5D20();
    func_002B6410();
    return 1;
}
