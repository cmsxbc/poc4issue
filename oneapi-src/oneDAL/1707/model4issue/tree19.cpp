 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree19(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.2115000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.67850000000000021);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 24, (DAAL_DATA_TYPE)0.75750000000000017);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)0.5375000000000002);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 17, (DAAL_DATA_TYPE)1.1435000000000002);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0038002994991299037);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)0.0089244359345347791);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 13, (DAAL_DATA_TYPE)0.83250000000000013);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.00064385341535700433);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.014105437546968462);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[3], 1, 18, (DAAL_DATA_TYPE)0.070500000000000021);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0061570656819399019);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.0011620862593113537);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)0.96550000000000014);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 26, (DAAL_DATA_TYPE)0.72850000000000004);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 15, (DAAL_DATA_TYPE)-1.1894999999999998);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)0.0097432324290275575);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)-0.006765903130265101);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[15], 1, 27, (DAAL_DATA_TYPE)1.2475000000000003);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 21, (DAAL_DATA_TYPE)1.2440000000000004);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 22, (DAAL_DATA_TYPE)1.0085000000000002);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0053909269846703477);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0096533685591835821);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)0.0010440884080405036);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[19], 1, 9, (DAAL_DATA_TYPE)1.0555000000000001);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)-0.0081119568302081193);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[25], 1, 3, (DAAL_DATA_TYPE)1.7030000000000001);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)0.010277350057685188);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.014237277404121732);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[14], 1, 26, (DAAL_DATA_TYPE)0.88850000000000018);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.0061289540581081223);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[30], 1, 14, (DAAL_DATA_TYPE)0.41050000000000003);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 6, (DAAL_DATA_TYPE)-0.59649999999999992);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.0020735876272908217);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 22, (DAAL_DATA_TYPE)0.96950000000000014);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 9, (DAAL_DATA_TYPE)0.8155);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)0.010806109125797566);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[36], 1, 7, (DAAL_DATA_TYPE)0.42350000000000004);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.010979993123075238);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0053637586725063819);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.011323793285281946);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0030731363952159886);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[1], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 24, (DAAL_DATA_TYPE)1.3295000000000001);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 25, (DAAL_DATA_TYPE)1.9785000000000001);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 11, (DAAL_DATA_TYPE)-0.54649999999999987);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0083816587743235811);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 19, (DAAL_DATA_TYPE)-0.42199999999999993);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.006641655683517456);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[48], 1, 27, (DAAL_DATA_TYPE)0.99950000000000017);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0044668263116398373);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 9, (DAAL_DATA_TYPE)1.5875000000000001);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.0087133715277189737);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0095530576649166289);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)-0.012868141848593952);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[44], 1, 17, (DAAL_DATA_TYPE)1.5035000000000001);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 1, (DAAL_DATA_TYPE)0.98550000000000015);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0042912069495235168);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.012629693415429858);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.011317520083061286);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)-0.012395803949662618);

}