/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00261150(M2C_UNK, f32 *, s16, s16, s16, s16); /* extern */
extern char D_0058D348[];
extern char D_0058D34A[];
extern char D_0058D350[];
extern char D_0058D352[];
extern char D_0058D370[];
extern char D_0058D374[];

void func_002610B0(void) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = (f32) (*(s16 *)D_0058D350) / (f32) (*(s16 *)D_0058D348);
    (*(f32 *)D_0058D370) = temp_f1;
    temp_f1_2 = (f32) (*(s16 *)D_0058D352) / (f32) (*(s16 *)D_0058D34A);
    (*(f32 *)D_0058D374) = temp_f1_2;
    if ((temp_f1 != 1.0f) || (temp_f1_2 != 1.0f)) {
        func_00261150(0x3F800000, ((void *)D_0058D370), (*(s16 *)D_0058D34A), (*(s16 *)D_0058D352), (*(s16 *)D_0058D348), (*(s16 *)D_0058D350));
    }
}
