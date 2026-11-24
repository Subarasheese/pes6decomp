/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void func_001803A0(s32 resource, char *path, char *storage);
extern s32 func_001811B0(const char *path, s32 mode),
    func_00181060(s32 file, s32 offset, s32 origin);
extern void func_00181120(s32 file);
s32 func_00180230(s32 resource) {
    char path[256];
    s32 sectors, handle;
    func_001803A0(resource, path, path);
    handle = func_001811B0(path, 0);
    if (handle) {
        sectors = func_00181060(handle, 0, 2);
        func_00181120(handle);
        return sectors << 11;
    }
    return 0;
}
