 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree37(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 22, (DAAL_DATA_TYPE)1.0705000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 27, (DAAL_DATA_TYPE)0.89550000000000007);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)0.89350000000000007);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.76750000000000018);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 23, (DAAL_DATA_TYPE)1.2555000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 27, (DAAL_DATA_TYPE)0.66550000000000009);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 14, (DAAL_DATA_TYPE)-0.55149999999999999);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.0069816928872695333);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[8], 1, 24, (DAAL_DATA_TYPE)0.80550000000000022);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 26, (DAAL_DATA_TYPE)0.65150000000000008);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0051021060859314125);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.005246357099404411);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.015341953010786148);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[7], 1, 4, (DAAL_DATA_TYPE)-1.3674999999999999);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.0066742278395160552);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[15], 1, 22, (DAAL_DATA_TYPE)0.73650000000000004);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0064468971320560996);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.009051131432662245);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0096574190784903136);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[5], 1, 25, (DAAL_DATA_TYPE)0.49500000000000005);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0044666376746731037);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0026645784208363895);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[4], 1, 11, (DAAL_DATA_TYPE)1.4565000000000003);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 13, (DAAL_DATA_TYPE)0.48350000000000004);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)-0.018293886117894075);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[25], 1, 9, (DAAL_DATA_TYPE)1.0205000000000002);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.0071588554578583419);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[27], 1, 24, (DAAL_DATA_TYPE)1.0305000000000002);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 3, (DAAL_DATA_TYPE)0.63450000000000017);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.0072905393510029242);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.013039735751226545);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.01404060136526823);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.0056875162229344661);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[3], 1, 2, (DAAL_DATA_TYPE)-0.87149999999999983);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.00080755275697254932);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.0038170708705914901);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[2], 1, 24, (DAAL_DATA_TYPE)0.95950000000000013);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 0, (DAAL_DATA_TYPE)1.1945000000000003);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 18, (DAAL_DATA_TYPE)-1.7374999999999998);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0094253946095705036);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.0050529988700306269);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0095562667385035872);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[38], 1, 22, (DAAL_DATA_TYPE)0.75250000000000006);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 5, (DAAL_DATA_TYPE)1.1275000000000002);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 19, (DAAL_DATA_TYPE)0.49650000000000005);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0074587828001460507);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.01067346754399213);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.012097479872978651);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)-0.0020143729094717028);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[1], 1, 24, (DAAL_DATA_TYPE)0.77650000000000008);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 25, (DAAL_DATA_TYPE)0.50850000000000006);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.0028803551539045868);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0076171867714463909);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 18, (DAAL_DATA_TYPE)-1.2709999999999997);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 18, (DAAL_DATA_TYPE)-2.0784999999999996);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.0030698179610465703);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0088445166653057308);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 23, (DAAL_DATA_TYPE)1.4955000000000003);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0020465201610187535);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0089988523934568677);

}