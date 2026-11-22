/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (isExistDev).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef int s32;
typedef s32 strlen_t;
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
    Char8 name[12];
} CVFSNamedDevice;
extern CVFSNamedDevice D_0050E580[32];

Sint32 func_0016AB48(const Char8 *device_name, strlen_t device_name_length) {
    Sint32 i;
    for (i = 0; i < 32; i++) {
        if (func_001C83D8(device_name, D_0050E580[i].name, device_name_length) == 0) {
            return 1;
        }
    }

    return 0;
}
