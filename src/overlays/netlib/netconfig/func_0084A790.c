/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s16 *func_008472D0(void);
extern void func_00852750(s32);
extern s32 func_00853B50(s32, s32, s32, s32, s16, s32, s32, s32);
extern u8 D_008B14C4[];
extern s32 D_008B14C0[];
typedef struct {
    u8 reserved : 4, busy4 : 1, busy5 : 1;
} StatusFlags;
extern StatusFlags D_008B14CD[];
static inline void queueAction(s32 id, s32 variant, s32 delay) {
    func_00853B50(1, id, variant, 0, *func_008472D0(), delay, 0, 0);
}
static inline s32 networkBusy(void) {
    if (!(D_008B14CD[0].busy5 || D_008B14CD[0].busy4))
        return 0;
    return 1;
}
s32 func_0084A790(s32 mode) {
    if (networkBusy())
        return -1;
    if (D_008B14C4[0]) {
        D_008B14C4[0] = 0;
        D_008B14C0[0] = 0;
    }
    func_00852750(0);
    switch (mode) {
    case 1:
        queueAction(201, 0, 9);
        queueAction(204, 0, -5);
        queueAction(203, 1, -5);
        break;
    case 2:
        queueAction(202, 0, 9);
        queueAction(204, 0, -5);
        queueAction(203, 1, -5);
        break;
    case 3:
        queueAction(201, 1, -7);
        queueAction(22, 11, -5);
        break;
    }
    return 0;
}
