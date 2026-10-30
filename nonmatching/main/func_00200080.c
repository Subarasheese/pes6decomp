/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A5620(void *);
extern void func_001A55C0(int);
extern void func_001A54F0(int);
M2C_UNK func_001FDF00(f32 *);                       /* extern */

void func_00200080(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;

    func_001A55C0((s32) &sp30);
    sp10 = sp30;
    sp14 = sp34;
    sp18 = sp38;
    func_001A54F0((s32) &sp30);
    sp20 = sp30;
    sp24 = sp34;
    sp28 = sp38;
    func_001FDF00(&sp10);
    sp30 = sp10;
    sp34 = sp14;
    sp38 = sp18;
    func_001A5620(&sp30);
    sp30 = sp20;
    sp34 = sp24;
    sp38 = sp28;
    func_001A5550(&sp30);
}
