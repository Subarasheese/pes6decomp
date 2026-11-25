/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 reserved[2];
    u8 references;
} Resource;
typedef struct {
    u8 slot;
} ResourceRequest;
extern Resource *D_005215F0[];
extern Resource *func_001A72F0(ResourceRequest *request);

static inline void releaseResource(Resource **slot, Resource *resource) {
    if (resource) {
        u8 references;
        *slot = 0;
        references = resource->references - 1;
        resource->references = references;
        if ((references & 0xff) <= 0)
            resource->references = 0;
    }
}

void func_001A7250(ResourceRequest *request) {
    s32 id = request->slot;
    Resource **slot = &D_005215F0[id];
    Resource *resource = *slot;
    if (resource && id < 35)
        releaseResource(slot, resource);
    resource = func_001A72F0(request);
    ++resource->references;
    *slot = resource;
}
