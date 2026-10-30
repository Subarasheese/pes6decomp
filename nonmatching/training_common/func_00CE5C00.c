/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CE7870(void);
extern void func_001B9C60(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_00CE3F00(s32 *);                       /* extern */
M2C_UNK func_00CE7880(M2C_UNK *);                   /* extern */
M2C_UNK func_00CEA630(M2C_UNK *);                   /* extern */
M2C_UNK func_00CECD70(M2C_UNK *);                   /* extern */
M2C_UNK func_00CED470(M2C_UNK *);                   /* extern */
M2C_UNK func_00CED660(M2C_UNK *);                   /* extern */
extern char D_00CFF3EC[];
extern char D_00CFF400[];
extern char D_00CFF420[];
extern char D_00CFF4A0[];
extern char D_00CFF4B4[];
extern void *D_00CFF500;
extern char D_00CFF504[];
extern char D_00CFF528[];

void func_00CE5C00(void) {
    if ((*(s32 *)D_00CFF4A0) != 0) {
        func_00CE3F00(((void *)D_00CFF4A0));
        func_00CECD70(((void *)D_00CFF400));
        func_00CECD70(((void *)D_00CFF3EC));
        func_00CEA630(((void *)D_00CFF420));
        func_00CE7880(((void *)D_00CFF4B4));
        func_00CE7870();
        func_001B9C60(D_00CFF500);
        func_00CED660(((void *)D_00CFF504));
        func_00CED470(((void *)D_00CFF504));
        func_002DF960((*(s32 *)D_00CFF528));
    }
}
