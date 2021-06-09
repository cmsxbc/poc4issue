 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree192(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    builder.addLeafNode(treeId, nodeIds[1], 0, (DAAL_DATA_TYPE)0.00036772533218558693);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[1], 1, 26, (DAAL_DATA_TYPE)0.92250000000000021);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 0, (DAAL_DATA_TYPE)1.3045000000000002);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 13, (DAAL_DATA_TYPE)0.83650000000000013);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0040805286350446982);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 25, (DAAL_DATA_TYPE)1.0255000000000003);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 21, (DAAL_DATA_TYPE)0.87850000000000017);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.0013675375335982869);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.0092082823100297344);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[7], 1, 9, (DAAL_DATA_TYPE)0.62650000000000017);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0062502604787764348);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 27, (DAAL_DATA_TYPE)0.72250000000000003);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.015715404537816845);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 24, (DAAL_DATA_TYPE)0.98950000000000016);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)1.8745912814341571e-05);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0096165355868064444);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0079631026849517079);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[3], 1, 27, (DAAL_DATA_TYPE)0.9295000000000001);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 25, (DAAL_DATA_TYPE)1.8760000000000001);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 17, (DAAL_DATA_TYPE)0.77650000000000008);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 17, (DAAL_DATA_TYPE)0.55150000000000021);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 7, (DAAL_DATA_TYPE)-0.13749999999999998);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 17, (DAAL_DATA_TYPE)0.45450000000000007);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.0028118159365037396);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.015455737936177424);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0021469397641414286);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[22], 1, 10, (DAAL_DATA_TYPE)-0.42249999999999993);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.0038251617163615791);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[28], 1, 24, (DAAL_DATA_TYPE)1.0435000000000001);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 0, (DAAL_DATA_TYPE)0.80950000000000022);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.0071214711357807303);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0056604014857756825);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.011645569535903634);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[21], 1, 21, (DAAL_DATA_TYPE)0.69650000000000001);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.012997374647030874);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 21, (DAAL_DATA_TYPE)0.89950000000000008);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 18, (DAAL_DATA_TYPE)0.81250000000000011);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0036486304833119538);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0064957132506551166);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[37], 1, 13, (DAAL_DATA_TYPE)1.1595000000000002);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0088766561271861593);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 11, (DAAL_DATA_TYPE)0.26850000000000007);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.005583635365797414);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0092009824915574145);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.007240747308115596);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[19], 1, 24, (DAAL_DATA_TYPE)1.3985000000000001);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 2, (DAAL_DATA_TYPE)-1.5444999999999998);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.0091734995060649364);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[48], 1, 23, (DAAL_DATA_TYPE)1.2975000000000001);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.0019059336453990828);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 27, (DAAL_DATA_TYPE)1.0375000000000003);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.011747267505242713);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-2.9533152138033223e-05);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[47], 1, 2, (DAAL_DATA_TYPE)0.7965000000000001);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0020998170736669071);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 27, (DAAL_DATA_TYPE)1.3125000000000002);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[57], 0, 14, (DAAL_DATA_TYPE)0.078500000000000014);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)-0.000605908140540123);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.014014772392277206);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.00086371527035154555);

}