/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6Heap_Free(void *);

void func_002F97A0(void **obj) {
    if (obj == NULL) {
        return;
    }
    Pes6Heap_Free(obj[0]);
    Pes6Heap_Free(obj);
}
