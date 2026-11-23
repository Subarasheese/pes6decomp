/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001FC800(s32);
extern void func_00182B30(int);
extern void func_0017E120(int);
extern s32 func_0017F900(void);
extern void func_001FC790(s32);
extern void func_001FC840(s32);
extern void func_003626D0(void *, s32, s32);
extern void func_008B77A0(void);
extern void func_008B7960(s32, s32);
extern s32 func_008B96D0(void);
extern void func_00B27010(s32);
extern char D_003A85B0[];
extern u8 D_003E998C;

s32 Pes6Match_FormationMenuStep(void) {
    if (D_003E998C == 2) goto case2;
    if (D_003E998C == 1) goto case1;
    if (D_003E998C != 0) return 0;
    func_0017E120(0);
    func_00182B30(0);
    func_00B27010(0);
    func_001FC840(4);
    func_003626D0(D_003A85B0, 1, 0);
    D_003E998C += 1;
case1:
    if (func_0017F900() == 0) return 0;
    func_008B7960(1, -1);
    D_003E998C += 1;
case2:
    if (func_008B96D0() == 0) return 0;
    func_008B77A0();
    func_001FC790(func_001FC800(4));
    func_0017E120(1);
    func_00182B30(1);
    func_00B27010(1);
    D_003E998C = 0;
    return 1;
}
