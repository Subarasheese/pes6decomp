/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A6F0[];
extern char D_00C9A6F4[];
extern char D_00C9A6F8[];
extern char D_00C9A6FC[];
extern char D_00C9A700[];
extern char D_00C9A704[];

void func_00B78FC0(s32 idx) {
    f32 arr[6];
    void (*fn)(char *);
    char *p;

    arr[0] = *(f32 *)D_00C9A6F0;
    arr[1] = *(f32 *)D_00C9A6F4;
    arr[2] = *(f32 *)D_00C9A6F8;
    arr[3] = *(f32 *)D_00C9A6FC;
    arr[4] = *(f32 *)D_00C9A700;
    arr[5] = *(f32 *)D_00C9A704;
    p = (char *)arr - 0x10 + idx * 4;
    fn = *(void (**)(char *))(p + 0x10);
    if (fn != 0) {
        fn(p);
    }
}
