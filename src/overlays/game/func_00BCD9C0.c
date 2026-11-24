/* compiler: mwcc-3.0.1b151 */

#include "types.h"

extern u8 D_00592700[];
extern void func_002727C0(s32);
extern void func_00BB68C0(void);
extern void func_00BB6780(u16);
extern s32 func_00BB6100(s32);
extern s32 func_00152130(s32, s32);
extern u16 func_00BCDA70(void);
extern u16 func_00BCDD00(void);

void func_00BCD9C0(void) {
    u8 mode;
    u16 frame;
    s32 camera;
    func_002727C0(31);
    func_00BB68C0();
    mode = D_00592700[0];
    switch (mode) {
    case 6:
    case 5:
        frame = func_00BCDA70();
        break;
    default:
        frame = func_00BCDD00();
        break;
    }
    func_00BB6780(frame);
    mode = D_00592700[0];
    switch (mode) {
    case 6:
    case 5:
        camera = 10;
        break;
    default:
        camera = 4;
        break;
    }
    func_00BB6100(camera);
    func_00152130(0, 16);
}
