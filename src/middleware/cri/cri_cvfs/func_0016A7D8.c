/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (addDevice).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned int size_t;
typedef signed int Sint32;
typedef char Char8;
typedef struct {
    void (*ExecServer)();
    void (*EntryErrFunc)();
    Sint32 (*GetFileSize)();
    void (*unkC)();
    void *(*Open)(Char8 *device_name, void *, Sint32);
    void (*Close)(void *fd);
    Sint32 (*Seek)(void *fd, Sint32 offset, Sint32 whence);
    Sint32 (*Tell)(void *fd);
    Sint32 (*ReqRd)(void *fd, Sint32 len, void *buf);
    void (*unk24)();
    void (*StopTr)();
    Sint32 (*GetStat)(void *fd);
    void (*GetSctLen)();
    void (*unk34)();
    void (*GetNumTr)();
    void (*unk3C)();
    void (*IsExistFile)();
    void (*unk44)();
    void (*unk48)();
    void (*unk4C)();
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    Sint32 (*OptFn1)();
    void (*unk64)();
} CVFSDevice;
extern size_t func_001C80F0(const char *s);
typedef struct {
    CVFSDevice *device;
    Char8 name[12];
} CVFSNamedDevice;
extern CVFSNamedDevice D_0050E580[32];
extern CVFSDevice *func_0016A8B0(const Char8 *name);
extern void func_0016A948(Char8 *str);

CVFSDevice *func_0016A7D8(const Char8 *device_name, CVFSDevice *(*device_provider)()) {
    CVFSDevice *device;
    Sint32 i = 0;
    func_0016A948(device_name);
    device = device_provider();
    if (func_0016A8B0(device_name) != 0) {
        return device;
    }
    for (i = 0; i < 32; i++) {
        if (D_0050E580[i].name[0] == '\0') {
            break;
        }
    }

    if (i == 32) {
        return 0;
    }
    D_0050E580[i].device = device;
    memcpy(D_0050E580[i].name, device_name, func_001C80F0(device_name) + 1);
    return device;
}
