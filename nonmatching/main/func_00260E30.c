/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EF370(s32, f32 *, s16, s16);        /* extern */
extern char D_0052B0A4[];
extern char D_0052B0A8[];
extern char D_0058D344[];
extern char D_0058D346[];
extern char D_0058D348[];
extern char D_0058D34A[];
extern char D_0058D364[];

void func_00260E30(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 *var_v1;
    s32 var_v0;

    var_v0 = 0x10;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp10 = (f32) (*(s16 *)D_0058D344) - (*(f32 *)D_0052B0A4);
    sp18 = (f32) (*(s16 *)D_0058D348);
    sp14 = (f32) (*(s16 *)D_0058D346) - (*(f32 *)D_0052B0A8);
    sp1C = (f32) (*(s16 *)D_0058D34A);
    func_001EF370((*(s32 *)D_0058D364), &sp10, (*(s16 *)D_0058D348), (*(s16 *)D_0058D346));
}
