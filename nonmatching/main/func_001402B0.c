/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK func_0013A6C0();                            /* extern */
M2C_UNK func_0013B0B0();                            /* extern */
M2C_UNK func_0013B780();                            /* extern */
M2C_UNK func_0013B800();                            /* extern */
M2C_UNK func_0013BE20();                            /* extern */
M2C_UNK func_0013DAE0();                            /* extern */
M2C_UNK func_0013E1C0();                            /* extern */
M2C_UNK func_00140590(s32 *);                       /* extern */
s32 func_0014AAA0(M2C_UNK);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_004FD690[];
extern char D_004FDBF0[];
extern char D_004FDBF1[];
extern char D_004FDBF2[];
extern char D_004FDBF3[];
extern char D_004FDBF8[];
extern char D_004FDC00[];
extern char D_004FDC04[];
extern char D_004FDC0C[];
extern char D_004FDC10[];
extern char D_004FDC11[];
extern char D_004FDC12[];
extern char D_004FDC13[];
extern char D_004FDC14[];
extern char D_004FDC50[];
extern char D_004FDC54[];

void func_001402B0(s32 arg0) {
    func_001C48E8(((void *)D_004FD690), 0, 0x5F0);
    (*(s32 *)D_004FDBF8) = 2;
    (*(s8 *)D_004FDBF0) = 0;
    (*(s8 *)D_004FDC13) = 1;
    (*(s8 *)D_004FDBF1) = 0;
    (*(s8 *)D_004FDC10) = 0;
    (*(s8 *)D_004FDBF2) = 0;
    (*(s8 *)D_004FDBF3) = 0;
    (*(s32 *)D_004FDC0C) = 0;
    (*(s32 *)D_004FDC50) = 0;
    (*(s32 *)D_004FDC54) = -1;
    (*(s8 *)D_004FDC11) = 1;
    (*(s8 *)D_004FDC12) = 1;
    (*(s32 *)D_004FDC14) = func_0014AAA0(1);
    (*(s32 *)D_004FDC00) = arg0;
    if ((*(s32 *)D_004FDC04) == 0) {
        func_00140590(((void *)D_004FDC14));
    }
    FlushCache(0);
    func_0013DAE0();
    func_0013A6C0();
    func_0013BE20();
    func_0013E1C0();
    func_0013B800();
    func_0013B780();
    func_0013B0B0();
}
