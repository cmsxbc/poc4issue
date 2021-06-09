 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree164(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 21, (DAAL_DATA_TYPE)0.42850000000000005);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 11, (DAAL_DATA_TYPE)0.83950000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 15, (DAAL_DATA_TYPE)0.15350000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 8, (DAAL_DATA_TYPE)1.6300000000000001);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.0035557759460061789);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.0062652805367031626);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.0065447655359381135);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[2], 1, 3, (DAAL_DATA_TYPE)1.0255000000000003);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)-0.01552109021693468);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.0035665264725685121);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[1], 1, 2, (DAAL_DATA_TYPE)1.7240000000000004);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 26, (DAAL_DATA_TYPE)2.5650000000000004);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 9, (DAAL_DATA_TYPE)0.68950000000000011);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.00066715945652328235);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 9, (DAAL_DATA_TYPE)0.90750000000000008);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 22, (DAAL_DATA_TYPE)0.84350000000000003);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 13, (DAAL_DATA_TYPE)0.68950000000000011);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 7, (DAAL_DATA_TYPE)0.58350000000000002);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)-0.0056337902361720607);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0041236445258714654);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[17], 1, 14, (DAAL_DATA_TYPE)0.86050000000000015);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0022688188942746055);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.010536202687618075);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.0045557072632672153);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[16], 1, 7, (DAAL_DATA_TYPE)-0.18949999999999997);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.00041480190418876673);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 19, (DAAL_DATA_TYPE)-1.0864999999999998);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 22, (DAAL_DATA_TYPE)0.97350000000000014);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0022356099051680286);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0062176464424144639);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[28], 1, 7, (DAAL_DATA_TYPE)0.55650000000000011);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 3, (DAAL_DATA_TYPE)1.2105000000000004);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 0, (DAAL_DATA_TYPE)1.1195000000000002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 25, (DAAL_DATA_TYPE)0.92250000000000021);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.018209485294154056);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)-0.0082798715028299125);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0043563299072094455);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0024982512376065984);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[32], 1, 24, (DAAL_DATA_TYPE)0.73550000000000015);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0031016876022413112);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 7, (DAAL_DATA_TYPE)0.70950000000000013);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0035875551439821722);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0061560204020112428);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[15], 1, 19, (DAAL_DATA_TYPE)-1.5014999999999998);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 17, (DAAL_DATA_TYPE)1.1645000000000001);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 21, (DAAL_DATA_TYPE)0.82250000000000012);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0062242361739641289);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.0023669175554199944);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0077820977234266328);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[45], 1, 24, (DAAL_DATA_TYPE)0.9195000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 21, (DAAL_DATA_TYPE)0.62050000000000016);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.0061787707395851614);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[52], 1, 0, (DAAL_DATA_TYPE)1.2285000000000001);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)-3.9107089393666647e-05);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[54], 1, 13, (DAAL_DATA_TYPE)0.49350000000000005);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.0070028170291334393);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0050347329376349125);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.0012895910277481585);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.0050414206590070282);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0052078554484372343);

}
