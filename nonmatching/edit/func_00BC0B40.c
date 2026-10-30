/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7920(void);
M2C_UNK func_00B91440(M2C_UNK, s8, s32, s32);       /* extern */
s32 func_00BA6600(M2C_UNK, s8, s32, s32);           /* extern */
M2C_UNK func_00BC0C80(M2C_UNK *, s8, s32, s32);     /* extern */
M2C_UNK func_00BC0DC0(M2C_UNK *, s32, s32, s32, s32); /* extern */
extern char D_00CE4E40[];
extern char D_00CE4E54[];

s32 func_00BC0B40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    switch ((*(s8 *)D_00CE4E54)) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x15) = (s8) M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14);
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14) = 4;
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00BA6600(0xA, (*(s8 *)D_00CE4E54), arg2, arg1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            *M2C_FIELD(((void *)D_00CE4E40), s32 **, 0) = M2C_FIELD(((void *)D_00CE4E40), s32 *, 0x10);
            M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x15) = (s8) M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14);
            M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14) = 3;
            break;
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x15) = (s8) M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14);
            M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14) = 1;
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        func_00BC0C80(((void *)D_00CE4E40), (*(s8 *)D_00CE4E54), arg2, arg1);
        break;
    case 0:                                         /* switch 1 */
        func_00BC0DC0(((void *)D_00CE4E40), arg0, arg1, arg2, arg1);
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x15) = (s8) M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14);
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14) = 1;
        break;
    case 4:                                         /* switch 1 */
        var_s1 = M2C_FIELD(((void *)D_00CE4E40), s32 *, 4);
        func_00B91440(0x13, (*(s8 *)D_00CE4E54), arg2, arg1);
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x15) = (s8) M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14);
        M2C_FIELD(((void *)D_00CE4E40), s8 *, 0x14) = 0;
        func_001B7920();
        break;
    }
    return var_s1;
}
