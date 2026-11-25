/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_0010A6E8(const char *path, s32 flags, ...),
    func_0010AAF0(s32 handle, s32 offset, s32 origin),
    func_0010AD30(s32 handle, void *buffer, s32 bytes), func_0010A978(s32 handle);
extern void *D_003E9864, *D_003E72FC[], *D_003E7300[], *D_003E7338[];
void func_0017E9B0(void) {
    u32 slotCount;
    s32 file = func_0010A6E8("host0:ovl/release/filelist.ovl", 1, 0777);
    s32 length = func_0010AAF0(file, 0, 2);
    func_0010AAF0(file, 0, 0);
    slotCount = ((u32)D_003E7338 - (u32)D_003E7300) >> 2;
    D_003E9864 = D_003E72FC[slotCount];
    func_0010AD30(file, D_003E9864, length);
    func_0010A978(file);
}
