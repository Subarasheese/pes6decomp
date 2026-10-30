/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_00140500(void);
extern int func_001404D0(void);
extern s16 func_001404C0(void);
extern int func_00140460(void);
extern int func_001404F0(void);
extern s32 func_00140470(void);
M2C_UNK func_0013C340(s32, s32 *);                  /* extern */

void func_0013C200(s32 arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;

    sp20 = func_00140470();
    sp24 = func_00140460();
    sp28 = (s32) ((s64) (func_00140500() << 0x30) >> 0x30);
    sp2C = (s32) ((s64) (func_001404F0() << 0x30) >> 0x30);
    sp30 = func_00140460();
    sp34 = (s32) ((s64) (func_001404D0() << 0x30) >> 0x30);
    sp38 = (s32) ((s64) (func_001404C0() << 0x30) >> 0x30);
    func_0013C340(arg0, &sp20);
}
