/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008CAD30(char *);
extern void func_008D02E0(char *);
extern void func_008D0430(char *, s32);
extern void func_008D07E0(char *);

void func_008CCF30(char *arg0) {
    if (arg0 != NULL) {
        func_008D07E0(arg0 + 0x480);
        func_008D02E0(arg0 + 0x480);
        func_008D0430(arg0 + 0x480, (s32) M2C_FIELD(arg0, u8 *, 3));
        func_008CAD30(arg0);
    }
}
