/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D430[];
extern char D_0058D434[];
extern char D_0058D438[];
extern char D_0058D439[];
extern char D_0058D43A[];
extern char D_0058D43B[];
extern char D_0058D43C[];
extern char D_0058D43D[];
extern char D_0058D43E[];
extern char D_0058D43F[];

s32 func_002659F0(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x1CA) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 0xC) {
        return 0;
    }
    if (arg2 == NULL) {
        return 0;
    }
    (*(s32 *)D_0058D430) = arg0;
    (*(s32 *)D_0058D434) = arg1;
    (*(u8 *)D_0058D438) = M2C_FIELD(arg2, u8 *, 0);
    (*(u8 *)D_0058D439) = M2C_FIELD(arg2, u8 *, 1);
    (*(u8 *)D_0058D43A) = M2C_FIELD(arg2, u8 *, 2);
    (*(u8 *)D_0058D43B) = M2C_FIELD(arg2, u8 *, 3);
    (*(u8 *)D_0058D43C) = M2C_FIELD(arg2, u8 *, 4);
    (*(u8 *)D_0058D43D) = M2C_FIELD(arg2, u8 *, 5);
    (*(u8 *)D_0058D43E) = M2C_FIELD(arg2, u8 *, 6);
    (*(u8 *)D_0058D43F) = M2C_FIELD(arg2, u8 *, 7);
    return 1;
}
