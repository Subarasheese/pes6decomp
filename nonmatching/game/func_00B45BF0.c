/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern u8 func_00BF6270(void);
extern s32 func_002079F0(void *);
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char D_00CBCB34[];
extern char D_00CBCB36[];
extern char D_00CBCB37[];

void func_00B45BF0(void **arg0) {
    s32 var_v0;

    if (func_00BF6270() != 0xFF) {
        func_00BF6270();
    }
    func_00B2ACF0(arg0);
    switch ((*(u8 *)D_00CBCB36)) {                           /* switch 1; irregular */
    case 6:                                         /* switch 1 */
        switch ((*(u8 *)D_00CBCB37)) {                       /* switch 2; irregular */
        case 27:                                    /* switch 2 */
            if (func_002079F0(M2C_FIELD(*arg0, void **, 4)) != 0) {
                func_00209A00(M2C_FIELD(*arg0, void **, 4), func_00BB1310(0x6E) & 0xFFFF, 0);
                M2C_FIELD(*arg0, s16 *, 0x18) = 0xA;
                (*(u16 *)D_00CBCB34) |= 0x10;
                return;
            }
            return;
        case 26:                                    /* switch 2 */
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                func_00209A00(M2C_FIELD(*arg0, void **, 4), func_00BB1310(0x83) & 0xFFFF, 0);
                M2C_FIELD(*arg0, s16 *, 0x18) = 0xA;
                (*(u16 *)D_00CBCB34) |= 0x10;
            }
            break;
        }
        break;
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
            if ((*(u8 *)D_00CBCB37) == 9) {
                var_v0 = func_00BB1310(0x6F);
            } else {
                var_v0 = func_00BB1310(0x84);
            }
            func_00209A00(M2C_FIELD(*arg0, void **, 4), var_v0 & 0xFFFF & 0xFFFF, 0);
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        }
        break;
    }
}
