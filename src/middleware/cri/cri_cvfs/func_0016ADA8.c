/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (allocCvFsHn).
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
typedef struct {
    CVFSDevice *device;
    void *fd;
} CVFSHandle;
extern CVFSHandle D_0050E440[40];

CVFSHandle *func_0016ADA8(void) {
    Sint32 i;
    for (i = 0; i < 40; i++) {
        if (D_0050E440[i].fd == 0) {
            break;
        }
    }

    if (i == 40) {
        return 0;
    }
    return &D_0050E440[i];
}
