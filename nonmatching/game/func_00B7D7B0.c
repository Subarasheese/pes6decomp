/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00C9A920[];
extern char D_00C9A924[];
extern char D_00591BE4[];
extern char D_00C9A72A[];
extern char D_00C9A72D[];
extern char D_00C9A72F[];
extern char D_00C9A725[];
extern char D_00C9A727[];
extern u8 *D_003EA768;
extern s32 func_00152130(s32 a, s32 b);
extern void func_00BF9330(s32 a, u8 *b);
extern void func_00B27170(void);
extern s32 func_00BA91C0(s32 a, s32 b);

s32 func_00B7D7B0(void) {
    u8 buf[2];
    s32 a0;
    s32 D_00C9A920_v;
    u32 c1 = 0x3E4CCCCD;
    u32 c2 = 0x3FE66666;
    u32 c3 = 0x3F800000;

    if ((*(s32 *)D_00C9A920) >= 0x27) {
        a0 = ((s32)(*(u8 *)D_00591BE4) * 16) / 60;
        if ((f32)(u32)(*(u8 *)D_00591BE4) * (*(f32 *)D_00C9A924) - (f32)(255 / a0) < (f32)(*(s32 *)D_00C9A920)) {
            if (func_00152130(1, a0 & 0xFF) == 1) {
                return 1;
            }
        }
    } else {
        a0 = ((s32)(*(u8 *)D_00591BE4) * 16) / 60;
        if (func_00152130(0, a0 & 0xFF) == 1) {
            *D_003EA768 |= 1;
        }
    }
    if ((s32)(*(f32 *)&c1 * (f32)(u32)(*(u8 *)D_00591BE4)) == (*(s32 *)D_00C9A920)) {
        buf[0] = (*(u8 *)D_00C9A725);
        buf[1] = (*(u8 *)D_00C9A727);
        func_00BF9330(0, buf);
    } else if ((s32)(*(f32 *)&c2 * (f32)(u32)(*(u8 *)D_00591BE4)) == (*(s32 *)D_00C9A920) && (*(u8 *)D_00C9A72A) != 0xFF) {
        buf[0] = (*(u8 *)D_00C9A72D);
        buf[1] = (*(u8 *)D_00C9A72F);
        func_00BF9330(0, buf);
    }
    if ((*(s32 *)D_00C9A920) == (s32)(*(u8 *)D_00591BE4) * 3) {
        func_00B27170();
    }
    D_00C9A920_v = *(s32 *)D_00C9A920;
    if (func_00BA91C0(D_00C9A920_v, D_00C9A920_v) != 0) {
        (*(s32 *)D_00C9A920) = (s32)(*(f32 *)&c3 + (f32)(u32)(*(u8 *)D_00591BE4) * (*(f32 *)D_00C9A924));
    }
    (*(s32 *)D_00C9A920) = (*(s32 *)D_00C9A920) + 1;
    return 0;
}
