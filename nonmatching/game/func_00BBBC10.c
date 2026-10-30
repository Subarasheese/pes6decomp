/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00295D40(void);
extern s32 func_002A6B20(void);
M2C_UNK func_00BBCC90(u8);                          /* extern */
extern char D_005E24B0[];
extern char D_005E24BC[];

void func_00BBBC10(void) {
    f32 var_f0;

    switch ((*(u8 *)D_005E24B0)) {                           /* irregular */
    case 1:
        func_00BBCC90((*(u8 *)D_005E24B0));
        return;
    case 2:
        func_002A6B20();
        var_f0 = (*(f32 *)D_005E24BC) + 1.0f;
block_11:
        (*(f32 *)D_005E24BC) = var_f0;
        return;
    case 3:
        func_002A6B20();
        var_f0 = (*(f32 *)D_005E24BC) + 1.0f;
        goto block_11;
    case 4:
        func_002A6B20();
        var_f0 = (*(f32 *)D_005E24BC) + 1.0f;
        goto block_11;
    case 5:
        func_00295D40();
        func_002A6B20();
        var_f0 = (*(f32 *)D_005E24BC) + 1.0f;
        goto block_11;
    }
}
