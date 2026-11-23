/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void func_001D7D60(void *, s8), func_0090F920(void);
extern s32 func_0026C760(void), func_0090F070(s32), func_00C75F80(void), func_00D0F610(void);
extern s8 D_0058D7A7[], D_0058D7AA[], D_00921DD4[];
extern u8 D_00591C09[];
extern s32 D_0058D7FC[], D_00921DD0[], D_00921F60[];
extern void *D_00924274[];
void func_00911180(void) {
    if (D_00921DD4[0]) {
        if (func_0026C760() && !D_00921DD0[0] && D_00591C09[0] != 7 && !D_0058D7AA[0] &&
            !D_0058D7A7[0]) {
            D_00921DD0[0] = func_0090F070(18);
            if (D_0058D7FC[0])
                func_001D7D60(D_00924274[0], 0);
        }
        if (func_00C75F80()) {
            if (D_00921F60[0]) {
                if (!(D_0058D7AA[0] ? func_00D0F610() : 0))
                    D_00921F60[0] = 0;
            } else {
                if (D_0058D7AA[0] ? func_00D0F610() : 0)
                    D_00921F60[0] = 1;
            }
        }
        func_0090F920();
    }
}
