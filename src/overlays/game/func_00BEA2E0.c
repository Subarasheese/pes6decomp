/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_00152130(s32, s32);
extern void func_00278440(void), Pes6Ball_Update(void);
extern s32 func_002DCA30(void), func_008481D0(void), func_0084D0E0(void);
extern void func_00999150(void), func_009A0B90(void);
extern u8 func_009E1C90(s32);
extern void func_009E1CB0(s32), func_00AD0A20(void), func_00BEA440(void), func_00BF0580(s32);
extern s32 func_00BF9E60(void);
extern void func_00C32330(void);
extern u8 D_00591DB4[], D_00591DD1[], D_005926FF[];
extern s32 D_00CBCC6C[];
void func_00BEA2E0(void) {
    s32 phase;

    if (func_002DCA30() && !func_0084D0E0())
        return;
    if (D_00591DD1[0] != 0) {
        func_009A0B90();
    }
    if (func_00BF9E60() != 0) {
        func_00278440();
    }
    phase = func_009E1C90(3) & 0xFF;
    switch (phase) {
    case 0:
        if (func_00152130(0, 0x10) != 0) {
            D_00591DB4[0] = 1;
            func_009E1CB0(3);
        }
        break;
    case 1:
        if (D_00591DD1[0] == 0) {
            func_00C32330();
            func_009E1CB0(3);
        }
        break;
    }
    if (func_002DCA30() && func_008481D0()) {
        return;
    }
    func_00999150();
    func_00AD0A20();
    Pes6Ball_Update();
    func_00BEA440();
    if (D_005926FF[0] == 4) {
        func_00BF0580(4);
    }
    D_00CBCC6C[0] += 1;
}
