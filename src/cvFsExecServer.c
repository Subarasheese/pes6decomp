/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from mk-deception (src/libadxgca/crimw/dev/adx/src/cvfs/cri_cvfs.c). */
#ifndef MKD_RUNTIME_CSTDIO_H
#define MKD_RUNTIME_CSTDIO_H

#ifndef MKD_RUNTIME_CSTDARG_H
#define MKD_RUNTIME_CSTDARG_H

typedef struct MkVaListState {
    signed char gpr;
    signed char fpr;
    unsigned short reserved;
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];

#define va_start(list, last_arg) __va_start(list, last_arg)
#define va_end(list) ((void)0)

void* __va_arg(__va_list args, int type);

#endif

#ifdef __cplusplus
extern "C" {
#endif

enum __ReadProcActions {
    __GetAChar,
    __UngetAChar,
    __TestForError,
};

typedef struct __InStrCtrl {
    char* NextChar;
    int NullCharDetected;
} __InStrCtrl;

int __StringRead(void* context, int character, int action);

int sprintf(char* output, const char* format, ...);
int vsprintf(char* output, const char* format, __va_list args);
int snprintf(char* output, unsigned long size, const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif
#ifndef MKD_RUNTIME_CSTRING_H
#define MKD_RUNTIME_CSTRING_H

#ifdef __cplusplus
extern "C" {
#endif

void* memcpy(void* destination, const void* source, unsigned long size);
void* memset(void* destination, int value, unsigned int size);
int memcmp(const void* lhs, const void* rhs, unsigned long size);
char* strcpy(char* destination, const char* source);
char* strncpy(char* destination, const char* source, unsigned long count);
char* strcat(char* destination, const char* source);
char* strncat(char* destination, const char* source, unsigned long count);
char* strchr(const char* string, int character);
char* strrchr(const char* string, int character);
char* strstr(const char* string, const char* substring);
unsigned long strlen(const char* string);
int strcmp(const char* lhs, const char* rhs);
int strncmp(const char* lhs, const char* rhs, unsigned long count);
int stricmp(const char* lhs, const char* rhs);
int strnicmp(const char* lhs, const char* rhs, unsigned long count);
char* strtok(char* string, const char* delimiters);
char* strupr(char* string);

#ifdef __cplusplus
}
#endif

#endif

#define NULL ((void*)0)

typedef enum CvFsStatus {
    CVFS_STATUS_IDLE = 0,
    CVFS_STATUS_COMPLETE = 1,
    CVFS_STATUS_TRANSFERRING = 2,
    CVFS_STATUS_ERROR = 3
} CvFsStatus;

typedef struct CvFsInterface CvFsInterface;
typedef struct CvFsObject CvFsObject;
typedef void (*CvFsErrorCallback)(void* object, const char* message,
                                  void* handle);
typedef CvFsInterface* (*CvFsInterfaceFactory)(void);

struct CvFsInterface {
    void (*ExecServer)(void);
    void (*EntryErrFunc)(CvFsErrorCallback callback, void* object);
    int (*GetFileSize)(const char* filename);
    int (*GetFreeSize)(void);
    void* (*Open)(const char* filename, void* parameter, int mode);
    void (*Close)(void* object);
    int (*Seek)(void* object, int offset, int origin);
    int (*Tell)(void* object);
    int (*ReqRd)(void* object, int sectors, void* buffer);
    int (*ReqWr)(void* object, int sectors, void* buffer);
    void (*StopTr)(void* object);
    CvFsStatus (*GetStat)(void* object);
    int (*GetSctLen)(void* object);
    void (*SetSctLen)(void* object, int sector_length);
    int (*GetNumTr)(void* object);
    int (*ChangeDir)(const char* dirname);
    int (*IsExistFile)(const char* filename);
    int (*GetNumFiles)(void);
    int (*LoadDirInfo)(const char* dirname, void* info, int count);
    int (*GetMaxByteRate)(void* object);
    int (*MakeDir)(const char* dirname);
    int (*RemoveDir)(const char* dirname);
    int (*DeleteFile)(const char* filename);
    int (*GetFileSizeEx)(const char* filename, void* parameter);
    int (*OptFn1)(void* object, int operation, int arg2, int arg3);
    int (*OptFn2)(void* object, int arg1, int arg2, int arg3);
};

struct CvFsObject {
    CvFsInterface* interface;
    void* object;
};

typedef struct CvFsDevice {
    CvFsInterface* interface;
    char name[9];
} CvFsDevice;extern const char* const volatile cvfs_build;
extern const char path_format[8];
extern const char set_default_volume_bad_device[40];
extern const char set_default_volume_bad_volume[40];
extern const char set_default_volume_no_device[36];
extern const char get_volume_info_bad_device[44];
extern const char get_volume_info_bad_volume[44];
extern const char get_volume_info_no_device[40];
extern const char delete_volume_bad_device[40];
extern const char delete_volume_bad_volume[40];
extern const char delete_volume_no_device[36];
extern const char add_volume_bad_device[40];
extern const char add_volume_bad_volume[40];
extern const char add_volume_bad_handle[40];
extern const char add_volume_no_device[36];
extern const char set_volume_bad_device[40];
extern const char set_volume_bad_handle[44];
extern const char set_volume_no_device[40];
extern const char opt2_bad_handle[28];
extern const char opt2_bad_interface[28];
extern const char opt1_bad_handle[28];
extern const char opt1_bad_interface[28];
extern const char get_device_name_bad_interface[32];
extern const char delete_file_bad_name[36];
extern const char delete_file_bad_device[40];
extern const char delete_file_no_device[36];
extern const char delete_file_bad_interface[32];
extern const char remove_dir_bad_name[40];
extern const char remove_dir_bad_device[40];
extern const char remove_dir_no_device[36];
extern const char remove_dir_bad_interface[28];
extern const char make_dir_bad_name[40];
extern const char make_dir_bad_device[36];
extern const char make_dir_no_device[32];
extern const char make_dir_bad_interface[28];
extern const char max_rate_bad_handle[36];
extern const char max_rate_bad_interface[36];
extern const char exists_bad_device[40];
extern const char exists_bad_name[40];
extern const char exists_no_device[36];
extern const char exists_bad_interface[32];
extern const char change_dir_bad_name[40];
extern const char change_dir_bad_device[40];
extern const char change_dir_no_device[36];
extern const char change_dir_bad_interface[28];
extern const char num_transfers_bad_handle[32];
extern const char num_transfers_bad_interface[28];
extern const char set_sector_bad_handle[32];
extern const char set_sector_bad_interface[28];
extern const char get_sector_bad_handle[32];
extern const char get_sector_bad_interface[28];
extern const char free_size_no_device[36];
extern const char free_size_bad_interface[32];
extern const char size_by_handle_bad_handle[48];
extern const char size_ex_bad_name[40];
extern const char size_ex_bad_device[44];
extern const char size_ex_no_device[40];
extern const char size_ex_bad_interface[32];
extern const char size_bad_name[40];
extern const char size_bad_device[40];
extern const char size_no_device[36];
extern const char size_bad_interface[32];
extern const char status_bad_handle[28];
extern const char status_bad_interface[28];
extern const char stop_bad_handle[28];
extern const char stop_bad_interface[28];
extern const char write_bad_handle[28];
extern const char write_bad_interface[24];
extern const char read_bad_handle[28];
extern const char read_bad_interface[24];
extern const char seek_bad_handle[28];
extern const char seek_bad_interface[24];
extern const char tell_bad_handle[28];
extern const char tell_bad_interface[24];
extern const char close_bad_handle[28];
extern const char close_bad_interface[24];
extern const char open_bad_name[32];
extern const char open_no_handle[36];
extern const char open_bad_device[32];
extern const char open_no_device[32];
extern const char open_bad_interface[24];
extern const char open_failed[24];
extern const char set_default_bad_device[40];
extern const char set_default_unknown_device[40];
extern const char delete_device_bad_name[36];
extern const char add_device_bad_name[36];
extern const char add_device_bad_factory[36];
extern const char add_device_failed[36];
extern CvFsErrorCallback cvfs_errfn;
extern void* cvfs_errobj;
extern int cvfs_init_cnt;
extern char D_0050E440[297];
extern char D_0050E570[9];
extern CvFsDevice D_0050E580[32];
extern CvFsObject D_0050E780[40];


void cvFsCallUsrErrFn(void* object, const char* message, void* handle);void cvFsError(const char* message);
void toUpperStr(char* string);
void prefixDeviceName(char* file, const char* device);
CvFsInterface* getDevice(const char* name);
int isExistingDevice(const char* name, int length);
void getDefaultDevice(char* name);
void splitPath(char* device, char* file, const char* path);
int callPathOption(CvFsInterface* interface);
CvFsInterface* findDevice(CvFsDevice* table, const char* name,
                                        int length);
CvFsInterface* searchDevice(CvFsDevice* table, const char* name);
int wantsDevicePrefix(CvFsDevice* table, const char* name,
                                    int length);
CvFsInterface* resolveDevice(char* device, char* file,
                                           const char* original_path);
void* allocateHandle(void);
void releaseHandle(CvFsObject* handle);
CvFsInterface* addDevice(char* name,
                                       CvFsInterfaceFactory factory);
void cvFsEntryErrFunc(CvFsErrorCallback callback, void* object);
/* TODO: [near miss] 99.74747%; device/table homes remain swapped;
 * first-predicate table capture is neutral; recover the original owner boundary. */
int cvFsGetFileSize(const char* filename);
CvFsStatus cvFsGetStat(CvFsObject* handle);


void cvFsExecServer(void)
{
    int i;
    CvFsInterface* interface;

    for (i = 0; i < 32; i++) {
        interface = D_0050E580[i].interface;
        if (interface != NULL && interface->ExecServer != NULL) {
            interface->ExecServer();
        }
    }
}
void cvFsStopTr(CvFsObject* handle);
int cvFsReqRd(CvFsObject* handle, int sectors, void* buffer);
int cvFsSeek(CvFsObject* handle, int offset, int origin);
int cvFsTell(CvFsObject* handle);
void cvFsClose(CvFsObject* handle);
CvFsObject* cvFsOpen(const char* filename, void* parameter, int mode);
void cvFsSetDefDev(char* name);
void cvFsAddDev(char* name, CvFsInterfaceFactory factory, void* init_parameter);
void cvFsCallUsrErrFn(void* object, const char* message, void* handle);
