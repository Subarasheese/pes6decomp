/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC3FB0(M2C_UNK, s32, M2C_UNK *);     /* extern */
extern s32 D_003E7D84;
extern char D_00CE3F40[];
extern char D_00CE4078[];

void func_00B9ACC0(void) {
    switch ((*(s32 *)D_00CE4078)) {                           /* switch 1; irregular */
    case 0x20:                                      /* switch 1 */
        if (D_003E7D84 != M2C_FIELD(((void *)D_00CE3F40), s32 *, 4)) {
            D_003E7D84 = M2C_FIELD(((void *)D_00CE3F40), s32 *, 4);
            switch (M2C_FIELD(((void *)D_00CE3F40), s32 *, 4)) { /* switch 2; irregular */
            case 0x53:                              /* switch 2 */
                func_00BC3FB0(3, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                return;
            default:                                /* switch 2 */
                if (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0xC) != 1) {
                    func_00BC3FB0(3, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                    return;
                }
                func_00BC3FB0(1, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                return;
            case 0x73:                              /* switch 2 */
            case 0x62:                              /* switch 2 */
                if ((M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) == 0) && (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x20) == 2)) {
                    func_00BC3FB0(2, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                    return;
                }
                func_00BC3FB0(3, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                return;
            case 0x93:                              /* switch 2 */
            case 0x92:                              /* switch 2 */
                if ((M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) == 0) && (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x20) == 2)) {
                    func_00BC3FB0(0x100002, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                    return;
                }
                func_00BC3FB0(0x100003, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                return;
            case 0xA2:                              /* switch 2 */
                if ((M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) == 0) && (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x20) == 2)) {
                    func_00BC3FB0(2, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                    return;
                }
                func_00BC3FB0(3, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
                return;
            }
        } else {
        case 0x30:                                  /* switch 1 */
        case 0x10:                                  /* switch 1 */
        case 0x0:                                   /* switch 1 */
            return;
        }
        break;
    case 0x40:                                      /* switch 1 */
        func_00BC3FB0(3, (*(s32 *)D_00CE4078), ((void *)D_00CE3F40));
        break;
    }
}
