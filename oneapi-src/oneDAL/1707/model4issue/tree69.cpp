 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree69(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 13, (DAAL_DATA_TYPE)1.4705000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.97350000000000014);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 24, (DAAL_DATA_TYPE)2.2220000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 26, (DAAL_DATA_TYPE)0.87950000000000006);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 27, (DAAL_DATA_TYPE)0.76050000000000006);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 3, (DAAL_DATA_TYPE)0.42050000000000004);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.0040912001590493697);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[6], 1, 9, (DAAL_DATA_TYPE)0.7965000000000001);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 22, (DAAL_DATA_TYPE)0.60950000000000004);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.010093177078912656);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 5, (DAAL_DATA_TYPE)0.37050000000000005);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.014668471910632575);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.0020267161816557694);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.0024616815156682775);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[5], 1, 0, (DAAL_DATA_TYPE)1.1945000000000003);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 3, (DAAL_DATA_TYPE)1.7525000000000002);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)5.4599036714838205e-05);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)-0.0083459190382012011);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[15], 1, 25, (DAAL_DATA_TYPE)0.76850000000000007);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.0031802732257112383);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.016025424104494354);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[4], 1, 18, (DAAL_DATA_TYPE)0.93150000000000011);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 18, (DAAL_DATA_TYPE)0.26050000000000006);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 24, (DAAL_DATA_TYPE)1.8615000000000002);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 7, (DAAL_DATA_TYPE)0.70950000000000013);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.0019212877305546294);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.0025509873349147368);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.014053713567554952);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[23], 1, 26, (DAAL_DATA_TYPE)1.1615000000000002);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0030180656476911619);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.011524567306041719);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[22], 1, 1, (DAAL_DATA_TYPE)0.10350000000000001);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.0061299691757617097);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)0.0015235449031273031);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.014377776598152909);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[2], 1, 24, (DAAL_DATA_TYPE)1.2895000000000001);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 27, (DAAL_DATA_TYPE)0.94750000000000012);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.00085401406402654627);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0045754316580394394);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[36], 1, 22, (DAAL_DATA_TYPE)1.0325000000000002);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 27, (DAAL_DATA_TYPE)1.0285000000000002);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0031919278607175161);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 26, (DAAL_DATA_TYPE)1.4625000000000001);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0098394615212228243);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0010259455467964854);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[40], 1, 7, (DAAL_DATA_TYPE)-1.0104999999999997);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.015010754377581179);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 25, (DAAL_DATA_TYPE)1.9045000000000003);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 9, (DAAL_DATA_TYPE)1.0615000000000003);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0047024686009653162);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)0.012717617303133012);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.0086778936907649044);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[1], 1, 10, (DAAL_DATA_TYPE)-1.0664999999999998);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.0030010297332472846);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 3, (DAAL_DATA_TYPE)1.8535000000000001);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 24, (DAAL_DATA_TYPE)1.0265000000000002);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 5, (DAAL_DATA_TYPE)0.5445000000000001);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.010656361013650896);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.00205600804249034);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.005850182240456343);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.0043045460033404124);

}
