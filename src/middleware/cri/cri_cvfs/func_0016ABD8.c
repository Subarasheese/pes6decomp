/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (variousProc).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
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
extern char *strcpy(char *dest, const char *src);
extern CVFSDevice *func_0016A8B0(const Char8 *name);
extern void func_0016AF68(Char8 *arg0);
extern void func_0016C338(const Char8 *device_name, Char8 *out);

CVFSDevice *func_0016ABD8(Char8 *filename, Char8 *device_name, const Char8 *full_path) {
    CVFSDevice *device;
    if (filename[0] == '\0') {
        func_0016AF68(filename);
        if (filename[0] == '\0') {
            return 0;
        }
    }
    func_0016C338(filename, device_name);
    device = func_0016A8B0(filename);
    if (device == 0) {
        func_0016AF68(filename);
        device = func_0016A8B0(filename);
        if (device == 0) {
            return 0;
        }
        strcpy(device_name, full_path);
    }
    return device;
}
