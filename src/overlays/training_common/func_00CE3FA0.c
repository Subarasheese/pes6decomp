/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    void *work;
    void *initial;
    s32 count;
} TrainingBuffers;
extern void *Pes6Heap_Alloc(s32 a, s32 size);
extern void *func_001C4730(void *dst, const void *src, u32 n);
void *func_00CE3FA0(TrainingBuffers *record, s32 count, void *values) {
    void *work;
    void *initial;
    if (count <= 0) {
        return 0;
    }
    work = Pes6Heap_Alloc(4, count);
    initial = Pes6Heap_Alloc(4, count);
    record->initial = initial;
    func_001C4730(initial, values, count * 4);
    record->work = work;
    record->count = count;
    return work;
}
