/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009C9200(void);
extern u8 func_009C9010(void);
u8 func_009C9110(void *);                           /* extern */
u8 func_009C9300(void *);                           /* extern */
extern void *D_00A7DD80;

u8 func_009C94C0(void) {
    u8 temp_v1;

    if (D_00A7DD80 != NULL) {
        temp_v1 = M2C_FIELD(D_00A7DD80, u8 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 4:
            return M2C_FIELD(D_00A7DD80, u8 *, 3);
        case 0:
            return func_009C9300(D_00A7DD80);
        case 1:
            return func_009C9200();
        case 2:
            return func_009C9110(D_00A7DD80);
        case 3:
            return func_009C9010();
        default:
            return 0U;
        }
    } else {
        return 2U;
    }
}
