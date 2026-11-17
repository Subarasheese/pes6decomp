/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00188580(u8 *, u8 *);
s32 func_00189370(s32);
extern char D_005202B0[];
extern char D_005202B8[];
extern char D_005202BC[];
extern char D_005202A0[];
extern char D_005202A4[];
extern char D_005202A8[];
extern char D_00520290[];
extern char D_00520294[];
extern char D_00520298[];
extern char D_00520260[];
extern char D_00520264[];
extern char D_00520268[];
extern char D_0052026C[];
extern char D_00520250[];
extern char D_00520254[];
extern char D_00520258[];
extern char D_0052025C[];
extern char D_00520280[];
extern char D_00520284[];
extern char D_00520288[];
extern char D_0052028C[];
extern char D_00520270[];
extern char D_00520274[];
extern char D_00520278[];
extern char D_0052027C[];

void func_00199BD0(void) {
    u8 b[4];
    u8 a[4];

    *(int *)D_005202B0 = 0;
    *(int *)D_005202B8 = 0;
    *(int *)D_005202BC = 0;
    if (func_00189370(1) == 1) {
        *(int *)D_005202B8 = 1;
        *(int *)D_005202B0 = 1;
    }
    if (func_00189370(0) == 1) {
        *(int *)D_005202BC = 1;
        *(int *)D_005202B0 = 1;
    }
    *(int *)D_005202A0 = 0x80000000;
    *(int *)D_005202A4 = 0x3F800000;
    *(int *)D_005202A8 = 0;
    *(int *)D_00520290 = 0;
    *(int *)D_00520294 = 0xBF800000;
    *(int *)D_00520298 = 0;
    *(int *)D_00520260 = 0x430B3334;
    *(int *)D_00520264 = 0x430B3334;
    *(int *)D_00520268 = 0x430B3334;
    *(int *)D_0052026C = 0x437F0000;
    *(int *)D_00520250 = 0x434F0000;
    *(int *)D_00520254 = 0x434F0000;
    *(int *)D_00520258 = 0x434F0000;
    *(int *)D_0052025C = 0x437F0000;
    func_00188580(a, b);
    *(f32 *)D_00520280 = (f32)a[0] / 255.0f;
    *(f32 *)D_00520284 = (f32)a[1] / 255.0f;
    *(f32 *)D_00520288 = (f32)a[2] / 255.0f;
    *(f32 *)D_0052028C = (f32)a[3] / 255.0f;
    *(f32 *)D_00520270 = (f32)b[0] / 255.0f;
    *(f32 *)D_00520274 = (f32)b[1] / 255.0f;
    *(f32 *)D_00520278 = (f32)b[2] / 255.0f;
    *(f32 *)D_0052027C = (f32)b[3] / 255.0f;
}
