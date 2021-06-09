 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree30(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)0.85650000000000015);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 9, (DAAL_DATA_TYPE)1.1875000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 24, (DAAL_DATA_TYPE)0.73550000000000015);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 19, (DAAL_DATA_TYPE)0.78450000000000009);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.0028695126832517892);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 26, (DAAL_DATA_TYPE)0.6645000000000002);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0121932175611296);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[7], 1, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.0043894875554307813);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.009110184213737162);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[4], 1, 1, (DAAL_DATA_TYPE)-1.1744999999999999);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0088448067547894343);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 0, (DAAL_DATA_TYPE)0.52550000000000019);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 9, (DAAL_DATA_TYPE)0.84750000000000003);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.012436402525220599);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0029147897814882215);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[14], 1, 18, (DAAL_DATA_TYPE)1.3105000000000002);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 0, (DAAL_DATA_TYPE)1.3375000000000001);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 25, (DAAL_DATA_TYPE)0.42850000000000005);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.0073654099030697603);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0029271535988218867);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[19], 1, 25, (DAAL_DATA_TYPE)0.76850000000000007);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.00036529138266483201);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.016678968220949175);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.010095347293087694);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0054665844310962022);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)1.0975000000000004);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 25, (DAAL_DATA_TYPE)0.68650000000000022);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.00018360061254703774);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0058026749287613923);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[28], 1, 6, (DAAL_DATA_TYPE)1.2175000000000002);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 22, (DAAL_DATA_TYPE)0.99250000000000005);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 5, (DAAL_DATA_TYPE)1.2185000000000004);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0044346240608348067);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)0.008229488208889961);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.0058392316644841971);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.013960970938205719);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[1], 1, 24, (DAAL_DATA_TYPE)1.0265000000000002);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 22, (DAAL_DATA_TYPE)1.0675000000000001);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 24, (DAAL_DATA_TYPE)0.6665000000000002);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0013749135752855722);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.007894903059403803);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[40], 1, 24, (DAAL_DATA_TYPE)0.79950000000000021);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.0046793878440641694);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 5, (DAAL_DATA_TYPE)1.7110000000000001);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0044116609212425028);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.0087734941499573848);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[39], 1, 3, (DAAL_DATA_TYPE)1.7675000000000003);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 5, (DAAL_DATA_TYPE)1.1275000000000002);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.00063030183710883158);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 25, (DAAL_DATA_TYPE)1.8525000000000003);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 24, (DAAL_DATA_TYPE)2.2220000000000004);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.0062287885237838972);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.0080146108632502353);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[52], 1, 17, (DAAL_DATA_TYPE)1.5415000000000003);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0071725903433703248);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.01311843764781952);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[49], 1, 11, (DAAL_DATA_TYPE)-0.78449999999999986);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.003190496976713877);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.00741558780840465);

}
