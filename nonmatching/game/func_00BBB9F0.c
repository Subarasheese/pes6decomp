/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BBCFF0(u8, u8, s32);
extern void func_00BBD840(s32);
extern char D_005E220C[];
extern char D_005E24B0[];
extern char D_005E24B1[];
extern char D_005E24B3[];
extern char D_005E24B8[];
extern char D_005E24BC[];

s32 func_00BBB9F0(s32 arg0) {
    u8 k = *(u8 *)D_005E24B0;

    if (k == 5) {
        return (*(f32 *)D_005E24B8 <= *(f32 *)D_005E24BC) ? 1 : 0;
    }
    if (k == 4) {
        return (*(f32 *)D_005E24BC < *(f32 *)D_005E24B8) ? 0 : 1;
    }
    if (k == 3) {
        if (*(f32 *)D_005E24BC < *(f32 *)D_005E24B8 && !(*(f32 *)D_005E220C < 896.0f)) {
            return 0;
        }
        return 1;
    }
    if (k == 2) {
        func_00BBD840(arg0);
        if (*(f32 *)D_005E24BC < *(f32 *)D_005E24B8
            && func_00BBCFF0(*(u8 *)D_005E24B1, *(u8 *)D_005E24B3, 1) != 0
            && !(*(f32 *)D_005E220C < 896.0f)) {
            return 0;
        }
        return 1;
    }
    if (k == 1) {
        return (*(f32 *)D_005E24BC < *(f32 *)D_005E24B8) ? 0 : 1;
    }
    return 1;
}
