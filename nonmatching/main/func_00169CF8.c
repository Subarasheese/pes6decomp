/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_00169868(void);
M2C_UNK func_00168FC8();                            /* extern */
M2C_UNK func_001693F0();                            /* extern */
M2C_UNK func_00169578();                            /* extern */
M2C_UNK func_00169660();                            /* extern */
M2C_UNK ADXT_ExecRdErrChk(void *);                      /* extern */
M2C_UNK ADXT_ExecRdCompChk(void *);                      /* extern */
extern char D_003C9228[];

void func_00169CF8(void *arg0) {
    s8 temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C9228));
        return;
    }
    temp_v1 = M2C_FIELD(arg0, s8 *, 1);
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00169578();
        break;
    case 1:
        func_00168FC8();
        break;
    case 2:
        func_001693F0();
        break;
    case 4:
        func_00169660();
        break;
    case 5:
        func_00169868();
        break;
    }
    ADXT_ExecRdCompChk(arg0);
    ADXT_ExecRdErrChk(arg0);
}
