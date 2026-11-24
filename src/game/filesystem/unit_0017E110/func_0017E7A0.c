/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_0017F4C0(void), func_0017F4B0(void), func_00181120(s32 file);
extern s32 func_00181060(s32 file, s32 offset, s32 origin),
    func_001811B0(const char *path, s32 mode);
extern void func_0017E690(s32 resource, char *path);
s32 func_0017E7A0(s32 resource) {
    char path[256];
    s32 file, sectors;
    func_0017E690(resource, path);
    func_0017F4C0();
    file = func_001811B0(path, 0);
    if (file) {
        sectors = func_00181060(file, 0, 2);
        func_00181120(file);
        func_0017F4B0();
        return sectors << 11;
    }
    func_0017F4B0();
    return 0;
}
