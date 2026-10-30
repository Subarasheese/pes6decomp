/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CA1B0(void);
extern void func_00278400(void);
M2C_UNK func_00287C00();                            /* extern */
M2C_UNK func_0028C320(M2C_UNK);                     /* extern */
M2C_UNK func_0093FDF0();                            /* extern */
M2C_UNK func_0099D520(M2C_UNK *);                   /* extern */
M2C_UNK func_009A0F10();                            /* extern */
s32 func_00B29E20();                                /* extern */
M2C_UNK func_00BEC040();                            /* extern */
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_00591C09[];
extern char D_00591EF6[];
extern char D_00591EF7[];
extern char D_00591EF8[];
extern char D_00591EF9[];
extern char D_00591EFA[];
extern char D_00591EFB[];
extern char D_00591EFC[];

void func_009A0DA0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_s1;

    if (((*(u8 *)D_00591EF6) != 0) || ((*(u8 *)D_00591EF7) != 0)) {
        func_009A0F10();
    }
    if (((*(u8 *)D_00591EF8) != (*(u8 *)D_00591EFA)) || ((*(u8 *)D_00591EF9) != (*(u8 *)D_00591EFB))) {
        func_0028C320(0);
        func_0028C320(1);
    }
    func_00287C00();
    func_00BEC040();
    func_002CA1B0();
    if (((*(u8 *)D_00591C09) == 5) && (func_00B29E20() != 0)) {
        var_a0 = 0;
        var_v1 = ((void *)D_005900B0);
        do {
            if (M2C_FIELD(M2C_FIELD(var_v1, void **, 4), u8 *, 0x2C) == 0) {
                M2C_FIELD(var_v1, s8 *, 0x16) = 0;
                M2C_FIELD(var_v1, s16 *, 0x18) = 0;
            }
            var_a0 += 1;
            var_v1 += 0x240;
        } while (var_a0 < 0xB);
    }
    var_s0 = ((void *)D_0058E7F0);
    var_s1 = 0;
    do {
        func_0099D520(var_s0);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
    func_00278400();
    if ((*(u8 *)D_00591EFC) != 0) {
        func_0093FDF0();
        (*(u8 *)D_00591EFC) = 0;
    }
}
