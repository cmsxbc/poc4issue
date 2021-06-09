 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree144(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 18, (DAAL_DATA_TYPE)-2.0784999999999996);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 1, (DAAL_DATA_TYPE)-0.18149999999999997);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.0060917148677011338);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[2], 1, 6, (DAAL_DATA_TYPE)-0.23949999999999996);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.0093728746712693697);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.005566956168040634);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[1], 1, 18, (DAAL_DATA_TYPE)-0.78599999999999992);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 11, (DAAL_DATA_TYPE)0.91550000000000009);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 11, (DAAL_DATA_TYPE)0.78050000000000008);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 0, (DAAL_DATA_TYPE)0.54350000000000021);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 4, (DAAL_DATA_TYPE)-0.81949999999999978);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 13, (DAAL_DATA_TYPE)1.0525000000000002);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0013829012364149095);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.012192571424834785);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[11], 1, 23, (DAAL_DATA_TYPE)0.99850000000000005);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 23, (DAAL_DATA_TYPE)0.98550000000000015);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)-0.0005151609025363412);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0084544048736071489);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.0034316647219760667);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[10], 1, 4, (DAAL_DATA_TYPE)-0.77849999999999986);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 25, (DAAL_DATA_TYPE)0.59250000000000014);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0095371632703713013);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 24, (DAAL_DATA_TYPE)1.3545000000000003);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 27, (DAAL_DATA_TYPE)0.79050000000000009);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.004068297470306478);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0038707137144383718);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.0075399159471055983);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[20], 1, 0, (DAAL_DATA_TYPE)0.85050000000000014);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 14, (DAAL_DATA_TYPE)0.12050000000000001);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 6, (DAAL_DATA_TYPE)0.53250000000000008);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 11, (DAAL_DATA_TYPE)-1.0684999999999998);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.014222720069810749);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[31], 1, 15, (DAAL_DATA_TYPE)0.46550000000000008);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0011320600544826853);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.011076616235077382);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.016489844162155081);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.0020172900937754533);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[28], 1, 0, (DAAL_DATA_TYPE)1.0045000000000002);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 26, (DAAL_DATA_TYPE)0.95850000000000002);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 11, (DAAL_DATA_TYPE)-0.52649999999999986);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.008104045866903933);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.0062769977673888203);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.0096843824338387046);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[38], 1, 21, (DAAL_DATA_TYPE)1.0245000000000002);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 0, (DAAL_DATA_TYPE)1.0995000000000001);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)-0.0095110433921217919);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[45], 1, 6, (DAAL_DATA_TYPE)0.15150000000000002);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)0.0027485348891875729);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.0048019750776918651);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[44], 1, 5, (DAAL_DATA_TYPE)1.0025000000000002);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.013833437149878593);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0025723828974046881);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[9], 1, 13, (DAAL_DATA_TYPE)1.0475000000000001);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.013473048851093544);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.00098814503492220592);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[8], 1, 18, (DAAL_DATA_TYPE)-0.98649999999999982);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.0027920961333226125);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[56], 1, 14, (DAAL_DATA_TYPE)0.13650000000000004);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.0015301852764442881);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.010011944771908664);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.00014177836245897335);

}