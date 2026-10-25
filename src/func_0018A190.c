/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u16 D_0051FF54[];
extern u8 D_00520101[];
extern s32 func_001888A0(void);

void func_0018A190(s32 mode) {
    if (mode == 2) {
        switch (func_001888A0()) {
        case 2:
        case 4:
            if (D_0051FF54[0] == 0) {
                mode = 3;
            }
            break;
        default:
            mode = 0;
            break;
        }
    }
    D_00520101[0] = mode;
}
