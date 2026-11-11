/* Normalize the signed global state queried by the shared getter. */
extern int Pes6SaveData_GetUnavailableFlag(void);
int Pes6SaveData_IsUnavailable(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}
