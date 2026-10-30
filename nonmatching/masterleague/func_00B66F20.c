/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B66CA0(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK32, f32 *);     /* extern */
extern char D_00B85EB8[];
extern char D_00B85EBC[];
extern char D_00B85EC0[];
extern char D_00B85EC4[];
extern char D_00B85ED0[];
extern char D_00B85ED4[];
extern char D_00B85ED8[];
extern char D_00B85EDC[];
extern char D_00B85EE0[];
extern char D_00B85EE4[];
extern char D_00B85EE8[];
extern char D_00B85EEC[];

s32 func_00B66F20(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    f32 sp38;
    f32 sp3C;
    u32 temp_v0;
    u8 temp_v1;

    sp38 = (*(f32 *)D_00B85EB8);
    sp3C = (*(f32 *)D_00B85EBC);
    sp30 = (*(M2C_UNK32 *)D_00B85EC0);
    sp34 = (*(M2C_UNK32 *)D_00B85EC4);
    sp10 = (*(f32 *)D_00B85ED0);
    sp14 = (*(f32 *)D_00B85ED4);
    sp18 = (*(f32 *)D_00B85ED8);
    sp1C = (*(f32 *)D_00B85EDC);
    sp20 = (*(f32 *)D_00B85EE0);
    sp24 = (*(f32 *)D_00B85EE4);
    sp28 = (*(f32 *)D_00B85EE8);
    sp2C = (*(f32 *)D_00B85EEC);
    temp_v0 = func_00B66CA0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x1D);
            switch (temp_v1) {                      /* irregular */
            case 1:
                func_0095ED30(&sp3C, sp34, &sp20);
                break;
            case 0:
                func_0095ED30(&sp38, sp30, &sp10);
                break;
            }
        }
    }
    return 0;
}
