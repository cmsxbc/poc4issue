 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree139(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 14, (DAAL_DATA_TYPE)2.5005000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 9, (DAAL_DATA_TYPE)0.68950000000000011);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 25, (DAAL_DATA_TYPE)1.2185000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 10, (DAAL_DATA_TYPE)-0.6825);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 23, (DAAL_DATA_TYPE)0.98550000000000015);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 22, (DAAL_DATA_TYPE)0.96350000000000013);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)1.2193727646566307e-05);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.00834155797194212);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[5], 1, 3, (DAAL_DATA_TYPE)0.77750000000000019);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 3, (DAAL_DATA_TYPE)0.47850000000000004);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 5, (DAAL_DATA_TYPE)0.86450000000000016);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.00023607719157423291);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.01225618910510093);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[10], 1, 18, (DAAL_DATA_TYPE)-0.59649999999999992);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.00158606028604892);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.010025192390001098);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)-0.0038725912083537707);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[4], 1, 9, (DAAL_DATA_TYPE)0.53150000000000019);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 27, (DAAL_DATA_TYPE)0.59550000000000003);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.0087373163889754909);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[19], 1, 14, (DAAL_DATA_TYPE)-0.50149999999999995);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0030770796404864928);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 0, (DAAL_DATA_TYPE)1.6365000000000001);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.0031254605085922096);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0041388600571995735);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)0.68250000000000022);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 7, (DAAL_DATA_TYPE)-1.2104999999999999);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)0.0099346513506667379);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[27], 1, 4, (DAAL_DATA_TYPE)-1.3004999999999998);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0096390621440315804);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[29], 1, 17, (DAAL_DATA_TYPE)0.86850000000000016);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 2, (DAAL_DATA_TYPE)-0.77149999999999996);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.01034162391980107);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 17, (DAAL_DATA_TYPE)0.60150000000000003);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.0067319710506126285);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0064859964003836784);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 10, (DAAL_DATA_TYPE)0.13550000000000004);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.0022150679754141052);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.0088528962728256985);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[26], 1, 1, (DAAL_DATA_TYPE)-1.3334999999999997);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0036302775013609791);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 1, (DAAL_DATA_TYPE)-0.12749999999999997);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 23, (DAAL_DATA_TYPE)0.98450000000000004);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)0.0010459357127547263);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.011797033417748199);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[42], 1, 24, (DAAL_DATA_TYPE)0.69850000000000001);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0044419214189533266);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 18, (DAAL_DATA_TYPE)0.60150000000000003);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 13, (DAAL_DATA_TYPE)0.88950000000000007);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)0.0051100552373100072);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.0041803547452824814);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0087257085310725076);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[3], 1, 12, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 7, (DAAL_DATA_TYPE)0.063500000000000015);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)-0.0093893378944452516);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[54], 1, 0, (DAAL_DATA_TYPE)0.7895000000000002);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0069583025689308464);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.0041766904633153577);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)0.0062331838046454577);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)-0.000377830205363038);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0056618018159404022);

}