/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_00629580(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AA0(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AE0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_00629BC0(M2C_UNK *);                   /* extern */
M2C_UNK func_0062A1F0(M2C_UNK *, s32, M2C_UNK *);   /* extern */
M2C_UNK func_0062BB30(M2C_UNK *);                   /* extern */
M2C_UNK func_0062C050(M2C_UNK *);                   /* extern */
extern char D_0065C4D0[];
extern char D_0065C640[];
extern char D_0065C641[];

void func_0062BA50(void) {
    void *temp_a0;

    if ((*(u8 *)D_0065C641) != 0) {
        M2C_FIELD(((void *)D_0065C640), s8 *, 1) = 0;
        if (M2C_FIELD(((void *)D_0065C640), u8 *, 0) == 0) {
            func_00629BC0(((void *)D_0065C4D0));
            M2C_FIELD(((void *)D_0065C640), s8 *, 0xC) = 5;
            return;
        }
        if (M2C_FIELD(((void *)D_0065C4D0), s32 *, 0) == 0) {
            func_00629580(((void *)D_0065C4D0));
            func_00629AA0(((void *)D_0065C4D0));
        }
        func_00629AE0(((void *)D_0065C4D0), ((void *)D_0065C640));
        func_0062BB30(((void *)D_0065C4D0));
        func_0062C050(((void *)D_0065C4D0));
        func_0062A1F0(((void *)D_0065C4D0), M2C_FIELD(((void *)D_0065C4D0), s32 *, 0x144), ((void *)D_0065C640));
        if (M2C_FIELD(((void *)D_0065C640), u8 *, 5) == 1) {
            M2C_FIELD(((void *)D_0065C640), u8 *, 5) = 0U;
            temp_a0 = M2C_FIELD(M2C_FIELD(((void *)D_0065C4D0), void **, 4), void **, 0x20);
            if (temp_a0 != NULL) {
                func_001D7D60(temp_a0, (s8) M2C_FIELD(((void *)D_0065C640), u8 *, 0xE));
            }
        }
    }
}
