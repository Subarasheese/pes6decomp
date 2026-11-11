/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void func_001F1EA0(void *);
void func_00AEDBD0(void **arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(*arg0);
        Pes6Heap_Free(arg0);
    }
}
