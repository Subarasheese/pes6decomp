/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 *func_008580D0(void);
extern s32 func_00857F50(void), func_002DE260(void), func_002DE880(s32), func_002DD700(void);
extern s32 func_002DD360(s32), func_002DEA70(void), func_002DD4C0(void), func_002DD670(void),
    func_002DDA00(void);
extern int printf(const char *, ...);
extern u32 D_003EA350;
extern s32 D_003E9D60;
extern const char D_00889420[], D_00889440[];

s32 func_0085B520(void) {
    s32 *interfaceId = func_008580D0();
    switch (D_003EA350) {
    case 5:
        func_00857F50();
        func_002DE260();
        printf(D_00889420);
        func_002DE880(*interfaceId);
        func_002DD700();
        --D_003EA350;
        /* fall through */
    case 4:
        if (!func_002DD360(func_002DEA70()))
            break;
        --D_003EA350;
        /* fall through */
    case 3:
        --D_003EA350;
        /* fall through */
    case 2:
        func_002DD4C0();
        --D_003EA350;
        /* fall through */
    case 1:
        if (func_002DD670() >= 0)
            --D_003EA350;
        /* fall through */
    default:
        break;
    case 0:
        func_002DDA00();
        D_003E9D60 = 0;
        D_003EA350 = 0;
        printf(D_00889440);
        return 1;
    }
    return 0;
}
