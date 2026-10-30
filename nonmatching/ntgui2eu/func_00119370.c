/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


s32 func_0011A0F0();                                /* extern */
M2C_UNK func_0011AAB4();                            /* extern */
M2C_UNK func_0011BFE0(s32, void *);                 /* extern */
M2C_UNK func_0011BFF8(s32, void *);                 /* extern */
M2C_UNK func_0011C000(s32, void *);                 /* extern */
M2C_UNK func_0011C010(s32, void *);                 /* extern */
M2C_UNK func_0011C018(s32, void *);                 /* extern */
s32 func_0011DEC0(s32, s32, s32, s32);              /* extern */
s32 func_0011DEF8(s32, s32, s32);                   /* extern */
M2C_UNK func_00199E48(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199F50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199FA8(s32);                         /* extern */
M2C_UNK func_00199FD8(s32, s128);                   /* extern */
M2C_UNK func_00199FF0(s32);                         /* extern */
M2C_UNK func_0019A140(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_005F8E00[];
extern char D_005F8ED0[];
extern char D_005F8EE8[];
extern void *D_006024F0;
extern s32 D_006024FC;

s32 func_00119370(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v0;

    M2C_FIELD(D_006024F0, s32 *, 0x564) = arg1;
    M2C_FIELD(D_006024F0, s32 *, 0x560) = arg2;
    var_v0 = 1;
    if (func_0011A0F0() >= 4) {
        func_0011AAB4();
        func_0011BFE0(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x110);
        func_0011BFF8(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x60);
        func_0011C010(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x70);
        M2C_FIELD(D_006024F0, s32 *, 8) = 0;
        M2C_FIELD(D_006024F0, f32 *, 0x1C) = (f32) M2C_FIELD(D_006024F0, f32 *, 0x60);
        M2C_FIELD(D_006024F0, f32 *, 0x20) = (f32) M2C_FIELD(D_006024F0, f32 *, 0x64);
        M2C_FIELD(D_006024F0, f32 *, 0x24) = (f32) M2C_FIELD(D_006024F0, f32 *, 0x1C);
        M2C_FIELD(D_006024F0, f32 *, 0x28) = (f32) M2C_FIELD(D_006024F0, f32 *, 0x20);
        func_00199E48(M2C_FIELD(D_006024F0, s32 *, 0x564), 0);
        func_00199F50(M2C_FIELD(D_006024F0, s32 *, 0x564), 0);
        func_00199FD8(M2C_FIELD(D_006024F0, s32 *, 0x564), (*(s128 *)D_005F8E00));
        func_0019A140(M2C_FIELD(D_006024F0, s32 *, 0x564), 0x47, 0);
        func_0019A140(M2C_FIELD(D_006024F0, s32 *, 0x564), 0x42, 0x44);
        func_00199FF0(M2C_FIELD(D_006024F0, s32 *, 0x564));
        func_00199FA8(M2C_FIELD(D_006024F0, s32 *, 0x564));
        if (D_006024FC == 1) {
            D_006024FC = func_0011DEF8(M2C_FIELD(D_006024F0, s32 *, 4), M2C_FIELD(D_006024F0, s32 *, 0x564), M2C_FIELD(D_006024F0, s32 *, 0x560));
        } else {
            temp_v0 = func_0011DEC0(M2C_FIELD(D_006024F0, s32 *, 4), M2C_FIELD(D_006024F0, s32 *, 0x564), M2C_FIELD(D_006024F0, s32 *, 0x560), arg0);
            D_006024FC = temp_v0;
            if (temp_v0 == 1) {
                func_0019DBD0(((void *)D_005F8ED0), ((void *)D_005F8EE8), 0x26B);
            }
        }
        var_v0 = -1;
        if (D_006024FC != -1) {
            func_0011C000(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x60);
            func_0011C018(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x70);
            var_v0 = 1;
        }
    }
    return var_v0;
}
