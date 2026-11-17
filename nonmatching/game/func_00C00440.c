/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005926FD[], D_005926FE[], D_00592700[], D_005926FF[], D_00592376[], D_00591F24[], D_00CBBE44[];
extern char D_00592702[], D_00CBCC6A[], D_00592705[], D_00591DD0[], D_00CBCDE0[], D_00CBCDE2[];
extern char D_00CBD880[], D_00CBD884[], D_00CBD88C[];
extern char D_00591E58[], D_00591E60[], D_00C9EE80[], D_00C9EE84[], D_00C9EE88[], D_00C9EE8C[];

void func_00C001F0(s32, s32, s32, s32);
s32 func_00C00070(s32, s32, s32, s32, f32, f32);
s32 func_00BFFEF0(s32, s32, s32, s32, f32, f32);
void func_00C019F0(void);
void func_009E1D30(s32, s32);
s32 func_002DCA30(void);
s32 func_009E1C90(void);
void func_00855290(s32, s32, s32);

void func_00C00440(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 t[4];
    s32 s0;
    *(u8 *)D_005926FD = 1;
    *(u8 *)D_005926FE = arg0;
    *(u8 *)D_00592700 = arg1;
    func_00C001F0(arg0, arg1, 1, arg3);
    *(u8 *)D_005926FF = func_00C00070(arg0, arg1, *(u8 *)D_00CBCDE0, *(u8 *)D_00CBCDE2, *(f32 *)D_00591E58, *(f32 *)D_00591E60);
    if (*(u8 *)D_005926FF == 4) {
        if (arg0 == 5) {
            s0 = 1;
        } else if (arg0 == 4) {
            t[0] = *(f32 *)D_00C9EE80;
            t[2] = *(f32 *)D_00C9EE88;
            t[1] = *(f32 *)D_00C9EE84;
            t[3] = *(f32 *)D_00C9EE8C;
            s0 = ((s32 *)t)[*(u8 *)D_00CBCDE0];
        }
        *(u8 *)D_00592376 = s0;
    }
    *(u8 *)D_00591F24 = func_00BFFEF0(arg0, arg1, *(u8 *)D_00CBCDE0, *(u8 *)D_00CBCDE2, *(f32 *)D_00591E58, *(f32 *)D_00591E60);
    *(u8 *)D_00CBBE44 = 0;
    func_00C019F0();
    *(u8 *)D_00592702 = 0;
    *(u8 *)D_00CBCC6A = 0;
    *(s32 *)D_00CBD880 = 0;
    *(s32 *)D_00CBD884 = 0;
    *(s32 *)D_00CBD88C = 0;
    *(u8 *)D_00592705 = 0;
    func_009E1D30(1, 10);
    *(u8 *)D_00591DD0 = 1;
    if (func_002DCA30() != 0) {
        s32 r = func_009E1C90();
        func_00855290(1, r & 0xFF, 1);
    }
}
