/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern void printf(const char *, ...);
void func_002DACD8(char *p) {
    printf("-----------------------\n");
    printf("attach_ifc       : \"%s\"\n", p);
    printf("attach_dev       : \"%s\"\n", p + 0x100);
    printf("dhcp_host_name   : \"%s\"\n", p + 0x200);
    printf("address          : \"%s\"\n", p + 0x300);
    printf("netmask          : \"%s\"\n", p + 0x400);
    printf("gateway          : \"%s\"\n", p + 0x500);
    printf("dns1_address     : \"%s\"\n", p + 0x600);
    printf("dns2_address     : \"%s\"\n", p + 0x700);
    printf("phone_numbers1   : \"%s\"\n", p + 0x800);
    printf("phone_numbers2   : \"%s\"\n", p + 0x900);
    printf("phone_numbers3   : \"%s\"\n", p + 0xA00);
    printf("auth_name        : \"%s\"\n", p + 0xB00);
    printf("auth_key         : \"%s\"\n", p + 0xC00);
    printf("peer_name        : \"%s\"\n", p + 0xD00);
    printf("vendor           : \"%s\"\n", p + 0xE00);
    printf("product          : \"%s\"\n", p + 0xF00);
    printf("chat_additional  : \"%s\"\n", p + 0x1000);
    printf("outside_number   : \"%s\"\n", p + 0x1100);
    printf("outside_delay    : \"%s\"\n", p + 0x1200);
    printf("ifc_type         : \"%d\"\n", *(int *)(p + 0x1300));
    printf("mtu              : \"%d\"\n", *(int *)(p + 0x1304));
    printf("ifc_idle_timeout : \"%d\"\n", *(int *)(p + 0x1308));
    printf("dev_type         : \"%d\"\n", *(int *)(p + 0x130C));
    printf("phy_config       : \"%d\"\n", *(int *)(p + 0x1310));
    printf("dialing_type     : \"%d\"\n", *(int *)(p + 0x1314));
    printf("dev_idle_timeout : \"%d\"\n", *(int *)(p + 0x1318));
    printf("dhcp             : \"%d\"\n", *(unsigned char *)(p + 0x1320));
    printf("dns1_nego        : \"%d\"\n", *(unsigned char *)(p + 0x1321));
    printf("dns2_nego        : \"%d\"\n", *(unsigned char *)(p + 0x1322));
    printf("f_auth           : \"%d\"\n", *(unsigned char *)(p + 0x1323));
    printf("auth             : \"%d\"\n", *(unsigned char *)(p + 0x1324));
    printf("pppoe            : \"%d\"\n", *(unsigned char *)(p + 0x1325));
    printf("prc_nego         : \"%d\"\n", *(unsigned char *)(p + 0x1326));
    printf("acc_nego         : \"%d\"\n", *(unsigned char *)(p + 0x1327));
    printf("accm_nego        : \"%d\"\n", *(unsigned char *)(p + 0x1328));
    printf("-----------------------\n");
}
