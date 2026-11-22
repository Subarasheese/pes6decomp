/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"

s32 func_008629D0(NetlibConnection *connection) {
    s32 status = 0;
    s32 event = 0;
    NetlibPacket *packet = &connection->packets[5];
    switch (packet->tag) {
    case 0x0004:
    case 0x0005:
    case 0x4401:
    case 0x0006:
        status = func_00862040(connection, packet);
        break;
    case 0x3002:
    case 0x3004:
        status = func_00861F40(connection, packet, 5);
        break;
    case 0x4101:
    case 0x4201:
    case 0x4203:
    case 0x4211:
    case 0x4212:
    case 0x4213:
    case 0x4220:
    case 0x4221:
    case 0x4222:
    case 0x4301:
    case 0x4302:
    case 0x4303:
    case 0x4306:
    case 0x4305:
    case 0x4321:
    case 0x4326:
    case 0x4311:
    case 0x432B:
    case 0x4322:
    case 0x4327:
    case 0x4324:
    case 0x4330:
    case 0x4331:
    case 0x4341:
    case 0x4342:
    case 0x4344:
    case 0x4346:
    case 0x4347:
    case 0x4348:
    case 0x434A:
    case 0x434B:
    case 0x434C:
    case 0x4370:
    case 0x4371:
    case 0x4372:
    case 0x4374:
    case 0x4376:
    case 0x4378:
    case 0x437C:
    case 0x437D:
    case 0x437E:
    case 0x4350:
    case 0x4351:
    case 0x4352:
    case 0x4361:
    case 0x4362:
    case 0x4364:
    case 0x4365:
    case 0x4367:
    case 0x4368:
    case 0x436A:
    case 0x436B:
    case 0x436D:
    case 0x436E:
    case 0x437F:
    case 0x4381:
    case 0x4382:
    case 0x4384:
    case 0x4386:
    case 0x4388:
    case 0x4389:
        status = func_008611C0(connection, packet);
        break;
    case 0x5021:
    case 0x5022:
    case 0x5023:
    case 0x5025:
    case 0x5027:
    case 0x5028:
    case 0x5029:
    case 0x5031:
    case 0x5033:
    case 0x5034:
    case 0x5035:
    case 0x5037:
    case 0x5038:
    case 0x5039:
    case 0x503B:
    case 0x503C:
    case 0x503D:
    case 0x5041:
    case 0x5042:
    case 0x5044:
    case 0x5045:
    case 0x5046:
    case 0x5048:
    case 0x5049:
    case 0x5051:
    case 0x5052:
    case 0x5053:
    case 0x5061:
    case 0x5062:
    case 0x5063:
    case 0x5071:
    case 0x5072:
    case 0x5073:
    case 0x5081:
    case 0x5082:
    case 0x5083:
    case 0x5085:
    case 0x5086:
    case 0x5088:
    case 0x508A:
    case 0x508C:
    case 0x508D:
    case 0x508F:
    case 0x5090:
    case 0x5091:
    case 0x5092:
    case 0x50A1:
    case 0x50A2:
    case 0x50A4:
    case 0x50A5:
    case 0x50A6:
    case 0x50A8:
    case 0x50A9:
    case 0x50B1:
    case 0x50B2:
    case 0x50C1:
    case 0x50D1:
    case 0x50D2:
    case 0x50E1:
    case 0x50E2:
    case 0x50F1:
    case 0x50F3:
    case 0x5100:
    case 0x5111:
        status = func_0085FE30(connection, packet);
        break;
    case 0x4702:
    case 0x4704:
    case 0x4782:
    case 0x4784:
    case 0x4786:
    case 0x4791:
    case 0x47A1:
    case 0x3082:
    case 0x3084:
    case 0x3086:
    case 0x4524:
    case 0x4525:
    case 0x4506:
    case 0x4507:
    case 0x4509:
    case 0x450A:
    case 0x450C:
    case 0x450D:
    case 0x4512:
    case 0x4521:
    case 0x4523:
    case 0x4581:
    case 0x4582:
    case 0x4583:
    case 0x4601:
    case 0x4602:
    case 0x4603:
    case 0x4103:
    case 0x4111:
    case 0x4116:
    case 0x9411:
    case 0x9412:
    case 0x9413:
    case 0x434E:
        status = func_0085F890(connection, packet);
        break;
    case 0x3087:
    case 0x3088:
    case 0x3089:
    case 0x308B:
    case 0x308D:
        status = func_0085F780(connection, packet);
        break;
    case 0x8101:
        status = func_00877430(packet, connection->request, &connection->error);
        event = 0x8101;
        break;
    case 0x8111:
        status = func_00877290(packet, &connection->error);
        event = 0x8110;
        break;
    case 0x8113:
        status = func_00877090(packet, &connection->error);
        event = 0x8110;
        break;
    case 0x8115:
        status = func_00876FB0(packet, &connection->error);
        event = 0x8115;
        break;
    case 0x8000:
        event = 0x8000;
        break;
    case 0x8001:
        event = 0x8001;
        break;
    case 0x8002:
        event = 0x8002;
        break;
    case 0x8151:
        status = func_00876530(packet, &connection->error);
        event = 0x8151;
        break;
    case 0x8153:
        status = func_00876440(packet, &connection->error);
        event = 0x8153;
        break;
    case 0x8155:
        status = func_00876320(packet, &connection->error);
        event = 0x8155;
        break;
    case 0x8157:
        status = func_00876230(packet, &connection->error);
        event = 0x8157;
        break;
    case 0x8159:
        status = func_00876140(packet, &connection->error);
        event = 0x8159;
        break;
    case 0x8121:
        func_001C48E8(connection->field147E8, 0, 0x810);
        status = func_00876D80(packet, connection->field147E8, &connection->error);
        event = 0x8121;
        break;
    case 0x8123:
        status = func_00876C20(packet, connection->field147E8, &connection->error);
        event = 0x8123;
        break;
    case 0x8131:
        func_001C48E8(connection->field14FF8, 0, 0x2b4);
        status = func_00876A30(packet, connection->field14FF8);
        event = 0x8131;
        break;
    case 0x8141:
        status = func_00876920(packet, &connection->error);
        event = 0x8141;
        break;
    case 0x814B:
        status = func_00876840(packet, &connection->error);
        event = 0x814b;
        break;
    case 0x8143:
        status = func_008767C0(packet, &connection->error);
        event = 0x8143;
        break;
    case 0x3042:
        status = func_00867B10(packet, connection->field49EC, connection->field153B4,
                               &connection->error);
        break;
    case 0x3062:
        status = func_00867670(packet, connection->field4B8C, &connection->error);
        break;
    case 0x3071:
        status = func_00867570(packet, &connection->error, connection->channel);
        break;
    case 0x3072:
        status = func_008672B0(packet, connection->channel, &connection->error);
        break;
    case 0x3073:
        status = func_00867250(packet, &connection->error, connection->channel,
                               &connection->channelResult);
        break;
    case 0x8103:
        status = func_008766E0(packet, &connection->error);
        if (status == 0) {
            event = 0x8103;
        } else {
            event = status;
        }
        break;
    case 0x8104:
        status = func_00876620(packet, connection->field152BE, connection->field152DF);
        event = 0x8104;
        break;
    case 0x8105:
        event = 0x8105;
        break;
    case 0x4402:
        status = func_00871A80(packet, connection->field139AC);
        if (status == 0) {
            event = 0x4402;
        } else {
            event = status;
        }
        break;
    case 0x4A01:
        status = func_0086AF60(packet, &connection->error);
        event = 0x4a01;
        break;
    case 0x4A03:
        status = func_0086AE80(packet, &connection->error);
        event = 0x4a03;
        break;
    case 0x4A04:
        status = func_0086AE00(packet, &connection->error);
        event = 0x4a04;
        break;
    case 0x4A11:
        status = func_0086AAC0(packet, connection->field153DC, connection->field155CC,
                               connection->field155F8, connection->field153D9,
                               connection->field101A4, connection->field101A7);
        connection->error = 0;
        event = 0x4a11;
        break;
    case 0x3091:
        status = func_00866D00(packet, &connection->error);
        break;
    case 0x3101:
        status = func_00866C00(packet, &connection->error);
        break;
    case 0x4B01:
        func_001C48E8(connection->field16118, 0, 0x2c);
        status = func_0086A980(packet, &connection->error, connection->field16118);
        event = 0x4b01;
        break;
    case 0x811B:
        func_001C48E8(connection->field15E18, 0, 0x300);
        status = func_008760B0(packet, &connection->error, connection->field15E18);
        break;
    case 0x811D:
        status = func_00876030(packet, &connection->error);
        break;
    case 0x810B:
        status = func_00875F60(packet, &connection->error);
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        status = NETLIB_UNEXPECTED_TAG;
        break;
    }
    if (status >= 0) {
        connection->pending = 0;
        event = status;
    }
    return event;
}
