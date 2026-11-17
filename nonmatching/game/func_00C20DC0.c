/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_008B145C[];
extern char D_00591BE4[];
extern s32 func_009E1C90(s32);
extern void func_009E1CB0(s32);
extern void func_00C20CA0(void);
extern void func_00C20BA0(void);
extern s32 func_002DCA30(void);
extern void func_00BBB960(s32);
extern s32 func_00BF6270(void);
extern s32 *func_00B2A420(s32);
extern void func_00BEDBE0(s32 *);
extern void func_001AAF50(s32, s32);
extern void func_001AAF40(s32, s32);
extern void func_00B27010(s32);
extern void func_00B25380(s32);
extern void func_0027A880(s32);
extern void func_00C20A90(void);
extern void func_00AD0A20(void);
extern s32 func_00152130(s32, s32);
extern void func_00C20820(void);
extern void func_009B4450(s32);

void func_00C20DC0(void) {
    s32 *s0;
    u32 k = func_009E1C90(3) & 0xFF;
    if (k == 0) {
        func_00C20CA0();
    } else if (k == 1) {
        func_00C20BA0();
    } else if (k == 2) {
        if (func_002DCA30() != 0) func_00BBB960(*(s32 *)D_008B145C);
        s0 = func_00B2A420(func_00BF6270());
        func_00BEDBE0(s0);
        func_001AAF50(*(s32 *)(*(s32 *)(s0[0] + 4)), 0);
        func_001AAF40(*(s32 *)(*(s32 *)(s0[0] + 4)), 1);
        func_00B27010(0);
        func_00B25380(s0[0]);
        func_0027A880(0);
        func_009E1CB0(3);
    } else if (k == 3) {
        func_00C20A90();
    } else if (k == 4) {
        func_00AD0A20();
        if (func_00152130(1, (u8)((60 / *(u8 *)D_00591BE4) << 5)) == 1) func_009E1CB0(3);
    } else if (k == 5) {
        func_00C20820();
    }
    func_009B4450(0);
}
