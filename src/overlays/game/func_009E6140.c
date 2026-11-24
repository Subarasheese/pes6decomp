/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_009E5F80(void), func_009E5E70(void), func_009E5D20(void), func_009E5C20(void),
    func_009E5AD0(void), func_009E5050(void), func_009E4D10(void), func_009E4A50(void),
    func_009E3E70(void), func_009E3BE0(void), func_009E3AE0(void);
extern void func_00AD0A20(void), func_009E3990(void), func_00B24A80(s32 active),
    func_00B25C50(s32 active);
extern void func_00129E70(f32 nearPlane), func_00129E50(f32 farPlane),
    Pes6MatchFlow_SetState(s32 index, s8 state);
extern s32 func_00152130(s32 input, s8 mask);
extern u8 Pes6MatchFlow_GetState(s32 index);
extern u8 D_00CBBE03[], D_00CBBE02[], D_00591DB4[], D_00CBBDF0[];
void func_009E6140(void) {
    switch (Pes6MatchFlow_GetState(2)) {
    case 0:
        func_009E5F80();
        break;
    case 1:
        func_009E5E70();
        break;
    case 2:
        func_009E5D20();
        break;
    case 3:
        func_009E5C20();
        break;
    case 4:
        func_009E5AD0();
        break;
    case 5:
        func_009E5050();
        break;
    case 6:
        func_009E4D10();
        break;
    case 7:
        func_00AD0A20();
        if (D_00CBBE03[0] && func_00152130(1, 16)) {
            func_00129E70(50.0f);
            func_00129E50(16000.0f);
            func_009E3990();
            func_00B24A80(1);
            func_00B25C50(1);
            D_00CBBE02[0] = 0xff;
            D_00591DB4[0] = 1;
            D_00CBBDF0[0] = 0;
            Pes6MatchFlow_SetState(2, 5);
        }
        break;
    case 8:
        func_009E4A50();
        break;
    case 9:
        func_009E3E70();
        break;
    case 10:
        func_009E3BE0();
        break;
    case 11:
        func_009E3AE0();
        break;
    }
}
