/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
typedef struct {
    s32 resource;
    void *data;
} CachedFile;
extern CachedFile D_0051FEB4[];
extern s32 D_0051FEB0[];
void *func_00180F50(s32 resource) {
    s32 left;
    CachedFile *entry = D_0051FEB4;
    if (D_0051FEB0[0]) {
        left = 16;
        do {
            if (entry->resource == resource)
                return entry->data;
            ++entry;
        } while (--left);
        return 0;
    }
    return 0;
}
