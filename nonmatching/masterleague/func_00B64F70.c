/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5750();                            /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00986C50();                            /* extern */
M2C_UNK func_00B653A0();                            /* extern */
M2C_UNK func_00B66AB0();                            /* extern */
extern s32 D_003EAED0;
extern char D_003FB114[];
extern char D_003FB118[];

void func_00B64F70(void) {
    if (D_003EAED0 != 0) {
        func_00B66AB0();
        func_00B653A0();
        if (D_003EAED0 != 0) {
            func_0096DA00(D_003EAED0);
            D_003EAED0 = 0;
        }
        func_001D5C40(0x1031E);
        func_00986C50();
        func_001A5750();
        (*(s32 *)D_003FB114) = 0;
        (*(s32 *)D_003FB118) = 0;
    }
}
