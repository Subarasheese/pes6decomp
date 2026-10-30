/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
s32 func_008CD7E0();                                /* extern */
M2C_UNK func_008D0870(void *, s64);                 /* extern */
M2C_UNK func_008D0B40(void *, M2C_UNK);             /* extern */
s32 func_008D1F00(s32);                             /* extern */

s32 func_008CDAF0(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s64 temp_s3;

    temp_s1 = func_008CD7E0();
    temp_s0 = func_008D1F00(arg0 + 0x480);
    switch (temp_s1) {                              /* irregular */
    case 2:
        func_0026E840(0x84028400);
        break;
    case 1:
        func_0026E840(0x84008401);
        break;
    case 5:
        func_0026E840(0x8C008005);
        break;
    case 3:
        temp_s3 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 4) << 0x30) >> 0x30;
        func_008D0870(arg0 + 0x480, temp_s3);
        func_008CAD70(arg0, temp_s3, 1, 0);
        temp_v1 = M2C_FIELD(arg0, u8 *, 4) - temp_s0;
        if ((temp_v1 >= -1) && (temp_v1 < 0xC)) {
            func_008D0B40(arg0 + 0x480, 1);
        } else {
            func_008D0B40(arg0 + 0x480, 0);
        }
        func_0026E840(0x8400F802);
        break;
    }
    return temp_s1;
}
