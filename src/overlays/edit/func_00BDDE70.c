/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00B91440(s32);
s32 func_00B91590(s32, s32);
extern void func_00BC87A0(void);
s32 func_00BF4060(s32, s32);
s32 func_00BF4370(s32);
s32 func_00BF45D0(s32, s32, s32, s32, s32);
s32 func_00BF47D0(s32);
s32 func_00BF59A0(s32);
s32 func_00BF5CF0(s32);
extern s32 func_00BF73D0(void);
s32 func_00BF7CF0(s32);
s32 func_00C1B440(s32, s32);
s32 func_00C1B460(s32);
extern char D_00CE5900[];

void func_00BDDE70(s32 arg0) {
    s32 value;

    func_00C1B440(0, arg0);
    value = func_00C1B460(0) & 0xFFFF;
    if (value == 0xFFFF) {
        func_00BF47D0(0);
    } else {
        func_00BF45D0(0, value, 0, 2, 0);
    }
    func_00BF4060(0, value);
    func_00BF4370(0);
    func_00B91590(9, 1);
    func_00BF59A0(0);
    func_00B91590(9, 1);
    func_00B91590(0x1E, 1);
    if (func_00BF73D0() != 0) {
        func_00BF5CF0(0);
        func_00BF7CF0(0);
    } else {
        func_00B91440(9);
        func_00B91440(0x1E);
    }
    func_00BC87A0();
    (*(s32 *)D_00CE5900) = 1;
}
