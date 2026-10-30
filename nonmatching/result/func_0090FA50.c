/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void func_001EEE60(void *, void *);
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s16);                 /* extern */
extern char D_0091EDCC[];
extern char D_0091F508[];
extern char D_0091F50C[];
extern char D_0091F50E[];
extern char D_00921D40[];
extern char D_00921E3C[];

void func_0090FA50(s32 arg0, s16 arg1) {
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    s32 temp_s0;
    s32 temp_s1;
    void **temp_s0_2;
    void **temp_s2;
    void *temp_s3;

    temp_s1 = arg1 != 0;
    temp_s0 = arg0 * 4;
    sp5A = 0;
    sp58 = (*(s16 *)D_0091F508);
    sp5C = (*(s16 *)D_0091F50C);
    sp5E = (*(s16 *)D_0091F50E);
    temp_s3 = ((void *)D_00921D40) + temp_s0;
    if (arg1 != 0) {
        func_001EEAC0(M2C_FIELD(temp_s3, void **, 0xF4), (*(s16 *)D_0091F508));
        sp58 = 0;
        func_001EE630(M2C_FIELD(temp_s3, void **, 0xF4), &sp58);
    }
    func_001EF900(M2C_FIELD(temp_s3, void **, 0xF4), temp_s1 & 0xFF);
    if (arg1 != 0) {
        temp_s2 = ((void *)D_00921E3C) + temp_s0;
        func_001EEAC0(*temp_s2, arg1);
        sp5A = 0;
        sp58 = 0;
        func_001EE630(*temp_s2, &sp58);
    }
    temp_s0_2 = ((void *)D_00921E3C) + temp_s0;
    func_001EEE60(*temp_s0_2, ((void *)D_0091EDCC));
    func_001EF900(*temp_s0_2, temp_s1 & 0xFF);
}
