/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern void func_001BC300(void);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_002DEC40(M2C_UNK *);                       /* extern */
extern char D_003AE990[];
extern char D_00591DB6[];
extern char D_0088A660[];
extern char D_0088A680[];
extern char D_008B2400[];
extern char D_008B2414[];
extern char D_008B2430[];
extern char D_008B2434[];
extern char D_008B2436[];
extern char D_008B2437[];
extern char D_008B2438[];
extern char D_008B243A[];
extern char D_008B243B[];
extern M2C_UNK func_0087ECC0;

s32 func_0087EF00(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;
    s32 *var_s2;
    s32 var_s3;

    func_001C48E8(((void *)D_008B2400), 0, 0x3C);
    (*(s32 *)D_008B2400) = 0;
    (*(s32 *)D_008B2414) = 4;
    (*(s8 *)D_008B2436) = 0;
    (*(s8 *)D_008B2434) = 0;
    (*(s8 *)D_008B2437) = 0;
    (*(s16 *)D_008B2438) = 0;
    (*(s8 *)D_008B243A) = 0;
    (*(s8 *)D_008B243B) = 0;
    func_001BC300();
    var_s3 = 0;
    var_s2 = ((void *)D_0088A660);
    var_s1 = ((void *)D_0088A680);
    var_s0 = ((void *)D_008B2400);
    do {
        M2C_FIELD(var_s0, s32 *, 0x18) = func_001BC3D0((s32) (*(s8 *)D_00591DB6), M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4), *var_s2);
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 8;
        var_s0 += 4;
    } while (var_s3 < 6);
    (*(s16 *)D_003AE990) = 0;
    (*(s32 *)D_008B2430) = func_002DEC40(&func_0087ECC0);
    return 1;
}
