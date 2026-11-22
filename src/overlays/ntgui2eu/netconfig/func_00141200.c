/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005BD2BC;
extern s32 D_005BD2C4;
extern s32 D_005BD2C8;
extern s32 func_00140F78(void);
extern void func_00141788(void);
extern void func_00154510(void);

void func_00141200(s32 arg0) {
    D_005BD2BC = arg0;
    if (arg0 != -1) {
        if (D_005BD2C8 == 0) {
            func_00154510();
        }
        D_005BD2C8 = 0;
        D_005BD2C4 = 0;
        func_00140F78();
    }
    func_00141788();
}
