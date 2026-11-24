/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
typedef struct {
    u8 reserved[2], compressed, reserved3;
    u32 packed, unpacked;
    u8 reservedC[0x14];
    u8 data[1];
} FileBlock;
extern void *func_0017F560(FileJob *job, s32 slot, u32 bytes);
extern void func_0017F4D0(FileJob *job, s32 slot);
extern void *func_001C4730(void *dest, const void *source, u32 size);
extern s32 func_0014AD10(const void *input, void *output, u64 size, u64 *capacity);
void func_00180040(FileJob *job) {
    FileBlock *header = job->buffers[0];
    u8 *data = header->data;
    if (header->compressed == 1) {
        u64 size;
        void *dst;
        func_0017F560(job, 1, header->unpacked);
        dst = job->buffers[1];
        size = header->unpacked;
        func_0014AD10(data, dst, header->packed, &size);
    } else {
        func_0017F560(job, 1, header->packed);
        func_001C4730(job->buffers[1], data, header->packed);
    }
    func_0017F4D0(job, 0);
}
