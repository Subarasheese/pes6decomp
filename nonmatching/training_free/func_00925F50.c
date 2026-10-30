/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
M2C_UNK func_0099DC50();                            /* extern */
M2C_UNK func_0099DC70();                            /* extern */
M2C_UNK func_0099DC90();                            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
extern char D_00591DC4[];
extern char D_00591DD1[];
extern char D_00591E14[];

void func_00925F50(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    u8 temp_s0;

    temp_s2 = (*(s32 *)D_00591DC4);
    temp_s1 = (*(s32 *)D_00591E14);
    temp_s0 = (*(u8 *)D_00591DD1);
    (*(u8 *)D_00591DD1) = 1;
    func_0099DC70();
    func_0099DC90();
    var_s3 = 0;
    if (arg0 > 0) {
        do {
            (*(s32 *)D_00591E14) = 0;
            (*(s32 *)D_00591DC4) += 1;
            func_00AD0A20();
            Pes6Ball_Update();
            var_s3 += 1;
        } while (var_s3 < arg0);
    }
    func_0099DC50();
    (*(u8 *)D_00591DD1) = temp_s0;
    (*(s32 *)D_00591E14) = temp_s1;
    (*(s32 *)D_00591DC4) = temp_s2;
}
