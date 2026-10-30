/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_00629580(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AA0(M2C_UNK *);                   /* extern */
M2C_UNK func_00629AE0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_00629BC0(M2C_UNK *);                   /* extern */
M2C_UNK func_0062A1F0(M2C_UNK *, s32, M2C_UNK *);   /* extern */
M2C_UNK func_0062A910(M2C_UNK *);                   /* extern */
M2C_UNK func_0062B300(M2C_UNK *);                   /* extern */
extern char D_0065C340[];
extern char D_0065C341[];
extern char D_0065C360[];

void func_0062A7D0(void) {
    if ((*(u8 *)D_0065C341) != 0) {
        M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 0;
        if (M2C_FIELD(((void *)D_0065C340), u8 *, 0) == 0) {
            func_00629BC0(((void *)D_0065C360));
            M2C_FIELD(((void *)D_0065C340), s8 *, 0xC) = 5;
            return;
        }
        if (M2C_FIELD(((void *)D_0065C360), s32 *, 0) == 0) {
            func_00629580(((void *)D_0065C360));
            func_00629AA0(((void *)D_0065C360));
        }
        func_00629AE0(((void *)D_0065C360), ((void *)D_0065C340));
        func_0062A910(((void *)D_0065C360));
        func_0062B300(((void *)D_0065C360));
        func_0062A1F0(((void *)D_0065C360), M2C_FIELD(((void *)D_0065C360), s32 *, 0x144), ((void *)D_0065C340));
        if (M2C_FIELD(((void *)D_0065C340), u8 *, 5) == 1) {
            M2C_FIELD(((void *)D_0065C340), u8 *, 5) = 0U;
            func_001D7D60(M2C_FIELD(M2C_FIELD(((void *)D_0065C360), void **, 4), void **, 0x20), (s8) M2C_FIELD(((void *)D_0065C340), u8 *, 0xE));
        }
    }
}
