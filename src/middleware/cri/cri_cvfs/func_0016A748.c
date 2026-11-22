/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (cvFsAddDev). See THIRD_PARTY.md.
 */
#include "types.h"

typedef void (*CvErrorHandler)(void *object, const char *message, void *handle);
typedef struct {
    u8 reserved00[4];
    void (*setErrorHandler)(CvErrorHandler, void *);
} CvDevice;
typedef CvDevice *(*CvProvider)(void);
extern char *volatile D_00385088[];

extern void func_0016A550(const char *message);
extern CvDevice *func_0016A7D8(const char *name, CvProvider provider);
extern void cvFsCallUsrErrFn(void *object, const char *message, void *handle);
void func_0016A748(const char *name, CvProvider provider, s32 reserved) {
    CvDevice *device;
    (void)reserved;
    (void)D_00385088[0];
    if (name == 0) {
        func_0016A550("cvFsAddDev #1:illegal device name");
        return;
    }
    if (provider == 0) {
        func_0016A550("cvFsAddDev #2:illegal I/F func name");
        return;
    }
    device = func_0016A7D8(name, provider);
    if (device == 0) {
        func_0016A550("cvFsAddDev #3:failed added a device");
        return;
    }
    if (device->setErrorHandler != 0)
        device->setErrorHandler(cvFsCallUsrErrFn, 0);
}
