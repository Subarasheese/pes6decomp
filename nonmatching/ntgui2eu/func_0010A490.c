/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00108420(u8);                          /* extern */
M2C_UNK func_0010FFA8();                            /* extern */
M2C_UNK func_00115154(void *);                      /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_002BA0C0[];
extern char D_002CA1C0[];
extern char D_005F7860[];

void func_0010A490(void) {
    func_0019DBD0(((void *)D_005F7860));
    func_00115154((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + (((void *)D_002BA0C0) + 0x470));
    M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x404) = 1;
    M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) = 0;
    M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C58) = (s32) (*(u8 *)D_002CA1C0);
    M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C5C) = 0;
    func_00108420((*(u8 *)D_002CA1C0));
    func_0010FFA8();
}
