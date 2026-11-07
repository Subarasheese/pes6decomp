/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017A780(s32);                         /* extern */
M2C_UNK func_0017AA60(s32);                         /* extern */
M2C_UNK func_0017AC60(s32);                         /* extern */
M2C_UNK func_0017AFE0(s32);                         /* extern */
s32 func_001B4850(s32);                             /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001F8860(s32);                         /* extern */
M2C_UNK func_0020B4D0(s32);                         /* extern */
M2C_UNK func_00210E70(s32);                         /* extern */
M2C_UNK func_00237E90(s32);                         /* extern */
M2C_UNK func_0023A910(s32);                         /* extern */
M2C_UNK func_002404C0(s32);                         /* extern */
M2C_UNK func_00262BD0(s32);                         /* extern */
M2C_UNK func_002684E0(s32);                         /* extern */
s32 func_002CBE20(s32);                             /* extern */
M2C_UNK func_002D4D00(s32);                         /* extern */
M2C_UNK func_002F79A0(s32);                         /* extern */
M2C_UNK func_00308410(s32);                         /* extern */
M2C_UNK func_003618F0(s32);                         /* extern */
extern char D_00510FD0[];
extern char D_00510FD4[];
extern char D_00510FD8[];
extern char D_00510FDC[];
extern char D_00510FE4[];

void func_0017A3C0(void) {
    switch ((*(s32 *)D_00510FD0)) {                           /* irregular */
    case 0x0:
        if (func_001B4850((*(s32 *)D_00510FD0)) != 0) {
            (*(s32 *)D_00510FD0) = 1;
            (*(s32 *)D_00510FD4) = 0;
            func_001C48E8(((void *)D_00510FD8), 0, 0x10);
        }
        break;
    case 0x1:
        if (func_002CBE20((*(s32 *)D_00510FD0)) == 1) {
            (*(s32 *)D_00510FD0) = 2;
            (*(s32 *)D_00510FD4) = 0;
            func_001C48E8(((void *)D_00510FD8), 0, 0x10);
        }
        break;
    case 0x2:
        func_0017AA60((*(s32 *)D_00510FD0));
        break;
    case 0x3:
        func_0017A780((*(s32 *)D_00510FD0));
        break;
    case 0x4:
        func_002404C0((*(s32 *)D_00510FD0));
        break;
    case 0xA:
        func_0020B4D0((*(s32 *)D_00510FD0));
        break;
    case 0xB:
        func_002684E0((*(s32 *)D_00510FD0));
        break;
    case 0x8:
        func_001F8860((*(s32 *)D_00510FD0));
        break;
    case 0x5:
        func_002F79A0((*(s32 *)D_00510FD0));
        break;
    case 0x9:
        func_00237E90((*(s32 *)D_00510FD0));
        break;
    case 0xD:
        func_0023A910((*(s32 *)D_00510FD0));
        break;
    case 0xC:
        func_003618F0((*(s32 *)D_00510FD0));
        break;
    case 0x6:
        func_002D4D00((*(s32 *)D_00510FD0));
        break;
    case 0x7:
        func_00210E70((*(s32 *)D_00510FD0));
        break;
    case 0xE:
        func_00262BD0((*(s32 *)D_00510FD0));
        break;
    case 0x64:
        func_0017AC60((*(s32 *)D_00510FD0));
        break;
    case 0x65:
        func_0017AFE0((*(s32 *)D_00510FD0));
        break;
    case 0xF:
        func_00308410((*(s32 *)D_00510FD0));
        break;
    }
    (*(s32 *)D_00510FD4) += 1;
    (*(s32 *)D_00510FDC) += 1;
    (*(s32 *)D_00510FE4) += 1;
}
