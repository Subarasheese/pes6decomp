/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_00140500(void);
extern int func_001404D0(void);
extern int func_00140460(void);
extern int func_001404F0(void);
extern s16 func_001404C0(void);
extern s32 func_00140470(void);
M2C_UNK func_0013C290(s32 *);                       /* extern */

void func_0013C180(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;

    sp10 = func_00140470();
    sp14 = func_00140460();
    sp18 = (s32) ((s64) (func_00140500() << 0x30) >> 0x30);
    sp1C = (s32) ((s64) (func_001404F0() << 0x30) >> 0x30);
    sp20 = func_00140460();
    sp24 = (s32) ((s64) (func_001404D0() << 0x30) >> 0x30);
    sp28 = (s32) ((s64) (func_001404C0() << 0x30) >> 0x30);
    func_0013C290(&sp10);
}
