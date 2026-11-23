/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_0021DB40(const void *), func_00645860(s32);
extern void func_00656020(s32, s32), func_00655D10(s32), func_006557C0(void),
    func_0063B780(const void *, s32, s32), func_0063B750(void), func_00214A50(s32),
    func_0064D760(void);
extern const u8 D_0065C0E0[];
extern s32 D_003E9E38;
extern s16 D_0065C168[];
s32 func_0064CAB0(void) {
    if (func_0021DB40(D_0065C0E0)) {
        func_00656020(func_00645860(0x17), 0);
        func_00656020(func_00645860(0x5f), 1);
        func_00655D10(1);
        func_006557C0();
        func_0063B780(&D_003E9E38, 0, 0);
        func_0063B750();
        func_00214A50(0);
        func_0064D760();
        D_0065C168[0] = 4;
        return 0;
    }
    func_00656020(func_00645860(0x1b), 0);
    func_00656020(func_00645860(0x2a), 1);
    return 3;
}
