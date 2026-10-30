/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001CDAA0(void);
extern char D_0051FF4D[];
extern char D_005200E0[];
extern char D_005200E2[];
extern char D_005200E4[];

void func_001897F0(void) {
    f32 temp_f1;

    if ((*(u8 *)D_0051FF4D) != 0) {
        (*(s16 *)D_005200E0) += 1;
        if ((*(s16 *)D_005200E0) == ((func_001CDAA0() != 0) ? 0x384 : 0x438)) {
            (*(s16 *)D_005200E0) = 0;
        }
        if (((*(s16 *)D_005200E0) != 0) && ((*(s16 *)D_005200E2) == 0)) {
            return;
        }
        (*(s16 *)D_005200E2) += 1;
        if ((*(s16 *)D_005200E2) == 0x32) {
            (*(s16 *)D_005200E2) = 0;
        }
        temp_f1 = (*(f32 *)D_005200E4) + 0.005f;
        (*(f32 *)D_005200E4) = temp_f1;
        if (!(temp_f1 <= 1.0f)) {
            (*(f32 *)D_005200E4) = 0.005f;
        }
    }
}
