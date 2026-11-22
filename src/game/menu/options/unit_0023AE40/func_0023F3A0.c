/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001EDBA0(s32, s32);
s32 func_001EDD90(s32);
s32 func_002405A0(void **);
s32 func_008B3000(s32, s32);
s32 func_008B32E0(s32);
extern u32 D_003E74F0;
extern s32 D_003E9A34;
extern void *D_003E9A80;
extern char D_0053C360[];
extern char D_0053C364[];

void func_0023F3A0(void) {
    switch (D_003E74F0) {
    case 2:
        if (D_003E9A80 != NULL) {
            func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 4));
            func_002405A0(&D_003E9A80);
        }
        break;
    case 3:
        if (D_003E9A80 != NULL) {
            func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 0xC));
            func_002405A0(&D_003E9A80);
        }
        break;
    case 4:
        func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 8));
        func_002405A0(&D_003E9A80);
        break;
    case 6:
        if ((*(s32 *)D_0053C360) != 0) {
            func_001EDBA0(D_003E9A34, (*(s32 *)D_0053C360));
            (*(s32 *)D_0053C360) = 0;
        }
        if ((*(s32 *)D_0053C364) != 0) {
            func_001EDBA0(D_003E9A34, (*(s32 *)D_0053C364));
            (*(s32 *)D_0053C364) = 0;
        }
        if (D_003E9A34 != 0) {
            func_001EDD90(D_003E9A34);
            D_003E9A34 = 0;
        }
        break;
    case 7:
        func_008B3000(0x155, 0x4FE0);
        func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 0x10));
        func_002405A0(&D_003E9A80);
        break;
    case 8:
        if (D_003E9A80 != NULL) {
            func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 4));
            func_002405A0(&D_003E9A80);
        }
        break;
    case 9:
        if (D_003E9A80 != NULL) {
            func_008B32E0(M2C_FIELD(D_003E9A80, s32 *, 0x14));
            func_002405A0(&D_003E9A80);
        }
        break;
    }
    D_003E74F0 = 0;
}
