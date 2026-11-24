/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00591C09[];
extern s32 func_0023AEC0(void);
extern s32 func_00226710(void);
extern s32 func_002305D0(void);
extern u8 func_00236630(void);
extern u8 func_00234370(void);

s32 func_0023AEC0(void) {
    s32 allowed = 1;
    u8 current, last;
    switch (D_00591C09[0]) {
    case 2:
        allowed = 0;
        break;
    case 1:
    case 4:
    case 14:
        if ((u8)func_002305D0() == 1)
            allowed = 0;
        else {
            current = func_00236630();
            last = func_00234370();
            if (last && ((u8)current * 10) / (u8)last > 8)
                allowed = 0;
        }
        if ((u8)func_00226710() == 32 || (u8)func_00226710() == 33)
            allowed = 1;
        break;
    }
    return allowed;
}
