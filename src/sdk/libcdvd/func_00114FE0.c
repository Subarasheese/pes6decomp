/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned char u8;
extern int D_00372A90;
extern int D_00374638;
extern u8 D_003F3858[];
extern unsigned int func_00115258(unsigned int, unsigned int, void *, int, const u8 *);
extern void func_001063D8(int);
extern void printf(const char *, ...);
extern void sceSifWriteBackDCache(void *, int);

/* sceCdStRead: drain 2048-byte sectors from the active streaming request.
 * RPC results pack the sector count into the low half and the drive error into
 * the high half. Blocking reads retain the last error and sleep when a poll
 * makes no progress; nonblocking reads perform one poll. */
int func_00114FE0(unsigned int sector_count, unsigned int *buffer, unsigned int blocking, unsigned int *error_out)
{
    int *const debug_level = &D_00372A90;
    unsigned int result, sectors_returned, error_code, last_error;
    int sectors_read;

    if (*debug_level > 0)
        printf("sceCdStRead call read size= %d mode= %d\n", sector_count, blocking);
    if (D_00374638 == 0)
        return 0;
    last_error = 0;
    sectors_read = 0;
    /* Write back the destination cache lines before the IOP transfers data. */
    sceSifWriteBackDCache(buffer, sector_count << 11);
    if (blocking != 0) {
        do {
            result = func_00115258(0, sector_count - sectors_read, (char *)buffer + (sectors_read << 11), 2, D_003F3858);
            sectors_returned = result & 0xFFFF;
            error_code = result >> 16;
            sectors_read += sectors_returned;
            if (error_code != 0) {
                last_error = error_code;
                if (*debug_level > 0)
                    printf("sceCdStRead BLK Read cur_size= %d read_size= %d req_size= %d err 0x%x\n",
                                  sectors_read, sectors_returned, sector_count, error_code);
            } else if (sectors_returned == 0) {
                func_001063D8(600);
            }
        } while (sectors_read != sector_count && (error_code == 0 || sectors_returned != 0));
        if (*debug_level > 0)
            printf("sceCdStRead BLK Read Ended\n");
        *error_out = last_error;
    } else {
        result = func_00115258(0, sector_count, buffer, 2, D_003F3858);
        error_code = result >> 16;
        sectors_read = result & 0xFFFF;
        *error_out = error_code;
    }
    return sectors_read;
}
