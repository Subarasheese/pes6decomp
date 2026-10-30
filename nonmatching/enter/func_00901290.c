/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00900D20();                            /* extern */
M2C_UNK func_00900F50(M2C_UNK);                     /* extern */
M2C_UNK func_0090A130(void *);                      /* extern */
M2C_UNK func_0090A230(void *, void *);              /* extern */
M2C_UNK func_0090A410(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
extern s8 **Pes6Ball_Current;
extern char D_0092AFE0[];
extern char D_0092F0FA[];
extern char D_0092F258[];

s32 func_00901290(void) {
    void *temp_a0;

    func_00900F50(0);
    func_00900F50(1);
    func_00900D20();
    **Pes6Ball_Current = 1;
    func_0090A410(0x33, 0xFF, -1, 1, (f32) (*(s16 *)D_0092F0FA));
    temp_a0 = ((void *)D_0092AFE0) + ((*(s16 *)D_0092F258) * 0xC);
    func_0090A230(temp_a0, temp_a0 + 4);
    func_0090A130(((void *)D_0092AFE0) + ((*(s16 *)D_0092F258) * 0xC) + 8);
    return 1;
}
