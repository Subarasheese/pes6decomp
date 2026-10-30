/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002EBEF0(void *);
extern void *D_00CFFCFC;

s32 func_00CEAD80(void) {
    if (D_00CFFCFC == NULL) {
        return 0;
    }
    return func_002EBEF0(D_00CFFCFC) == 0;
}
