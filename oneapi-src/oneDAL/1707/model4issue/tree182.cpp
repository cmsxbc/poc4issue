 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree182(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 19, (DAAL_DATA_TYPE)1.4605000000000004);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 6, (DAAL_DATA_TYPE)-2.7564999999999995);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)-0.0072788040069016544);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[2], 1, 24, (DAAL_DATA_TYPE)0.74850000000000005);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 13, (DAAL_DATA_TYPE)0.32350000000000007);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0067706298978569418);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 11, (DAAL_DATA_TYPE)1.1295000000000002);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 3, (DAAL_DATA_TYPE)1.7785000000000002);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 17, (DAAL_DATA_TYPE)0.48050000000000004);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 23, (DAAL_DATA_TYPE)0.99750000000000016);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 21, (DAAL_DATA_TYPE)0.88050000000000017);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 21, (DAAL_DATA_TYPE)0.69650000000000001);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0024119954331424734);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.0072493430630614364);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0063670974674409839);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.010574595371938566);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[9], 1, 17, (DAAL_DATA_TYPE)0.50650000000000006);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0092751272871871206);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[17], 1, 1, (DAAL_DATA_TYPE)-1.6564999999999996);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)0.00888691481978943);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[19], 1, 17, (DAAL_DATA_TYPE)0.70250000000000001);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 3, (DAAL_DATA_TYPE)1.1805000000000001);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0024892566222697501);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.00675861080392049);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0024971139145273605);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.004573587802520325);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[7], 1, 8, (DAAL_DATA_TYPE)1.6300000000000001);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 21, (DAAL_DATA_TYPE)0.95150000000000012);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 25, (DAAL_DATA_TYPE)0.71650000000000003);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0089954907628330034);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.00051018984170717204);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.0057181362862674858);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.0059531661062143179);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[4], 1, 26, (DAAL_DATA_TYPE)0.61650000000000016);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0071388056887121036);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.00021299252222392506);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[1], 1, 3, (DAAL_DATA_TYPE)0.37750000000000006);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.0080743941829793837);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 15, (DAAL_DATA_TYPE)-0.38349999999999995);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 23, (DAAL_DATA_TYPE)1.1885000000000001);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 19, (DAAL_DATA_TYPE)1.5765000000000002);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 22, (DAAL_DATA_TYPE)0.93450000000000022);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.011069731168182833);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0017365056333010613);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[41], 1, 14, (DAAL_DATA_TYPE)-0.21149999999999997);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)-0.0046870683585958821);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.0039747791906476629);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.010770667462863705);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[39], 1, 24, (DAAL_DATA_TYPE)0.69850000000000001);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0061899095322146564);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 17, (DAAL_DATA_TYPE)0.5635);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.004771061921240511);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[51], 1, 25, (DAAL_DATA_TYPE)0.65450000000000019);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.0025711968102875879);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 13, (DAAL_DATA_TYPE)0.9405);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 5, (DAAL_DATA_TYPE)0.93450000000000022);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.011807719841599465);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.002479581313271975);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 19, (DAAL_DATA_TYPE)1.5625000000000002);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0045122227814951626);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0057715700699999513);

}
