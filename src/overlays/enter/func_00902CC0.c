/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern u8 D_0092F0A4[], D_0092F1AB[];
extern s32 func_00909FA0(s32 kind, s32 option), func_00909F20(s32 kind, s32 option),
    Pes6Enter_UpdateSkip(void);
extern void func_0090B3D0(void);
s32 func_00902CC0(void) {
    switch (D_0092F0A4[0]) {
    case 0:
        if ((u8)func_00909FA0(D_0092F1AB[0] & 1, -1) == 1)
            ++D_0092F0A4[0];
        break;
    case 1:
        if (!Pes6Enter_UpdateSkip())
            return 0;
        ++D_0092F0A4[0];
        break;
    case 2:
        func_0090B3D0();
        if ((u8)func_00909F20((D_0092F1AB[0] >> 1) & 1, -1) == 1)
            return 1;
        break;
    }
    return 0;
}
