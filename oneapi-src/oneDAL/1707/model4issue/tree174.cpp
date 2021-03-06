 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree174(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 9, (DAAL_DATA_TYPE)0.38650000000000007);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 18, (DAAL_DATA_TYPE)0.65250000000000019);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 19, (DAAL_DATA_TYPE)0.9255000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 2, (DAAL_DATA_TYPE)-0.010499999999999997);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)0.0095133397011802762);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[4], 1, 5, (DAAL_DATA_TYPE)0.74850000000000005);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.0079487011830012);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.00083112246601989401);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.0049315647035837176);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[2], 1, 26, (DAAL_DATA_TYPE)0.87950000000000006);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0084776833721358965);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)0.0033524507821615169);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[1], 1, 4, (DAAL_DATA_TYPE)-1.3544999999999998);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 4, (DAAL_DATA_TYPE)-1.474);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 0, (DAAL_DATA_TYPE)0.40750000000000003);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0089185453951358806);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[15], 1, 17, (DAAL_DATA_TYPE)0.75150000000000017);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 6, (DAAL_DATA_TYPE)0.50550000000000017);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 11, (DAAL_DATA_TYPE)0.64950000000000008);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 18, (DAAL_DATA_TYPE)-0.29549999999999993);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)0.010044548341378185);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.00071629371377639477);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.0057362986383614721);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0099594244399131889);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[17], 1, 26, (DAAL_DATA_TYPE)0.87950000000000006);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 5, (DAAL_DATA_TYPE)0.74150000000000016);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.00036215285460154217);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.0094676840648639446);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[25], 1, 10, (DAAL_DATA_TYPE)0.27550000000000008);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 25, (DAAL_DATA_TYPE)1.4645000000000004);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 18, (DAAL_DATA_TYPE)0.26050000000000006);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)0.0057659847558372557);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.0040548027143813671);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0075694090102333585);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[29], 1, 11, (DAAL_DATA_TYPE)-0.14899999999999997);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.00060856310185045006);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.009517487283722547);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[14], 1, 6, (DAAL_DATA_TYPE)-0.59649999999999992);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.0023047972418781784);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 2, (DAAL_DATA_TYPE)0.50950000000000017);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0034507939028347364);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 14, (DAAL_DATA_TYPE)-0.38749999999999996);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.018671962395310403);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0071183887051625393);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[13], 1, 4, (DAAL_DATA_TYPE)-1.2644999999999997);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 6, (DAAL_DATA_TYPE)-0.84349999999999981);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.010647794893676682);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.0014862647377706778);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[45], 1, 4, (DAAL_DATA_TYPE)-1.2354999999999998);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 24, (DAAL_DATA_TYPE)0.85750000000000004);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.01175138195976615);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.00033162583935163209);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[49], 1, 6, (DAAL_DATA_TYPE)2.5565000000000002);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 2, (DAAL_DATA_TYPE)-1.5444999999999998);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 21, (DAAL_DATA_TYPE)0.74450000000000005);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0078211253241417898);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 11, (DAAL_DATA_TYPE)1.2915000000000003);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.001981351507628478);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0074877934729946517);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.00024894938593059628);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)0.0069962820235752706);

}
