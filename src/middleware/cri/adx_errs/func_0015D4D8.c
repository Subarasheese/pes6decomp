/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_fs.c (ADXF_ReadNw32). See THIRD_PARTY.md.
 */
#include "types.h"
typedef struct StreamJoint StreamJoint;
typedef struct {
    void *reserved[3];
    void (*destroy)(StreamJoint *sj);
} StreamJointOps;
struct StreamJoint {
    StreamJointOps *ops;
};
typedef struct {
    u8 field00;
    s8 status;
    u8 sjFlag;
    u8 pad03[5];
    StreamJoint *sj;
    u8 pad0C[0x18];
    void *buffer;
    s32 bufferSize;
} FileReader;
extern void func_0015B8B8(s32 op, s32 finish, FileReader *, s32 count, void *buffer);
extern void func_0015B478(const char *);
extern void func_00159E88(void);
extern void func_00159EA0(void);
extern void func_0015B6D0(void *, s32 size);
extern s32 func_0015D228(FileReader *, s32 count, StreamJoint *);
extern StreamJoint *func_00176FC0(void *buffer, s32 size, s32);
extern s32 D_003789D8;
s32 func_0015D4D8(FileReader *file, s32 sectors, void *buffer) {
    StreamJoint *joint;
    StreamJoint *owned;
    s32 size;
    s32 result;
    func_0015B8B8(4, 0, file, sectors, buffer);
    if (file == 0) {
        func_0015B478("E9040816:'adxf' is NULL.(adxf_ReadNw32)");
        return -3;
    }
    if (sectors < 0) {
        func_0015B478("E9040817:'nsct' is negative.(adxf_ReadNw32)");
        return -3;
    }
    if (buffer == 0) {
        func_0015B478("E9040818:'buf' is NULL.(adxf_ReadNw32)");
        return -3;
    }
    if (file->status == 2)
        return 0;
    if (file->sj != 0) {
        func_0015B478("E9040821:'sj' must be NULL.(adxf_ReadNw32)");
        return -1;
    }
    size = (s32)((u32)sectors << 11);
    joint = func_00176FC0(buffer, size, 0);
    if (!joint)
        return -2;
    func_00159E88();
    file->buffer = buffer;
    file->sj = joint;
    file->bufferSize = size;
    if (D_003789D8 == 1)
        func_0015B6D0(buffer, size);
    func_00159EA0();
    result = func_0015D228(file, sectors, file->sj);
    if (result <= 0) {
        func_00159E88();
        owned = file->sj;
        if (owned != 0) {
            owned->ops->destroy(owned);
            file->sj = 0;
        }
        func_00159EA0();
    }
    file->sjFlag = 0;
    func_0015B8B8(4, 1, file, sectors, buffer);
    return result;
}
