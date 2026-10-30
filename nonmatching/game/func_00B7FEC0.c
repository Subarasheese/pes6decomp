/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182B30(int);
extern void func_0027A880(int);
extern u8 func_00BF9A40(void);
extern void func_00153FA0(void *);
extern void func_0017E120(int);
M2C_UNK func_001C48E8(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_009A0A90();                            /* extern */
M2C_UNK func_00B267F0();                            /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
s32 func_00B7DEA0(u8);                              /* extern */
M2C_UNK func_00BF93A0(M2C_UNK);                     /* extern */
M2C_UNK func_00C04570();                            /* extern */
M2C_UNK func_00C22C70();                            /* extern */
M2C_UNK func_00C22D70();                            /* extern */
extern void *D_003EA764;
extern void *D_003EA768;
extern char D_00591EF8[];
extern char D_00591EF9[];
extern char D_00591EFA[];
extern char D_00591EFB[];
extern M2C_UNK *D_00C9A710;
extern char D_00C9A718[];
extern char D_00C9A71C[];
extern char D_00C9A91C[];
extern M2C_UNK (*D_00CBCAB8)(s32);
extern char D_00CBCABC[];
extern M2C_UNK func_00B7FE70;

void func_00B7FEC0(void) {
    switch ((*(u8 *)D_00C9A91C)) {                           /* irregular */
    case 0:
        if (func_00B7DEA0((*(u8 *)D_00C9A91C)) != 0) {
            func_00BF93A0(1);
            func_00C04570();
            func_00C22D70();
            func_00C22C70();
            (*(u8 *)D_00C9A91C) += 1;
            return;
        }
        return;
    case 1:
        if (func_00BF9A40() != 0) {
            return;
        }
        D_00CBCAB8((*(s32 *)D_00CBCABC));
        func_0017E120(1);
        func_00182B30(1);
        func_00B267F0();
        func_00B27010(1);
        func_0027A880(1);
        func_002562B0(0xD);
        func_001C48E8(&D_00C9A710, 0, 0x218);
        (*(s32 *)D_00C9A718) = 0xFF;
        (*(s32 *)D_00C9A71C) = 0xFF;
        D_00C9A710 = NULL;
        if (D_003EA764 != NULL) {
            func_00153FA0(D_003EA764);
            D_003EA764 = NULL;
        }
        if (D_003EA768 != NULL) {
            func_00153FA0(D_003EA768);
            D_003EA768 = NULL;
        }
        func_009A0A90();
        (*(u8 *)D_00591EFA) = (*(u8 *)D_00591EF8);
        (*(u8 *)D_00591EFB) = (*(u8 *)D_00591EF9);
        (*(u8 *)D_00C9A91C) = 0;
        D_00C9A710 = &func_00B7FE70;
        break;
    }
}
