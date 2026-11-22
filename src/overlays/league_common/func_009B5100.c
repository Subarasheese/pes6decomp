/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_009B3400(void);
extern void func_009B4A50(void);
extern void func_009B4C50(void);
extern void func_009B4EE0(void);
extern void **func_009B7F90(void);

void func_009B5100(void) {
    void **resource;

    resource = func_009B7F90();
    if (resource != 0) {
        *resource = func_001D5A10(0x102B0);
        func_009B4EE0();
        func_009B4C50();
        func_009B4A50();
        func_009B3400();
    }
}
