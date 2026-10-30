/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DC760(void);
extern void func_001D7F10(void *);
extern void *D_008A4350;
extern void *D_008A4358;
extern void *D_008A4360;

void func_00821460(void) {
    func_002DC760();
    if (D_008A4350 != NULL) {
        func_001D7F10(D_008A4350);
        D_008A4350 = NULL;
    }
    if (D_008A4358 != NULL) {
        func_001D7F10(D_008A4358);
        D_008A4358 = NULL;
    }
    if (D_008A4360 != NULL) {
        func_001D7F10(D_008A4360);
        D_008A4360 = NULL;
    }
}
