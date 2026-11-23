/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern u8 D_00592754[];
extern s32 Pes6Enter_Flags[];
extern u8 D_0092F0A4[], D_0092F1AB[];
extern s32 func_00909FA0(s32 kind, s32 option), func_00909F20(s32 kind, s32 option),
    Pes6Enter_UpdateSkip(void);
extern void func_0090B3D0(void);
s32 func_00901890(void) {
    switch (D_0092F0A4[0]) {
    case 0:
        if ((u8)func_00909FA0(D_0092F1AB[0] & 1, -1) == 1)
            ++D_0092F0A4[0];
        break;
    case 1:
        Pes6Enter_UpdateSkip();
        if (D_00592754[0] || (Pes6Enter_Flags[0] & 0x1000))
            ++D_0092F0A4[0];
        break;
    case 2:
        func_0090B3D0();
        if ((u8)func_00909F20((D_0092F1AB[0] >> 1) & 1, -1) == 1)
            ++D_0092F0A4[0];
        break;
    case 3:
        return 1;
    }
    return 0;
}
