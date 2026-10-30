/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_002F39A0(s32);                         /* extern */
M2C_UNK func_002F3A00(s32);                         /* extern */
M2C_UNK func_002F4E10(s32);                         /* extern */
M2C_UNK func_00817930();                            /* extern */
M2C_UNK func_00817970(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00985570();                                /* extern */
extern u16 D_003EACDC;
extern char D_00A7D718[];

s32 func_009858E0(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7D718) == 0) {
        if (func_00985570() == 0) {
            return 1;
        }
        func_00817930();
        func_00817970(6, 0x6C0029);
        goto block_5;
    }
block_5:
    temp_v0 = func_002F3850((*(s32 *)D_00A7D718));
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_002F3A00((*(s32 *)D_00A7D718));
        D_003EACDC = 0;
block_17:
        return 0;
    case 2:
        func_002F2ED0((*(s32 *)D_00A7D718));
        if (((s32) D_003EACDC > 0) || (func_0081EC20(0x1000) != 0)) {
            func_002F39A0((*(s32 *)D_00A7D718));
            func_00817930();
            func_0026E840(0x84008401);
        }
        goto block_17;
    case 3:
    case 1:
        func_002F2ED0((*(s32 *)D_00A7D718));
        goto block_17;
    default:
        func_002F4E10((*(s32 *)D_00A7D718));
        (*(s32 *)D_00A7D718) = 0;
        return 1;
    }
}
