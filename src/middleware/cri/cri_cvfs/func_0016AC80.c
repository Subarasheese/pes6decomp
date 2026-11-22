/* compiler: ee-gcc-2.96-G0-g */
/* crowded-street/3s-decomp src/anniversary/cri/libadxe/cri_cvfs.c (cvFsOpen). See THIRD_PARTY.md. */

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
typedef struct {
    CVFSDevice *device;
    void *fd;
} CVFSHandle;
extern void func_0016A550(const Char8 *msg);
extern CVFSDevice *func_0016ABD8(Char8 *filename, Char8 *device_name, const Char8 *full_path);
extern CVFSHandle *func_0016ADA8();
extern void func_0016AE10(CVFSHandle *handle);
extern void func_0016AE20(Char8 *filename, Char8 *device_name, const Char8 *full_path);

CVFSHandle *func_0016AC80(const Char8 *fname, void *arg1, Sint32 arg2) {
    Char8 filename[0x129 + 1];
    Char8 device_name[0x129 + 1];
    CVFSHandle *fs_hn;
    CVFSDevice *device;
    if (fname == 0) {
        func_0016A550("cvFsOpen #1:illegal file name");
        return 0;
    }
    func_0016AE20(filename, device_name, fname);
    if (device_name[0] == '\0') {
        func_0016A550("cvFsOpen #1:illegal file name");
        return 0;
    }
    fs_hn = func_0016ADA8();
    if (fs_hn == 0) {
        func_0016A550(
            "cvFsOpen #3:failed handle alloced\0\0\0\0\0\0\0cvFsOpen #2:illegal device name");
        return 0;
    }
    device = func_0016ABD8(filename, device_name, fname);
    fs_hn->device = device;
    if (device == 0) {
        func_0016AE10(fs_hn);
        func_0016A550("cvFsOpen #4:device not found");
        return 0;
    }
    if (device->Open != 0) {
        fs_hn->fd = device->Open(device_name, arg1, arg2);
    } else {
        func_0016AE10(fs_hn);
        func_0016A550("cvFsOpen #5:vtbl error");
        return 0;
    }
    if (fs_hn->fd == 0) {
        func_0016AE10(fs_hn);
        func_0016A550("cvFsOpen #6:open failed");
        return 0;
    }
    return fs_hn;
}
