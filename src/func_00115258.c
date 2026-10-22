/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */

/* Shared CD streaming RPC request. Field roles are inferred from its callers;
 * the trailing byte belongs to the 20-byte wire layout and is left unchanged. */
typedef struct {
    unsigned char retry_count;
    unsigned char spindle_control;
    unsigned char data_pattern;
    unsigned char reserved;
} ReadMode;

typedef struct {
    unsigned int sector;
    unsigned int sector_count;
    void *buffer;
    int command;
    ReadMode mode;
} StreamRequest;

extern int D_00372A90;
extern int _sceCd_ncmd_semid;
extern int D_00372B00;
extern StreamRequest D_00372B80;
extern char D_00373C50[];
extern const char D_003C4430[], D_003C4448[], D_003C4460[];

extern int func_00113B88(int);
extern void func_00105380(int);
extern void printf(const char *, ...);
extern void sceSifWriteBackDCache(void *, int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int,
                       void *, void *);

int func_00115258(unsigned int sector, unsigned int sector_count,
                  void *buffer, int command, const ReadMode *mode)
{
    int result;
    StreamRequest *request = &D_00372B80;
    if (!func_00113B88(15))
        return 0;
    if (D_00372A90 > 0)
        printf(D_003C4430);

    D_00372B80.sector = sector;
    request->sector_count = sector_count;
    request->buffer = buffer;
    request->command = command;
    if (mode) {
        request->mode.retry_count = mode->retry_count;
        request->mode.spindle_control = mode->spindle_control;
        request->mode.data_pattern = mode->data_pattern;
    }
    if (D_00372A90 > 0)
        printf(D_003C4448);
    sceSifWriteBackDCache(request, 20);
    if (sceSifCallRpc(D_00373C50, 9, 0, request, 20,
                      &D_00372B00, 4, 0, 0) < 0) {
        func_00105380(_sceCd_ncmd_semid);
        return 0;
    }
    if (D_00372A90 > 0)
        printf(D_003C4460);

    /* RPC writes the result through DMA: read the uncached EE alias. */
    result = *(int *)((unsigned int)&D_00372B00 | 0x20000000);
    func_00105380(_sceCd_ncmd_semid);
    return result;
}
