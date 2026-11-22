/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (getDevice).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned int size_t;
typedef int s32;
typedef s32 strlen_t;
typedef unsigned int Uint32;
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

CVFSDevice *func_0016A8B0(const Char8 *name) {
    strlen_t len = func_001C80F0(name);
    Uint32 i;
    for (i = 0; i < 32; i++) {
        if (func_001C83D8(name, &D_0050E580[i].name, len) == 0) {
            return D_0050E580[i].device;
        }
    }

    return 0;
}
