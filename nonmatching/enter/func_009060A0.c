/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00152370(u8, u8, u8, M2C_UNK);         /* extern */
M2C_UNK func_00182AE0(M2C_UNK);                     /* extern */
M2C_UNK func_00182B20(M2C_UNK);                     /* extern */
M2C_UNK func_00182B30(M2C_UNK);                     /* extern */
M2C_UNK func_001A4800(M2C_UNK);                     /* extern */
void *func_001AA490(M2C_UNK);                       /* extern */
void *func_001AA4B0(M2C_UNK);                       /* extern */
M2C_UNK func_001AA5E0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001CE810();                            /* extern */
M2C_UNK func_001CE8F0(u16, u16);                    /* extern */
M2C_UNK func_001CE910(u8);                          /* extern */
M2C_UNK func_001CE920(u8, u8, u8);                  /* extern */
M2C_UNK func_00905D50(M2C_UNK);                     /* extern */
M2C_UNK func_0090A230(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0090A410(s32, M2C_UNK, M2C_UNK, f32);  /* extern */
extern char D_0092C310[];
extern char D_0092C314[];
extern char D_0092C318[];
extern char D_0092C31C[];
extern char D_0092C320[];
extern char D_0092C324[];
extern char D_0092F028[];
extern char D_0092F0FA[];

s32 func_009060A0(void) {
    void *temp_v0;
    void *temp_v0_2;

    func_00182B30(0);
    func_00182B20(0);
    func_00182AE0(0);
    func_00905D50(0);
    func_00905D50(1);
    if ((*(s32 *)D_0092F028) != 5) {
        func_0090A410(((*(s32 *)D_0092F028) - 1) & 0xFF, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    } else {
        func_0090A410(3, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    }
    func_001A4800(6);
    switch ((*(s32 *)D_0092F028)) {                           /* switch 1; irregular */
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        func_0090A230(((void *)D_0092C310), ((void *)D_0092C314));
        break;
    case 3:                                         /* switch 1 */
        func_0090A230(((void *)D_0092C318), ((void *)D_0092C31C));
        break;
    case 5:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        func_0090A230(((void *)D_0092C320), ((void *)D_0092C324));
        break;
    }
    if ((*(s32 *)D_0092F028) != 5) {
        func_001AA5E0(0, (*(s32 *)D_0092F028) - 1);
    } else {
        func_001AA5E0(0, 5);
    }
    temp_v0 = func_001AA490(0);
    func_001CE920(M2C_FIELD(temp_v0, u8 *, 1), M2C_FIELD(temp_v0, u8 *, 2), M2C_FIELD(temp_v0, u8 *, 3));
    func_001CE910(M2C_FIELD(temp_v0, u8 *, 0));
    func_001CE8F0(M2C_FIELD(temp_v0, u16 *, 4), M2C_FIELD(temp_v0, u16 *, 6));
    func_001CE810();
    temp_v0_2 = func_001AA4B0(0);
    switch ((*(s32 *)D_0092F028)) {                           /* switch 2; irregular */
    case 4:                                         /* switch 2 */
        func_00152370(0xFFU, 0xFFU, 0xFFU, 0x80);
        break;
    case 2:                                         /* switch 2 */
    case 1:                                         /* switch 2 */
        func_00152370(M2C_FIELD(temp_v0_2, u8 *, 0), M2C_FIELD(temp_v0_2, u8 *, 1), M2C_FIELD(temp_v0_2, u8 *, 2), 0x80);
        break;
    case 5:                                         /* switch 2 */
    case 3:                                         /* switch 2 */
        func_00152370(M2C_FIELD(temp_v0_2, u8 *, 0), M2C_FIELD(temp_v0_2, u8 *, 1), M2C_FIELD(temp_v0_2, u8 *, 2), 0x80);
        break;
    }
    return 1;
}
