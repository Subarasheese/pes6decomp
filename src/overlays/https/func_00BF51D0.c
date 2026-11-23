/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct {
    void *value;
    u32 reserved;
    void (*release)(void *);
} OwnedBuffer;
extern OwnedBuffer *func_00BF5240(void *registry, void *value);
extern void func_00BF5DD0(void *value);
s32 func_00BF51D0(void *registry, void **value) {
    OwnedBuffer *entry = func_00BF5240(registry, *value);
    s32 result = 0x258;
    if (entry) {
        if (entry->release)
            entry->release(entry->value);
        else
            func_00BF5DD0(*value);
        entry->value = 0;
        result = 0;
        *value = 0;
    }
    return result;
}
